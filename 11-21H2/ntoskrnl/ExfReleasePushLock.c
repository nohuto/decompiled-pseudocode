/*
 * XREFs of ExfReleasePushLock @ 0x140359E10
 * Callers:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_140609FA0 @ 0x140609FA0 (sub_140609FA0.c)
 *     sub_1406EB634 @ 0x1406EB634 (sub_1406EB634.c)
 *     sub_1409C56F0 @ 0x1409C56F0 (sub_1409C56F0.c)
 *     sub_140A02E2C @ 0x140A02E2C (sub_140A02E2C.c)
 *     sub_140A0350C @ 0x140A0350C (sub_140A0350C.c)
 *     sub_140A03DA4 @ 0x140A03DA4 (sub_140A03DA4.c)
 *     sub_140B240EC @ 0x140B240EC (sub_140B240EC.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x140359EF0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive(a1);
}
