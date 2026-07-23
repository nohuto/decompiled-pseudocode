/*
 * XREFs of sub_140217060 @ 0x140217060
 * Callers:
 *     sub_140216EE8 @ 0x140216EE8 (sub_140216EE8.c)
 *     sub_14027D408 @ 0x14027D408 (sub_14027D408.c)
 * Callees:
 *     sub_1402170F4 @ 0x1402170F4 (sub_1402170F4.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140217060(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned int v4; // esi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf

  v2 = 48 * a2 - 0x220000000000LL;
  v3 = (unsigned __int8)sub_1402F2700(v2);
  sub_1402170F4(v2);
  *(_QWORD *)(v2 + 24) |= 0x4000000000000000uLL;
  sub_140273FD0(v2);
  v4 = sub_140273FD0(v2);
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v4;
}
