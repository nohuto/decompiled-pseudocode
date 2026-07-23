/*
 * XREFs of sub_1406E717C @ 0x1406E717C
 * Callers:
 *     sub_1406E7088 @ 0x1406E7088 (sub_1406E7088.c)
 *     sub_1407C3E50 @ 0x1407C3E50 (sub_1407C3E50.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

__int64 __fastcall sub_1406E717C(unsigned int a1)
{
  return ExReleasePushLockEx(
           (ULONG_PTR)qword_140C493B8
         + 16
         * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027
                                                                                                 * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF),
           0LL);
}
