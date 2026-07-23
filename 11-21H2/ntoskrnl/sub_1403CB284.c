/*
 * XREFs of sub_1403CB284 @ 0x1403CB284
 * Callers:
 *     sub_14075F23C @ 0x14075F23C (sub_14075F23C.c)
 * Callees:
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1403C3290 @ 0x1403C3290 (sub_1403C3290.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1403CB284(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 i; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf

  if ( sub_140277C50(a1) )
  {
    for ( i = 48 * a3 + a1; a3; --a3 )
    {
      i -= 48LL;
      v7 = (unsigned __int8)sub_1402F2700(i);
      *(_BYTE *)(i + 34) = *(_BYTE *)(i + 34) & 0xF8 | 5;
      *(_QWORD *)(i + 16) = 0LL;
      sub_1402E89B0((unsigned __int64 *)(i + 16));
      sub_14026845C(i, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = *((_QWORD *)CurrentPrcb + 4375);
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
            *(_DWORD *)(v10 + 20) &= v11;
            if ( v12 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
    }
  }
  else
  {
    sub_1403C3290(v5, a3);
  }
}
