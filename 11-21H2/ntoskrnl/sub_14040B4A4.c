/*
 * XREFs of sub_14040B4A4 @ 0x14040B4A4
 * Callers:
 *     sub_14040AE3C @ 0x14040AE3C (sub_14040AE3C.c)
 *     sub_14040C320 @ 0x14040C320 (sub_14040C320.c)
 *     sub_14040C3E0 @ 0x14040C3E0 (sub_14040C3E0.c)
 *     sub_14040C740 @ 0x14040C740 (sub_14040C740.c)
 * Callees:
 *     sub_140259650 @ 0x140259650 (sub_140259650.c)
 *     sub_14040D840 @ 0x14040D840 (sub_14040D840.c)
 *     sub_1404116B0 @ 0x1404116B0 (sub_1404116B0.c)
 */

__int64 __fastcall sub_14040B4A4(int a1, int a2, int a3, int a4, __int64 a5)
{
  if ( (((unsigned __int16)dword_140C094E0 | (unsigned __int16)sub_140259650()) & 0x181) != 0 )
    return sub_14040D840(a1, a2, a3, a4, a5);
  else
    return sub_1404116B0(a1, a2, a3, a4, a5);
}
