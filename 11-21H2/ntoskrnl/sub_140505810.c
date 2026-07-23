/*
 * XREFs of sub_140505810 @ 0x140505810
 * Callers:
 *     <none>
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1404584D6 @ 0x1404584D6 (sub_1404584D6.c)
 *     sub_140512444 @ 0x140512444 (sub_140512444.c)
 *     sub_1409094F8 @ 0x1409094F8 (sub_1409094F8.c)
 *     sub_1409095FC @ 0x1409095FC (sub_1409095FC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140505810(PVOID P)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // r9
  int v7; // eax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf

  v2 = *((_QWORD *)P + 4);
  v3 = (*((_DWORD *)P + 11) + 16) & 0xFFFFF;
  if ( *((_BYTE *)P + 40) )
    sub_1409095FC(v2, v3);
  else
    sub_1409094F8(v2, v3);
  *(_DWORD *)((char *)&unk_140C4E268 + (*((_BYTE *)P + 40) != 0 ? 4 : 0)) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v4 = (-1LL << (CurrentIrql + 1)) & 4;
    *(_DWORD *)(v6 + 20) |= v4;
  }
  v7 = *((_DWORD *)P + 12);
  if ( v7 == 2 )
  {
    sub_1404584D6(v2, *((_BYTE *)P + 40));
  }
  else if ( v7 == 3 )
  {
    LOBYTE(v4) = *((_BYTE *)P + 40);
    sub_140512444(v2, v4);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  ExFreePoolWithTag(P, 0);
}
