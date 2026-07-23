/*
 * XREFs of RtlGetAppContainerParent @ 0x1800F2380
 * Callers:
 *     RtlDefaultNpAcl @ 0x1800019D0 (RtlDefaultNpAcl.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BBE8 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlGetAppContainerSidType @ 0x18000AC80 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x180012E40 (RtlInitializeSid.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  _DWORD *Heap; // rax
  _DWORD *v5; // rbx
  __int64 v7; // rbp
  int v8; // edi
  _DWORD *v9; // rcx
  char *v10; // rsi
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+48h] [rbp+10h] BYREF

  *AppContainerSidParent = 0LL;
  if ( RtlGetAppContainerSidType(AppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ChildAppContainerSidType )
  {
    return -1073741811;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 0x28uLL);
  v5 = Heap;
  if ( !Heap )
    return -1073741670;
  v7 = 8LL;
  v8 = RtlInitializeSid(Heap, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 8u);
  if ( v8 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  else
  {
    v9 = v5 + 2;
    v10 = (char *)((_BYTE *)AppContainerSid - (_BYTE *)v5);
    do
    {
      *v9 = *(_DWORD *)((char *)v9 + (_QWORD)v10);
      ++v9;
      --v7;
    }
    while ( v7 );
    *AppContainerSidParent = v5;
    return 0;
  }
  return v8;
}
