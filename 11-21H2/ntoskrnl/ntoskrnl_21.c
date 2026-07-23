/*
 * XREFs of ntoskrnl_21 @ 0x1406A73E0
 * Callers:
 *     sub_140639C30 @ 0x140639C30 (sub_140639C30.c)
 *     sub_1409F9AD0 @ 0x1409F9AD0 (sub_1409F9AD0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1406A7498 @ 0x1406A7498 (sub_1406A7498.c)
 */

__int64 __fastcall ntoskrnl_21(__int64 a1, _OWORD *a2)
{
  signed __int64 *v4; // rbx
  _OWORD **v5; // rax
  _OWORD *v6; // rax
  int v8; // [rsp+20h] [rbp-28h]
  _OWORD *v9; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v4 = (signed __int64 *)(a1 + 47024);
  ExAcquirePushLockSharedEx(a1 + 47024, 0LL);
  v5 = *(_OWORD ***)(a1 + 47016);
  if ( v5 )
  {
    v9 = *v5;
    v8 = sub_1406A7498(&v9);
    if ( v8 >= 0 )
    {
      v6 = v9;
      *a2 = *v9;
      a2[1] = v6[1];
      a2[2] = v6[2];
    }
  }
  else
  {
    v8 = -1073741275;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  sub_1402AFC00((ULONG_PTR)v4);
  return (unsigned int)v8;
}
