/*
 * XREFs of sub_1403106E0 @ 0x1403106E0
 * Callers:
 *     sub_1402358D4 @ 0x1402358D4 (sub_1402358D4.c)
 *     sub_140281480 @ 0x140281480 (sub_140281480.c)
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 *     sub_14030B950 @ 0x14030B950 (sub_14030B950.c)
 *     sub_14030FC20 @ 0x14030FC20 (sub_14030FC20.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

__int64 __fastcall sub_1403106E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // di
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = a3;
  }
  v6 = *(_DWORD *)(a1 + 48);
  do
  {
    while ( (v6 & 1) != 0 )
    {
      if ( (v6 & 2) != 0 )
      {
        v9 = 0;
        do
        {
          sub_1402F32E0(&v9, a2, a3, a4);
          v6 = *(_DWORD *)(a1 + 48);
        }
        while ( (v6 & 1) != 0 );
      }
      else
      {
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v6 | 2, v6);
      }
    }
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v6 & 0xFFFFFFFC | 1, v6);
  }
  while ( v7 != v6 );
  return CurrentIrql;
}
