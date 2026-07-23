/*
 * XREFs of sub_140226D50 @ 0x140226D50
 * Callers:
 *     sub_140226AE0 @ 0x140226AE0 (sub_140226AE0.c)
 * Callees:
 *     sub_1402206C0 @ 0x1402206C0 (sub_1402206C0.c)
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140226D50(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v8; // eax
  bool v9; // zf
  struct _KPRCB *v10; // r10
  __int64 v11; // r8

  sub_140228660(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 0LL);
  v2 = (unsigned __int8)sub_1402F2700(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( *(__int64 *)(a1 + 40) < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v3 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v9 = (v8 & *(_DWORD *)(v3 + 20)) == 0;
          *(_DWORD *)(v3 + 20) &= v8;
          if ( v9 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    v4 = *(_QWORD *)(a1 + 16);
    if ( qword_140C50780 && (v4 & 0x10) == 0 )
      v4 &= ~qword_140C50780;
    LOBYTE(v5) = sub_1402206C0(*(_QWORD *)(v4 >> 16), v4 >> 16, v3, 3);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v5) = dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(v5) = KeGetCurrentIrql();
        if ( (unsigned __int8)v5 <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)v5 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = *((_QWORD *)v10 + 4375);
          v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v9 = (v5 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v5;
          if ( v9 )
            LOBYTE(v5) = sub_140418E4C(v10);
        }
      }
    }
    __writecr8(v2);
  }
  return v5;
}
