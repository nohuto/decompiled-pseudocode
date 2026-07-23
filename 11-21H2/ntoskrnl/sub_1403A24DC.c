/*
 * XREFs of sub_1403A24DC @ 0x1403A24DC
 * Callers:
 *     sub_1403A2480 @ 0x1403A2480 (sub_1403A2480.c)
 * Callees:
 *     sub_1403A32AC @ 0x1403A32AC (sub_1403A32AC.c)
 *     sub_1403A3520 @ 0x1403A3520 (sub_1403A3520.c)
 */

__int64 __fastcall sub_1403A24DC(unsigned __int8 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = a1;
  if ( !byte_140E01844 )
    return 4LL;
  dword_140C548D0 = 0;
  word_140CF713C = dword_140CF72A0;
  dword_140CF7128 = HIWORD(dword_140CF72A0);
  v4 = sub_1403A3520((unsigned __int16)dword_140CF72A0, HIWORD(dword_140CF72A0));
  *(_WORD *)(v4 - 6) = -1;
  *(_DWORD *)(v4 - 4) = 0xFFFF;
  LOWORD(dword_140CF7128) = dword_140CF7128 - 6;
  v5 = sub_1403A3520(0LL, 0LL);
  return sub_1403A32AC(v6, *(unsigned __int16 *)(v5 + 4 * v2 + 2), *(unsigned __int16 *)(v5 + 4 * v2), a2);
}
