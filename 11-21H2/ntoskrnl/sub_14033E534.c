/*
 * XREFs of sub_14033E534 @ 0x14033E534
 * Callers:
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_14028DF40 @ 0x14028DF40 (sub_14028DF40.c)
 *     sub_14028ECFC @ 0x14028ECFC (sub_14028ECFC.c)
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_1403C2120 @ 0x1403C2120 (sub_1403C2120.c)
 * Callees:
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14033E534(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int8 v6; // di
  unsigned __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( (_DWORD)a2 )
  {
    v13 = 0;
    v6 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v13, a2, a3, a4);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v6 = sub_1402F2700(a1);
  }
  v7 = sub_14033C2A0(a1);
  if ( v7 )
    v4 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v7 )
    sub_1402E20D0(v4, v7, 1);
  if ( v6 != 17 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
}
