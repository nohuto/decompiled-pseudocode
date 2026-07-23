/*
 * XREFs of sub_1406C9174 @ 0x1406C9174
 * Callers:
 *     sub_1407AC930 @ 0x1407AC930 (sub_1407AC930.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1406C926C @ 0x1406C926C (sub_1406C926C.c)
 *     sub_1406C92E0 @ 0x1406C92E0 (sub_1406C92E0.c)
 *     sub_14074B7A0 @ 0x14074B7A0 (sub_14074B7A0.c)
 *     sub_1407A6FD8 @ 0x1407A6FD8 (sub_1407A6FD8.c)
 */

__int64 __fastcall sub_1406C9174(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  signed __int64 *v3; // rdi
  __int64 v7; // rdx
  int v8; // eax

  v3 = (signed __int64 *)(a1 + 352);
  *a3 = 0LL;
  a3[1] = 0LL;
  ExAcquirePushLockSharedEx(a1 + 352, 0LL);
  v8 = *(_DWORD *)(a1 + 416);
  if ( a2[8] == a1 )
  {
    if ( (v8 & 0x40) != 0 )
    {
      a2[8] = 0LL;
      a2[7] = 0LL;
    }
    else
    {
      ++*((_WORD *)a2 - 15);
      sub_14074B7A0(a1, a2);
    }
LABEL_12:
    if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3);
    sub_1402AFC00((ULONG_PTR)v3);
    sub_1406C926C(a1, a2, a3, 0LL);
    return 3221225507LL;
  }
  if ( (v8 & 0x40) == 0 )
  {
    if ( a2[2] )
      sub_1407A6FD8(a2, v7);
    ++*((_WORD *)a2 - 15);
    sub_1406C92E0(a1, a2);
    goto LABEL_12;
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  sub_1402AFC00((ULONG_PTR)v3);
  return 3221227264LL;
}
