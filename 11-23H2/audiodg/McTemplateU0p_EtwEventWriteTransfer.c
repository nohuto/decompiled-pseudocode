/*
 * XREFs of McTemplateU0p_EtwEventWriteTransfer @ 0x140039010
 * Callers:
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140038AD0 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x140037F3C (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0p_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF

  v7 = a3;
  v4[2] = &v7;
  v6 = 0;
  v5 = 8;
  return McGenEventWrite_EtwEventWriteTransfer(a1, (__int64)&AudioCore_Pump_Process_Stop, a3, 2LL, (__int64)v4);
}
