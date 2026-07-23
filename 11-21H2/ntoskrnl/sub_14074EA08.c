/*
 * XREFs of sub_14074EA08 @ 0x14074EA08
 * Callers:
 *     sub_14074E85C @ 0x14074E85C (sub_14074E85C.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14074D458 @ 0x14074D458 (sub_14074D458.c)
 */

__int64 __fastcall sub_14074EA08(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rsi
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax

  v4 = *(__int64 **)(a1 + 16);
  v6 = (*(_DWORD *)(a1 + 416) >> 1) & 3;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v4 - 2), 0LL);
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v8 = *v4;
      v9 = v4[1];
      goto LABEL_4;
    }
    v8 = v4[2];
  }
  else
  {
    v8 = *v4;
  }
  v9 = v8;
LABEL_4:
  if ( v8 )
    v8 &= -(__int64)(ObReferenceObjectSafe(v8) != 0);
  if ( v9 )
    v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
  if ( v8 && v9 )
  {
    ExAcquirePushLockSharedEx(v8 + 352, 0LL);
    if ( v9 != v8 )
      ExAcquirePushLockSharedEx(v9 + 352, 0LL);
    if ( (*(_DWORD *)(v8 + 416) & 0x20) == 0 && (*(_DWORD *)(v9 + 416) & 0x20) == 0 )
    {
      *a2 = v8;
      result = 0LL;
      *a3 = v9;
      return result;
    }
    sub_14074D458((__int64)v4, (signed __int64 *)v8, (signed __int64 *)v9);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v4 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4 - 2);
    sub_1402AFC00((ULONG_PTR)(v4 - 2));
    if ( v8 )
      ObfDereferenceObject((PVOID)v8);
    if ( v9 )
      ObfDereferenceObject((PVOID)v9);
  }
  return 3221225527LL;
}
