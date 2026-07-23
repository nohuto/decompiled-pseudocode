/*
 * XREFs of sub_140767E88 @ 0x140767E88
 * Callers:
 *     sub_1407668C8 @ 0x1407668C8 (sub_1407668C8.c)
 *     sub_140767DF8 @ 0x140767DF8 (sub_140767DF8.c)
 *     sub_140768080 @ 0x140768080 (sub_140768080.c)
 *     sub_1407682A8 @ 0x1407682A8 (sub_1407682A8.c)
 *     sub_14080EB6C @ 0x14080EB6C (sub_14080EB6C.c)
 *     sub_1409581A0 @ 0x1409581A0 (sub_1409581A0.c)
 *     sub_1409582A8 @ 0x1409582A8 (sub_1409582A8.c)
 * Callees:
 *     sub_140767EAC @ 0x140767EAC (sub_140767EAC.c)
 */

bool __fastcall sub_140767E88(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)sub_140767EAC(a1, a2, *a1, a3) != -1;
}
