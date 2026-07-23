/*
 * XREFs of sub_14037BAD4 @ 0x14037BAD4
 * Callers:
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140340078 @ 0x140340078 (sub_140340078.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int64 __fastcall sub_14037BAD4(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int8 v4; // bl
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf

  v4 = 0;
  if ( !a4 )
    v4 = sub_1402F2700(a1);
  result = sub_140340078(*(_QWORD *)(a1 + 16), a2, a3);
  *(_QWORD *)(a1 + 16) = result;
  if ( !a4 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
