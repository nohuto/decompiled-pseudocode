/*
 * XREFs of sub_140248BC8 @ 0x140248BC8
 * Callers:
 *     sub_1406C86A0 @ 0x1406C86A0 (sub_1406C86A0.c)
 *     sub_1406C8888 @ 0x1406C8888 (sub_1406C8888.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_140248BC8(__int64 a1, volatile signed __int64 *a2)
{
  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  sub_1402AFC00((ULONG_PTR)a2);
  return sub_1402F9540(a1);
}
