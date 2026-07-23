/*
 * XREFs of sub_1402D81DC @ 0x1402D81DC
 * Callers:
 *     sub_1402D8104 @ 0x1402D8104 (sub_1402D8104.c)
 *     sub_1402D86CC @ 0x1402D86CC (sub_1402D86CC.c)
 *     sub_1402DB738 @ 0x1402DB738 (sub_1402DB738.c)
 *     sub_1405FEF04 @ 0x1405FEF04 (sub_1405FEF04.c)
 *     sub_1405FEF58 @ 0x1405FEF58 (sub_1405FEF58.c)
 *     sub_140A7F132 @ 0x140A7F132 (sub_140A7F132.c)
 *     sub_140A8AAE0 @ 0x140A8AAE0 (sub_140A8AAE0.c)
 *     sub_140A8AB50 @ 0x140A8AB50 (sub_140A8AB50.c)
 *     sub_140A8AD1C @ 0x140A8AD1C (sub_140A8AD1C.c)
 *     sub_140A8AE08 @ 0x140A8AE08 (sub_140A8AE08.c)
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140A8B190 @ 0x140A8B190 (sub_140A8B190.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 *     sub_140A8B450 @ 0x140A8B450 (sub_140A8B450.c)
 *     sub_140A8B588 @ 0x140A8B588 (sub_140A8B588.c)
 *     sub_140A8B654 @ 0x140A8B654 (sub_140A8B654.c)
 *     sub_140A916B8 @ 0x140A916B8 (sub_140A916B8.c)
 *     sub_140A91728 @ 0x140A91728 (sub_140A91728.c)
 *     sub_140A91A50 @ 0x140A91A50 (sub_140A91A50.c)
 *     sub_140A91AD0 @ 0x140A91AD0 (sub_140A91AD0.c)
 *     sub_140A91C30 @ 0x140A91C30 (sub_140A91C30.c)
 *     sub_140A91EDC @ 0x140A91EDC (sub_140A91EDC.c)
 *     sub_140A91F88 @ 0x140A91F88 (sub_140A91F88.c)
 *     sub_140A9A640 @ 0x140A9A640 (sub_140A9A640.c)
 *     sub_140A9B1BC @ 0x140A9B1BC (sub_140A9B1BC.c)
 *     sub_140A9EFF8 @ 0x140A9EFF8 (sub_140A9EFF8.c)
 *     sub_140A9F0C0 @ 0x140A9F0C0 (sub_140A9F0C0.c)
 *     sub_140A9F1DC @ 0x140A9F1DC (sub_140A9F1DC.c)
 *     sub_140AA0F00 @ 0x140AA0F00 (sub_140AA0F00.c)
 *     sub_140AA144C @ 0x140AA144C (sub_140AA144C.c)
 *     sub_140AA1590 @ 0x140AA1590 (sub_140AA1590.c)
 *     sub_140AA16A4 @ 0x140AA16A4 (sub_140AA16A4.c)
 * Callees:
 *     sub_1402D82D0 @ 0x1402D82D0 (sub_1402D82D0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1402D81DC(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v3; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  bool v6; // zf

  LOBYTE(v1) = *(_BYTE *)(a1 + 9);
  if ( (v1 & 2) != 0 )
  {
    sub_1402D82D0(*(_QWORD *)a1, a1);
    LOBYTE(v1) = *(_BYTE *)(a1 + 9);
  }
  if ( (v1 & 1) != 0 )
  {
    LOBYTE(v1) = dword_140D06B08;
    v3 = *(unsigned __int8 *)(a1 + 8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(v1) = KeGetCurrentIrql();
        if ( (unsigned __int8)v1 <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v1 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = *((_QWORD *)CurrentPrcb + 4375);
          v1 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v6 = (v1 & *(_DWORD *)(v5 + 20)) == 0;
          *(_DWORD *)(v5 + 20) &= v1;
          if ( v6 )
            LOBYTE(v1) = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return v1;
}
