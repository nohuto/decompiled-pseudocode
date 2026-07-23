/*
 * XREFs of sub_140375150 @ 0x140375150
 * Callers:
 *     sub_140319160 @ 0x140319160 (sub_140319160.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int64 __fastcall sub_140375150(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    do
    {
      v2 = sub_140317A10(a1);
      v18 = v2;
      v3 = v2;
      if ( (v2 & 1) == 0 )
      {
        v7 = v2 >> 5;
        return v7 & 0x1F;
      }
      v4 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFFLL;
    }
    while ( v4 > qword_140C50840 || (*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 );
    v5 = 48 * v4 - 0x220000000000LL;
    v6 = (unsigned __int8)sub_1402F2700(v5);
    if ( v3 == sub_140317A10(a1) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  v7 = *(_QWORD *)(v5 + 16) >> 5;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v17 = *((_QWORD *)v15 + 4375);
        v13 = (v16 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v16;
        if ( v13 )
          sub_140418E4C(v15);
      }
    }
  }
  __writecr8(v6);
  return v7 & 0x1F;
}
