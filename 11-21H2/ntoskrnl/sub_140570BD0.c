/*
 * XREFs of sub_140570BD0 @ 0x140570BD0
 * Callers:
 *     sub_140A02C80 @ 0x140A02C80 (sub_140A02C80.c)
 * Callees:
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140570BD0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // r14
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax

  *a2 = 0LL;
  v4 = a2;
  a2[1] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (_QWORD *)((-1LL << (CurrentIrql + 1)) & 4);
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  sub_1402F3290((volatile signed __int32 *)a1, (__int64)a2, a3, a4);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
    *v4 = *(_OWORD *)(v7 + 1224);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
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
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
