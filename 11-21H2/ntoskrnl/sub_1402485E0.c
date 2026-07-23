/*
 * XREFs of sub_1402485E0 @ 0x1402485E0
 * Callers:
 *     sub_1406D14BC @ 0x1406D14BC (sub_1406D14BC.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_140248720 @ 0x140248720 (sub_140248720.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045E870 @ 0x14045E870 (sub_14045E870.c)
 */

char __fastcall sub_1402485E0(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3, _QWORD *a4)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v16; // r9
  __int64 v17; // rbp
  int v18; // esi
  unsigned __int8 v19; // cl
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v21; // r8
  int v22; // eax
  bool v23; // zf
  ULONG v24; // eax
  int v26; // [rsp+30h] [rbp-178h] BYREF
  _DWORD v27[68]; // [rsp+40h] [rbp-168h] BYREF

  memset(&v27[2], 0, 0x100uLL);
  v26 = 0;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  v9 = sub_140348800(ProcessorIndexFromNumber);
  v10 = *(_DWORD **)(v9 + 33968);
  v11 = v9;
  sub_140248720(v9, a2 + 4, (unsigned int)&v26, a2 + 8, a2, a2 + 24);
  if ( v10 )
  {
    v12 = v10[110];
    *(_DWORD *)(a2 + 12) = v10[132];
    v13 = v10[130];
    if ( v13 >= v10[131] )
      v13 = v10[131];
    *(_DWORD *)(a2 + 16) = v13;
    if ( v10[111] != v10[113] )
      *(_BYTE *)(a2 + 28) = 1;
    if ( v13 < 0x64 )
      *(_DWORD *)(a2 + 24) |= 1u;
    LODWORD(v14) = (unsigned int)(100 * v26) / v10[110];
  }
  else
  {
    v12 = *(_DWORD *)(v11 + 68);
    LODWORD(v14) = 100;
  }
  *(_DWORD *)(a2 + 20) = v14;
  LOBYTE(v14) = *(_BYTE *)(v11 + 34060);
  *(_BYTE *)(a2 + 29) = v14;
  if ( a4 )
  {
    v14 = *(_QWORD *)(v11 + 34064);
    *a4 = v14;
  }
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v16 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v17 = v12;
    v18 = sub_14045E870(v11, a3, v12);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v21 = *((_QWORD *)CurrentPrcb + 4375);
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
          *(_DWORD *)(v21 + 20) &= v22;
          if ( v23 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    LOBYTE(v14) = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v18 < 0 )
    {
      v27[0] = 2097153;
      memset(&v27[1], 0, 0x104uLL);
      v24 = KeGetProcessorIndexFromNumber(ProcNumber);
      KeAddProcessorAffinityEx(v27, v24);
      LOBYTE(v14) = sub_140293A88(v27, sub_14045E870, a3, v17);
    }
  }
  return v14;
}
