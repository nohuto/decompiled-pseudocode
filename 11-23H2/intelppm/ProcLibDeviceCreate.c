/*
 * XREFs of ProcLibDeviceCreate @ 0x1C002686C
 * Callers:
 *     EvtDriverDeviceAdd @ 0x1C0026590 (EvtDriverDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00045C0 (memset.c)
 */

__int64 __fastcall ProcLibDeviceCreate(char *DeferredContext)
{
  __int64 v2; // rsi
  int v3; // eax
  unsigned int v4; // edi
  unsigned __int16 v6; // r9
  __int128 v7; // [rsp+38h] [rbp-49h] BYREF
  __int64 v8; // [rsp+48h] [rbp-39h]
  __int64 v9; // [rsp+50h] [rbp-31h]
  __int128 v10; // [rsp+58h] [rbp-29h]
  __int64 v11; // [rsp+68h] [rbp-19h]
  _QWORD v12[12]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v13; // [rsp+E8h] [rbp+67h] BYREF

  v13 = 0LL;
  DeferredContext[77] = 0;
  DWORD1(v7) = 0;
  *((_DWORD *)DeferredContext + 184) = 100;
  *((_DWORD *)DeferredContext + 185) = 100;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, char *))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         DeferredContext);
  v8 = 0LL;
  v11 = 0LL;
  v7 = 0LL;
  LODWORD(v7) = 56;
  v9 = 0x100000001LL;
  v10 = (unsigned __int64)v2;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, char *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         &v7,
         DeferredContext + 208);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 30;
LABEL_9:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        v6,
        (__int64)&WPP_6d86976f8bee3b8eeb87bd96dd02b852_Traceguids,
        v3);
    }
  }
  else
  {
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 776), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 840), (PKDEFERRED_ROUTINE)QuickCapTraceDpc, DeferredContext);
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 928), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 992), (PKDEFERRED_ROUTINE)LongCapTraceDpc, DeferredContext);
    if ( _bittest64(Globals, 0x2Fu) )
    {
      memset(v12, 0, sizeof(v12));
      v12[0] = 0x100000060LL;
      v12[5] = EmiProcessIoctl;
      LODWORD(v12[1]) = 2;
      BYTE5(v12[1]) = 1;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                + 1216))(
             WdfDriverGlobals,
             v2,
             v12,
             0LL,
             &v13);
      v4 = v3;
      if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 31;
        goto LABEL_9;
      }
    }
  }
  return v4;
}
