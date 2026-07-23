/*
 * XREFs of sub_14029B804 @ 0x14029B804
 * Callers:
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 * Callees:
 *     sub_14022E984 @ 0x14022E984 (sub_14022E984.c)
 *     sub_14041F500 @ 0x14041F500 (sub_14041F500.c)
 *     sub_14041F650 @ 0x14041F650 (sub_14041F650.c)
 */

__int64 __fastcall sub_14029B804(int a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // r10
  int v6; // r9d
  char v7; // r11

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *((_QWORD *)CurrentPrcb + 4408);
  v6 = *(_DWORD *)(v5 + 48);
  v7 = *(_BYTE *)(v5 + 56) & 1;
  if ( !v7
    && ((v6 & 0x100008) == 1048584 || (v6 & 0x100040) == 1048640)
    && (v6 & 0x100040) == 0x100040
    && (MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFC) != 0 )
  {
    sub_14022E984(*(int *)(v5 + 1248) + v5 + 720, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFC);
  }
  sub_14041F500(a1, a2, v5, v6, v7);
  return sub_14041F650((char *)CurrentPrcb + 256);
}
