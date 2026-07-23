/*
 * XREFs of sub_14060207C @ 0x14060207C
 * Callers:
 *     sub_140A9D4F0 @ 0x140A9D4F0 (sub_140A9D4F0.c)
 *     sub_140A9D738 @ 0x140A9D738 (sub_140A9D738.c)
 *     sub_140A9D980 @ 0x140A9D980 (sub_140A9D980.c)
 *     sub_140A9DA38 @ 0x140A9DA38 (sub_140A9DA38.c)
 *     sub_140A9DB60 @ 0x140A9DB60 (sub_140A9DB60.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14060207C(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r11
  struct _KPRCB *CurrentPrcb; // rax

  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      *(_DWORD *)(*((_QWORD *)CurrentPrcb + 4375) + 20LL) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)(a1 + 9) |= 1u;
    *(_BYTE *)(a1 + 8) = CurrentIrql;
  }
}
