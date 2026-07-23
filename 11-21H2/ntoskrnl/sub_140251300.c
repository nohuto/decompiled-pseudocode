/*
 * XREFs of sub_140251300 @ 0x140251300
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022BA6C @ 0x14022BA6C (sub_14022BA6C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140251300(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // r9
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf

  v1 = *(_DWORD *)(a1 + 13144);
  result = v1 | *(_DWORD *)(a1 + 13192);
  if ( v1 | *(_DWORD *)(a1 + 13192) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    sub_14022BA6C((struct _KPRCB *)a1, 2);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
