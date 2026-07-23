/*
 * XREFs of sub_140256158 @ 0x140256158
 * Callers:
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_1407608BC @ 0x1407608BC (sub_1407608BC.c)
 *     MmUnlockPreChargedPagedPool @ 0x140800560 (MmUnlockPreChargedPagedPool.c)
 *     sub_14080C400 @ 0x14080C400 (sub_14080C400.c)
 *     sub_14081B420 @ 0x14081B420 (sub_14081B420.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140256158(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  result = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( v3 <= a2 )
  {
    v7 = result;
    v8 = result;
    if ( !a3 )
      v7 = v3;
    v17 = sub_140317A10(v7);
    v9 = ((unsigned __int64)sub_140317A10(&v17) >> 12) & 0xFFFFFFFFFFLL;
    if ( a3 )
      v9 += (v3 >> 3) & 0x1FF;
    v10 = 48 * v9 - 0x220000000000LL;
    v11 = (unsigned __int8)sub_1402F2700(v10);
    sub_140336AD8(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    v3 += 8LL;
    result = v8 + 8;
    if ( (v3 & 0xFFF) != 0 )
      result = v8;
  }
  return result;
}
