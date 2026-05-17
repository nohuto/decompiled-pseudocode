/*
 * XREFs of RtlGetAppContainerParent @ 0x1800F0F70
 * Callers:
 *     RtlDefaultNpAcl @ 0x1800019A0 (RtlDefaultNpAcl.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BE08 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlGetAppContainerSidType @ 0x18000AEA0 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x180013050 (RtlInitializeSid.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlGetAppContainerParent(__int64 a1, __int64 *a2)
{
  __int64 Heap; // rax
  __int64 v5; // rbx
  __int64 v7; // rbp
  int v8; // edi
  _DWORD *v9; // rcx
  __int64 v10; // rsi
  int v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (int)RtlGetAppContainerSidType(a1, &v11) < 0 || v11 != 1 )
    return 3221225485LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 40LL);
  v5 = Heap;
  if ( !Heap )
    return 3221225626LL;
  v7 = 8LL;
  v8 = RtlInitializeSid(Heap, (__int64)&RtlpAppPackageAuthority, 8u);
  if ( v8 < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  else
  {
    v9 = (_DWORD *)(v5 + 8);
    v10 = a1 - v5;
    do
    {
      *v9 = *(_DWORD *)((char *)v9 + v10);
      ++v9;
      --v7;
    }
    while ( v7 );
    *a2 = v5;
    return 0;
  }
  return (unsigned int)v8;
}
