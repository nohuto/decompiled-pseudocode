/*
 * XREFs of McTemplateU0pq_EventWriteTransfer @ 0x140082818
 * Callers:
 *     ?Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x14001A0F0 (-Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140089EE0 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x14006E568 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0pq_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v6; // [rsp+40h] [rbp-38h]
  int v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  int *v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = &v12;
  v8 = 0;
  v7 = 8;
  v9 = &v13;
  v11 = 0;
  v10 = 4;
  return McGenEventWrite_EventWriteTransfer(a1, a2, a3, 3u, &v5);
}
