/*
 * XREFs of sub_14045746C @ 0x14045746C
 * Callers:
 *     HalDmaFreeCrashDumpRegistersEx @ 0x140398080 (HalDmaFreeCrashDumpRegistersEx.c)
 *     sub_140398FD0 @ 0x140398FD0 (sub_140398FD0.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403B58F0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     sub_1404584D6 @ 0x1404584D6 (sub_1404584D6.c)
 *     sub_140458780 @ 0x140458780 (sub_140458780.c)
 *     sub_1405129C8 @ 0x1405129C8 (sub_1405129C8.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140456CC6 @ 0x140456CC6 (sub_140456CC6.c)
 *     sub_140457742 @ 0x140457742 (sub_140457742.c)
 *     sub_140457800 @ 0x140457800 (sub_140457800.c)
 */

__int64 __fastcall sub_14045746C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // r14d
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v12; // si
  char v13; // bp
  unsigned __int8 CurrentIrql; // bl
  __int64 v15; // r9
  void *v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v19; // r10
  int v20; // eax
  bool v21; // zf
  _OWORD v22[3]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+60h] [rbp-48h]
  _QWORD *v24; // [rsp+B8h] [rbp+10h]

  result = 0LL;
  v4 = 0;
  v23 = 0LL;
  v8 = a2;
  memset(v22, 0, sizeof(v22));
  if ( a3 )
  {
    do
    {
      v9 = 2LL;
      v24 = (_QWORD *)v8[1];
      v10 = v8[6];
      if ( (v10 & 0x20) != 0 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFDFuLL;
        v12 = 0;
        v13 = 0;
        v8[6] = v11;
        CurrentIrql = 0;
        if ( (v11 & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql > 2u )
            KeBugCheckEx(0xACu, 0x1000uLL, 0xEF03uLL, 0LL, 0LL);
          if ( CurrentIrql < 2u )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v9 = (unsigned int)CurrentIrql + 1;
              v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              *(_DWORD *)(v15 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
            }
            v13 = 1;
          }
          sub_140456CC6(v9, v8, 1u, (__int64)v22);
          v12 = 1;
        }
        v16 = (void *)(v8[6] & 0xFFFFFFFFFFFFF000uLL);
        if ( v16 )
          memset(v16, 0, 0x1000uLL);
        if ( v12 )
          sub_140457742(v16, a2, 1LL, v22);
        if ( v13 )
        {
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v17 = KeGetCurrentIrql();
              if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v19 = *((_QWORD *)CurrentPrcb + 4375);
                v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
                *(_DWORD *)(v19 + 20) &= v20;
                if ( v21 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
      }
      result = sub_140457800(a1, *(_QWORD *)(a1 + 152), v8);
      v8 = v24;
      ++v4;
    }
    while ( v4 < a3 );
  }
  return result;
}
