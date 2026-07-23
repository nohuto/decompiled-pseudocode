/*
 * XREFs of sub_1407530D0 @ 0x1407530D0
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     sub_1409C6000 @ 0x1409C6000 (sub_1409C6000.c)
 *     sub_1409C61B0 @ 0x1409C61B0 (sub_1409C61B0.c)
 *     SeSetSessionIdTokenWithLinked @ 0x1409C6320 (SeSetSessionIdTokenWithLinked.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402DF7D8 @ 0x1402DF7D8 (sub_1402DF7D8.c)
 *     sub_140672524 @ 0x140672524 (sub_140672524.c)
 *     sub_1406965F4 @ 0x1406965F4 (sub_1406965F4.c)
 *     sub_1406AB17C @ 0x1406AB17C (sub_1406AB17C.c)
 */

__int64 __fastcall sub_1407530D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  void *v5; // rdi
  unsigned int v6; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r8
  bool v10; // zf
  __int64 v12; // rdx
  signed __int32 v13[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0LL;
  Object = 0LL;
  v6 = a2;
  if ( !dword_140D3B0CC )
    v5 = sub_1402DF7D8((unsigned int)a2, a2, a3, a4);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v13, 0);
  if ( *(_BYTE *)(a1 + 204) )
  {
    v4 = -1073741525;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 1080);
      if ( v12 )
      {
        sub_1406AB17C(*(_DWORD *)(a1 + 120), v12);
        *(_QWORD *)(a1 + 1080) = 0LL;
      }
    }
    if ( *(_DWORD *)(a1 + 120) != v6 )
    {
      LOBYTE(v9) = 1;
      sub_140672524(a1, v6, v9, (__int64)v5, &Object);
      v5 = 0LL;
    }
    v10 = (*(_DWORD *)(a1 + 200) & 0x4000) == 0;
    *(_DWORD *)(a1 + 120) = v6;
    if ( !v10 )
      v4 = sub_1406965F4(a1, *(_QWORD *)(a1 + 784));
  }
  _InterlockedOr(v13, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( Object )
    ObfDereferenceObject(Object);
  return v4;
}
