/*
 * XREFs of sub_140228660 @ 0x140228660
 * Callers:
 *     sub_140211108 @ 0x140211108 (sub_140211108.c)
 *     sub_140226D50 @ 0x140226D50 (sub_140226D50.c)
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140228464 @ 0x140228464 (sub_140228464.c)
 *     sub_1402704A0 @ 0x1402704A0 (sub_1402704A0.c)
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_14033A920 @ 0x14033A920 (sub_14033A920.c)
 *     sub_14033C5F0 @ 0x14033C5F0 (sub_14033C5F0.c)
 *     sub_140367828 @ 0x140367828 (sub_140367828.c)
 *     sub_1405A2A48 @ 0x1405A2A48 (sub_1405A2A48.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 *     sub_140829B50 @ 0x140829B50 (sub_140829B50.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 *     sub_14097E614 @ 0x14097E614 (sub_14097E614.c)
 *     sub_140AF5940 @ 0x140AF5940 (sub_140AF5940.c)
 *     sub_140B05620 @ 0x140B05620 (sub_140B05620.c)
 * Callees:
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140228660(__int64 a1, char a2)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf

  v4 = (unsigned __int8)sub_1402F2700(a1);
  if ( (a2 & 1) != 0 )
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  v5 = sub_140273FD0(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v5;
}
