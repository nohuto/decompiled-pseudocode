/*
 * XREFs of sub_14058EA88 @ 0x14058EA88
 * Callers:
 *     sub_14058E448 @ 0x14058E448 (sub_14058E448.c)
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 * Callees:
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14058EA88(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  ULONG_PTR v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf

  if ( a2 )
  {
    v2 = a2;
    v3 = 48 * a1 - 0x220000000000LL;
    do
    {
      v4 = (unsigned __int8)sub_1402F2700(v3);
      if ( !*(_QWORD *)(v3 + 8) )
        *(_QWORD *)(v3 + 8) = -4LL;
      *(_WORD *)(v3 + 32) = 0;
      sub_14033C3E0(v3, 0LL);
      sub_1402BF9C0(v5, 0x20u);
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v8 = *((_QWORD *)CurrentPrcb + 4375);
            v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
            *(_DWORD *)(v8 + 20) &= v9;
            if ( v10 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
      v3 += 48LL;
      --v2;
    }
    while ( v2 );
  }
}
