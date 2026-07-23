/*
 * XREFs of sub_14029BA28 @ 0x14029BA28
 * Callers:
 *     sub_140243208 @ 0x140243208 (sub_140243208.c)
 *     Dns_RecordListFree @ 0x140386FBC (Dns_RecordListFree.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 *     sub_140705E1C @ 0x140705E1C (sub_140705E1C.c)
 *     sub_140983680 @ 0x140983680 (sub_140983680.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14029BA28(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // esi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf

  v2 = (unsigned __int8)sub_1402F2700(a1);
  v3 = sub_140336AD8(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return v3;
}
