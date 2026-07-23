/*
 * XREFs of sub_140293444 @ 0x140293444
 * Callers:
 *     sub_1406D14BC @ 0x1406D14BC (sub_1406D14BC.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_140293600 @ 0x140293600 (sub_140293600.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140293444(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v7; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // bl
  int v11; // esi
  ULONG v12; // eax
  __int64 v14; // r9
  unsigned __int8 v15; // cl
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v17; // r8
  int v18; // eax
  bool v19; // zf
  _DWORD v20[68]; // [rsp+20h] [rbp-158h] BYREF

  memset(v20, 0, 0x108uLL);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  v7 = sub_140348800(ProcessorIndexFromNumber);
  CurrentThread = KeGetCurrentThread();
  v9 = v7;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23010, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v11 = sub_140293600(v9, a2, a3);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v19 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v11 < 0 )
  {
    v20[0] = 2097153;
    memset(&v20[1], 0, 0x104uLL);
    v12 = KeGetProcessorIndexFromNumber(ProcNumber);
    KeAddProcessorAffinityEx(v20, v12);
    sub_140293A88(v20, sub_140293600, a2, a3);
  }
  return sub_1402935D0(&qword_140C23010);
}
