/*
 * XREFs of sub_1402E6738 @ 0x1402E6738
 * Callers:
 *     sub_1402E57FC @ 0x1402E57FC (sub_1402E57FC.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 */

__int64 __fastcall sub_1402E6738(__int64 a1, __int64 a2)
{
  unsigned __int32 v3; // edi
  __int64 i; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  int v10; // edx
  __int64 v11; // r9
  bool v12; // zf

  v3 = *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u) | *(_DWORD *)(a2 + 12);
  for ( i = sub_1403250B0(a1, v3, 770LL); i == -1; i = sub_1403250B0(a1, v3, 770LL) )
  {
    if ( KeGetCurrentIrql() == 2 || (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 )
      return 0LL;
    sub_1405B8348(a1);
  }
  v5 = 48 * i - 0x220000000000LL;
  v6 = (unsigned __int8)sub_1402F2700(v5);
  *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = (v10 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v10;
        if ( v12 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v5;
}
