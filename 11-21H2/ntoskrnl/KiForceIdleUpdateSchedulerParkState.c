/*
 * XREFs of KiForceIdleUpdateSchedulerParkState @ 0x14057A2A0
 * Callers:
 *     KiForceIdleStartDpcRoutine @ 0x14057A0A0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14057A1B0 (KiForceIdleStopDpcRoutine.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KiOrAffinityEx @ 0x1402FEC10 (KiOrAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiForceIdleParkUnparkProcessor @ 0x140579F48 (KiForceIdleParkUnparkProcessor.c)
 */

__int64 __fastcall KiForceIdleUpdateSchedulerParkState(unsigned __int8 a1)
{
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  int v3; // edi
  __int64 result; // rax
  struct _KPRCB *Prcb; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h]
  _QWORD v12[34]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = a1;
  v11 = 0LL;
  v10 = 0LL;
  memset(v12, 0, 0x108uLL);
  v9 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  while ( KiForceIdlePendingDpcCount )
    _mm_pause();
  LODWORD(v12[0]) = 2097153;
  memset((char *)v12 + 4, 0, 0x104uLL);
  if ( (_BYTE)v1 )
  {
    KiCopyAffinityEx((__int64)v12, 0x20u, (unsigned __int16 *)KeActiveProcessors);
  }
  else
  {
    KiCopyAffinityEx((__int64)v12, 0x20u, KiForceIdleUnparkRestoreMask);
    KiOrAffinityEx((char *)v12, KiForceIdleSoftParkRestoreMask, v12, WORD1(v12[0]));
  }
  v3 = KeCountSetBitsAffinityEx(v12);
  if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v12, CurrentPrcb->Number) )
    KiForceIdlePendingDpcCount = v3 - 1;
  else
    KiForceIdlePendingDpcCount = v3;
  *((_QWORD *)&v10 + 1) = v12[1];
  *(_QWORD *)&v10 = v12;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v9, (unsigned __int16 **)&v10);
    if ( (_DWORD)result )
      break;
    Prcb = (struct _KPRCB *)KeGetPrcb(v9);
    if ( Prcb == KeGetCurrentPrcb() )
    {
      LOBYTE(v6) = v1;
      KiForceIdleParkUnparkProcessor((__int64)Prcb, v6, v7, v8);
    }
    else
    {
      KiInsertQueueDpc((ULONG_PTR)&Prcb->ForceIdleDpc, v1, 0LL, 0LL, 0);
    }
  }
  return result;
}
