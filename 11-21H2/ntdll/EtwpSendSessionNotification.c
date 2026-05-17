/*
 * XREFs of EtwpSendSessionNotification @ 0x18000730C
 * Callers:
 *     EtwpLogger @ 0x1800041C0 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x1800043B8 (EtwpFlushActiveBuffers.c)
 *     EtwpStartUmLogger @ 0x180006FB0 (EtwpStartUmLogger.c)
 *     EtwpStopLoggerInstance @ 0x1800909A0 (EtwpStopLoggerInstance.c)
 * Callees:
 *     EtwDeliverDataBlock @ 0x180007500 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, int a2, int a3)
{
  unsigned __int16 v3; // ax
  __int128 v4; // xmm1
  unsigned int v6; // [rsp+20h] [rbp-29h]
  _DWORD v7[2]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v8; // [rsp+38h] [rbp-11h]
  int v9; // [rsp+48h] [rbp-1h]
  __int64 v10; // [rsp+4Ch] [rbp+3h]
  int UniqueProcess; // [rsp+54h] [rbp+Bh]
  __int128 v12; // [rsp+58h] [rbp+Fh]
  __int128 v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  __int64 v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]

  v3 = *(_WORD *)(a1 + 20);
  v4 = *(_OWORD *)(a1 + 44);
  v9 = -1;
  v6 = v3;
  v8 = 0LL;
  v10 = 0LL;
  v17 = 0LL;
  v7[1] = 96;
  v7[0] = 7;
  v12 = SessionNotificationGuid;
  v14 = a2;
  v13 = v4;
  v15 = a3;
  HIBYTE(v6) = 1;
  v16 = v6;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock(v7);
}
