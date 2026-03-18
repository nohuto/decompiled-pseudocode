/*
 * XREFs of KeRemoveQueueDpcEx @ 0x14024E1A0
 * Callers:
 *     EtwpFreeCompression @ 0x14024E0F0 (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x14024E180 (KeRemoveQueueDpc.c)
 *     KiCheckAndRearmForceIdle @ 0x1402595B0 (KiCheckAndRearmForceIdle.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 *     KeMaskInterrupt @ 0x1403AED64 (KeMaskInterrupt.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x140578BB4 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KeClearForceIdle @ 0x140579CD4 (KeClearForceIdle.c)
 *     DifKeRemoveQueueDpcWrapper @ 0x140615240 (DifKeRemoveQueueDpcWrapper.c)
 *     ExpCancelTimer @ 0x14063DFAC (ExpCancelTimer.c)
 *     VfWdCheckForSettingsChange @ 0x140A9CF88 (VfWdCheckForSettingsChange.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KiGetDeepIdleProcessors @ 0x1402D9830 (KiGetDeepIdleProcessors.c)
 *     KeGenericProcessorCallback @ 0x14035BB4C (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall KeRemoveQueueDpcEx(__int64 a1, char a2)
{
  char v4; // r15
  __int64 v5; // r13
  bool v6; // r14
  unsigned __int16 v8; // ax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rdx
  _QWORD *v13; // rcx
  __int64 *i; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Group; // rdx
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // r14
  int IsEmptyAffinity; // eax
  signed __int32 v26[8]; // [rsp+0h] [rbp-2E8h] BYREF
  __int64 v27; // [rsp+20h] [rbp-2C8h] BYREF
  _QWORD v28[2]; // [rsp+28h] [rbp-2C0h] BYREF
  __int16 v29; // [rsp+38h] [rbp-2B0h]
  int v30; // [rsp+3Ah] [rbp-2AEh]
  __int16 v31; // [rsp+3Eh] [rbp-2AAh]
  __int128 v32; // [rsp+40h] [rbp-2A8h]
  __int128 v33; // [rsp+50h] [rbp-298h]
  __int128 v34; // [rsp+60h] [rbp-288h]
  __int64 v35; // [rsp+70h] [rbp-278h]
  int v36; // [rsp+78h] [rbp-270h]
  _QWORD v37[34]; // [rsp+80h] [rbp-268h] BYREF
  _DWORD v38[68]; // [rsp+190h] [rbp-158h] BYREF
  int v39; // [rsp+2E0h] [rbp-8h]

  v35 = 0LL;
  v36 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(&v38[2], 0, 0x100uLL);
  v30 = 0;
  v31 = 0;
  HIDWORD(v27) = 0;
  memset(&v37[1], 0, 0x100uLL);
  v4 = 0;
  LOBYTE(v27) = 0;
  _disable();
  v5 = *(_QWORD *)(a1 + 56);
  v6 = (v39 & 0x200) != 0;
  if ( v5 )
  {
    LODWORD(v32) = *(_DWORD *)a1;
    v8 = WORD1(v32) - 2048;
    if ( WORD1(v32) < 0x800u )
      v8 = WORD1(v32);
    v9 = KiProcessorBlock[v8];
    if ( (_BYTE)v32 != 26 || (v10 = 13168LL, !*(_BYTE *)(v9 + 13240)) )
      v10 = 13120LL;
    v11 = v9 + v10;
    KxAcquireSpinLock((PKSPIN_LOCK)(v9 + v10 + 16));
    if ( v5 == *(_QWORD *)(a1 + 56) && (_DWORD)v32 == *(_DWORD *)a1 )
    {
      v12 = (__int64 *)(a1 + 8);
      v13 = (_QWORD *)v11;
      --*(_DWORD *)(v11 + 24);
      for ( i = *(__int64 **)v11; i != v12; i = (__int64 *)*i )
        v13 = i;
      v15 = *v12;
      *v13 = *v12;
      if ( !v15 )
        *(_QWORD *)(v11 + 8) = v13;
      *(_QWORD *)(a1 + 56) = 0LL;
      v4 = 1;
      v16 = *(_QWORD *)(v9 + 35000);
      LOBYTE(v27) = 1;
      if ( v16 && v11 == v9 + 13120 )
        --*(_DWORD *)(v16 + 28);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 16));
  }
  if ( v6 )
    _enable();
  if ( a2 && *(_QWORD *)(a1 + 16) )
  {
    v38[0] = 2097153;
    memset(&v38[1], 0, 0x104uLL);
    LODWORD(v37[0]) = 2097153;
    memset((char *)v37 + 4, 0, 0x104uLL);
    KiGetDeepIdleProcessors(v38, v37);
    v17 = 0;
    if ( LOWORD(v37[0]) )
    {
      v18 = *(_QWORD *)(a1 + 16);
      do
      {
        v19 = v17++;
        v37[v19 + 1] &= v18;
      }
      while ( v17 < LOWORD(v37[0]) );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    Group = CurrentPrcb->Group;
    if ( LOWORD(v37[0]) > (unsigned __int16)Group )
      v37[Group + 1] &= ~CurrentPrcb->GroupSetMember;
    v28[1] = v37[1];
    v28[0] = v37;
    v29 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor((char *)&v27 + 4, v28) )
    {
      v22 = KiProcessorBlock[HIDWORD(v27)];
      if ( *(_BYTE *)a1 != 26 || (v23 = 13168LL, !*(_BYTE *)(v22 + 13240)) )
        v23 = 13120LL;
      if ( !v5 )
      {
        _InterlockedOr(v26, 0);
        v24 = v23 + v22;
        if ( *(_QWORD *)(v23 + v22 + 16) )
        {
          _disable();
          KxAcquireSpinLock((PKSPIN_LOCK)(v24 + 16));
          KxReleaseSpinLock((PKSPIN_LOCK)(v24 + 16));
          if ( (v39 & 0x200) != 0 )
            _enable();
        }
      }
      if ( *(_QWORD *)(v23 + v22 + 32) != a1 && (unsigned int)LOWORD(v37[0]) > *(unsigned __int8 *)(v22 + 208) )
        v37[*(unsigned __int8 *)(v22 + 208) + 1] &= ~*(_QWORD *)(v22 + 200);
    }
    IsEmptyAffinity = KeIsEmptyAffinityEx(v37);
    v4 = v27;
    if ( !IsEmptyAffinity )
      KeGenericProcessorCallback(v37, xHalTimerWatchdogStop, 0LL, 2LL, v27, v28[0]);
  }
  return v4;
}
