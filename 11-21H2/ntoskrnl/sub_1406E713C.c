/*
 * XREFs of sub_1406E713C @ 0x1406E713C
 * Callers:
 *     sub_1406E7088 @ 0x1406E7088 (sub_1406E7088.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_1406E713C(unsigned int a1)
{
  ExAcquirePushLockExclusiveEx(
    (ULONG_PTR)qword_140C493B8
  + 16
  * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF),
    0LL);
}
