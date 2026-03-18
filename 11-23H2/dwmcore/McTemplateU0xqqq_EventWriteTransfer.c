/*
 * XREFs of McTemplateU0xqqq_EventWriteTransfer @ 0x18012E650
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x180047108 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0xqqq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+38h] [rbp-31h] BYREF
  int v6; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v7; // [rsp+60h] [rbp-9h]
  __int64 v8; // [rsp+68h] [rbp-1h]
  int *v9; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+Fh]
  int *v11; // [rsp+80h] [rbp+17h]
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  int *v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+2Fh]
  __int64 v15; // [rsp+D0h] [rbp+67h] BYREF

  v15 = a3;
  v4 = 1;
  v6 = 0;
  v7 = &v15;
  v5 = 0;
  v9 = &v4;
  v8 = 8LL;
  v11 = &v5;
  v10 = 4LL;
  v13 = &v6;
  v12 = 4LL;
  v14 = 4LL;
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RENDERTIME);
}
