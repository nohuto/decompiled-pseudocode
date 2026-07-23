/*
 * XREFs of KiIntSteerLogStatus @ 0x14022183C
 * Callers:
 *     KeIntSteerPeriodic @ 0x140221440 (KeIntSteerPeriodic.c)
 *     KiIntSteerEventTraceControlCallback @ 0x1408660F0 (KiIntSteerEventTraceControlCallback.c)
 * Callees:
 *     KiIntSteerEtwEventEnabled @ 0x140221928 (KiIntSteerEtwEventEnabled.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1402C0450 (KeCountSetBitsAffinityEx.c)
 *     KiIntSteerLogState @ 0x140321658 (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall KiIntSteerLogStatus(char a1)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  const EVENT_DESCRIPTOR *v3; // rbx
  const EVENT_DESCRIPTOR *v4; // rsi
  __int64 result; // rax
  __int64 *i; // rbx
  __int64 *j; // rdi
  int v8; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v9[2]; // [rsp+50h] [rbp-61h] BYREF
  __int16 v10; // [rsp+60h] [rbp-51h]
  int v11; // [rsp+62h] [rbp-4Fh]
  __int16 v12; // [rsp+66h] [rbp-4Bh]
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+68h] [rbp-49h] BYREF
  __int64 v14; // [rsp+78h] [rbp-39h]
  __int64 v15; // [rsp+80h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-29h] BYREF
  int *v17; // [rsp+98h] [rbp-19h]
  __int64 v18; // [rsp+A0h] [rbp-11h]
  int *v19; // [rsp+A8h] [rbp-9h]
  __int64 v20; // [rsp+B0h] [rbp-1h]
  int *v21; // [rsp+B8h] [rbp+7h]
  __int64 v22; // [rsp+C0h] [rbp+Fh]
  __int64 *v23; // [rsp+C8h] [rbp+17h]
  int v24; // [rsp+D0h] [rbp+1Fh]
  int v25; // [rsp+D4h] [rbp+23h]

  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE;
  if ( a1 )
    v2 = &KMPnPRundownEvt_SleepStudy_ConnectionResource;
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(v2) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v18 = 4LL;
    v17 = &KiIntTrackRootCount;
    v8 = KeCountSetBitsAffinityEx(&KiIntSteerMask);
    v23 = &qword_140C41488;
    v19 = &v8;
    v24 = 8 * (unsigned __int16)KiIntSteerMask;
    v20 = 4LL;
    v21 = &KiIntSteerMask;
    v22 = 2LL;
    v25 = 0;
    EtwWriteEx(KiIntSteerEtwHandle, v2, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  v11 = 0;
  v12 = 0;
  v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE;
  v8 = 0;
  if ( a1 )
    v3 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  if ( (unsigned __int8)KiIntSteerEtwEventEnabled(v3) )
  {
    v9[1] = qword_140D1EFF8;
    v9[0] = &KeActiveProcessors;
    v10 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v8, v9) )
    {
      *(_QWORD *)&v13.Size = 4LL;
      v13.Ptr = (ULONGLONG)&v8;
      v15 = 4LL;
      v14 = KiProcessorBlock[v8] + 11672;
      EtwWriteEx(KiIntSteerEtwHandle, v3, 0LL, 0, 0LL, 0LL, 2u, &v13);
    }
  }
  v4 = (const EVENT_DESCRIPTOR *)PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET;
  if ( a1 )
    v4 = &PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN;
  result = KiIntSteerEtwEventEnabled(v4);
  if ( (_BYTE)result )
  {
    for ( i = (__int64 *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (__int64 *)*i )
    {
      if ( !a1 )
      {
        result = i[20];
        if ( i[22] == result )
          continue;
      }
      for ( j = (__int64 *)i[2]; j != i + 2; j = (__int64 *)*j )
        result = KiIntSteerLogState(j, v4);
    }
  }
  return result;
}
