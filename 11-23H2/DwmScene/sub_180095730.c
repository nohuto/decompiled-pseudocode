/*
 * XREFs of sub_180095730 @ 0x180095730
 * Callers:
 *     sub_180095580 @ 0x180095580 (sub_180095580.c)
 *     sub_18009564C @ 0x18009564C (sub_18009564C.c)
 *     sub_1800EAB71 @ 0x1800EAB71 (sub_1800EAB71.c)
 * Callees:
 *     sub_180095158 @ 0x180095158 (sub_180095158.c)
 */

__int64 __fastcall sub_180095730(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) > 0x100uLL )
    return sub_180095158(*(LPVOID *)a1);
  return result;
}
