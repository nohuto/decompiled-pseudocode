/*
 * XREFs of RootHub_Create @ 0x1C00716A0
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006D740 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C001665C (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

__int64 __fastcall RootHub_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v5; // rdx
  int v6; // edx
  int v7; // esi
  __int64 *v8; // rbx
  __int128 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-B0h]
  _QWORD v12[5]; // [rsp+60h] [rbp-A8h]
  _QWORD v13[20]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v14; // [rsp+148h] [rbp+40h] BYREF

  v14 = 0LL;
  memset(v13, 0, sizeof(v13));
  v13[0] = 0x1000000A0LL;
  v13[1] = RootHub_UcxEvtClearHubFeature;
  v13[2] = RootHub_UcxEvtClearPortFeature;
  v13[16] = 0x100000001LL;
  v13[3] = RootHub_UcxEvtGetHubStatus;
  v11 = 0LL;
  v13[4] = RootHub_UcxEvtGetPortStatus;
  v13[5] = RootHub_UcxEvtSetHubFeature;
  v13[6] = RootHub_UcxEvtSetPortFeature;
  v13[7] = RootHub_UcxEvtGetPortErrorCount;
  v13[9] = RootHub_UcxEvtInterruptTransfer;
  v13[10] = RootHub_UcxEvtGetInfo;
  v13[11] = RootHub_UcxEvtGet20PortInfo;
  v13[12] = RootHub_UcxEvtGet30PortInfo;
  v13[19] = off_1C0061090;
  memset(&v13[13], 0, 24);
  LODWORD(v13[13]) = 56;
  v10 = 0LL;
  LODWORD(v10) = 56;
  v12[3] = off_1C0061248;
  v12[0] = 0x100000001LL;
  v5 = *(_QWORD *)(a2 + 8);
  *(_OWORD *)&v13[17] = 0LL;
  *(_OWORD *)&v12[1] = 0LL;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int128 *, __int64 *))qword_1C00627C8)(
         UcxDriverGlobals,
         v5,
         v13,
         &v10,
         &v14);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v6, 11, 11, (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids, v7);
    }
  }
  else
  {
    v8 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WdfDriverGlobals,
                      v14,
                      off_1C0061248);
    *v8 = v14;
    v8[1] = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(a2 + 72),
        4u,
        0xBu,
        0xAu,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        v14,
        v8);
    *a3 = v8;
  }
  return (unsigned int)v7;
}
