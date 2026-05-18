/*
 * XREFs of sub_18009EC58 @ 0x18009EC58
 * Callers:
 *     sub_1800397A0 @ 0x1800397A0 (sub_1800397A0.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180043BCC @ 0x180043BCC (sub_180043BCC.c)
 */

void __fastcall sub_18009EC58(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r11
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = a2;
  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 != v4 )
  {
    v6 = *(_QWORD *)(v5 + 112);
    v7 = *(_QWORD *)(v4 + 112);
    if ( v6 != v7 && (!v6 || !v7 || !sub_180043BCC(v6, v7)) )
    {
      sub_1800124F8((__int64 *)(a1 + 24), v2);
      *(_BYTE *)(a1 + 61) = 1;
    }
  }
}
