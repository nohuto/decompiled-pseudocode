/*
 * XREFs of sub_140569E70 @ 0x140569E70
 * Callers:
 *     sub_140420C10 @ 0x140420C10 (sub_140420C10.c)
 *     sub_140421050 @ 0x140421050 (sub_140421050.c)
 *     sub_140421230 @ 0x140421230 (sub_140421230.c)
 *     sub_140421380 @ 0x140421380 (sub_140421380.c)
 *     sub_1404214D0 @ 0x1404214D0 (sub_1404214D0.c)
 *     sub_1404215E0 @ 0x1404215E0 (sub_1404215E0.c)
 *     sub_140421A20 @ 0x140421A20 (sub_140421A20.c)
 *     sub_140421E60 @ 0x140421E60 (sub_140421E60.c)
 *     sub_1404222A0 @ 0x1404222A0 (sub_1404222A0.c)
 *     sub_1404226D0 @ 0x1404226D0 (sub_1404226D0.c)
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_140424300 @ 0x140424300 (sub_140424300.c)
 *     sub_140425050 @ 0x140425050 (sub_140425050.c)
 *     sub_140426820 @ 0x140426820 (sub_140426820.c)
 *     sub_140426C70 @ 0x140426C70 (sub_140426C70.c)
 *     sub_1404270A0 @ 0x1404270A0 (sub_1404270A0.c)
 *     sub_140427200 @ 0x140427200 (sub_140427200.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_140427B30 @ 0x140427B30 (sub_140427B30.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 *     sub_140428980 @ 0x140428980 (sub_140428980.c)
 *     sub_14042CF40 @ 0x14042CF40 (sub_14042CF40.c)
 *     sub_140430F00 @ 0x140430F00 (sub_140430F00.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int8 __fastcall sub_140569E70(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v3; // cl
  struct _KPRCB *v4; // rax
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // edx
  bool v9; // zf

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > a1 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && a1 <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << (a1 + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v1);
  }
  else
  {
    v3 = KeGetCurrentIrql();
    __writecr8(v1);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v3 <= 0xFu && (unsigned __int8)(v1 - 2) <= 0xDu )
    {
      v4 = KeGetCurrentPrcb();
      *(_DWORD *)(*((_QWORD *)v4 + 4375) + 20LL) |= ((1LL << ((unsigned __int8)v1 + 1)) - 1) & ~((1LL << (v3 + 1)) - 1) & 0xFFFFFFFC;
    }
  }
  return CurrentIrql;
}
