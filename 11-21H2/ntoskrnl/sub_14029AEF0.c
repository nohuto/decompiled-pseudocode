/*
 * XREFs of sub_14029AEF0 @ 0x14029AEF0
 * Callers:
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     sub_14042D380 @ 0x14042D380 (sub_14042D380.c)
 * Callees:
 *     sub_140242104 @ 0x140242104 (sub_140242104.c)
 *     sub_140298BF0 @ 0x140298BF0 (sub_140298BF0.c)
 *     sub_14041F720 @ 0x14041F720 (sub_14041F720.c)
 */

__int64 __fastcall sub_14029AEF0(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v5; // rbx
  int v6; // edx

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *((_QWORD *)CurrentPrcb + 4408);
  v6 = *((_DWORD *)CurrentPrcb + 8818);
  *(_DWORD *)(v5 + 48) = v6;
  if ( (*(_BYTE *)(a1 + 368) & 1) == 0 && ((v6 & 0x100040) == 1048640 || (v6 & 0x100008) == 1048584) )
    sub_140242104(v5, v6);
  sub_140298BF0(a1, a2, v5);
  return sub_14041F720((char *)CurrentPrcb + 256);
}
