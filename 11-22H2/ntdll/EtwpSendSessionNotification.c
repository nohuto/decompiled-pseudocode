/*
 * XREFs of EtwpSendSessionNotification @ 0x1800612EC
 * Callers:
 *     EtwpLogger @ 0x18005E0E0 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x18005E2FC (EtwpFlushActiveBuffers.c)
 *     EtwpStartUmLogger @ 0x18005EB9C (EtwpStartUmLogger.c)
 *     EtwpStopLoggerInstance @ 0x1800625A4 (EtwpStopLoggerInstance.c)
 * Callees:
 *     EtwDeliverDataBlock @ 0x180061670 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpSendSessionNotification(__int64 a1, int a2, int a3)
{
  __int128 v6; // xmm1
  __int64 v8; // [rsp+20h] [rbp-39h]
  _DWORD v9[10]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v10; // [rsp+58h] [rbp-1h]
  __int128 v11; // [rsp+68h] [rbp+Fh]
  int v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+7Ch] [rbp+23h]
  __int64 v14; // [rsp+80h] [rbp+27h]

  v8 = *(unsigned __int16 *)(a1 + 20);
  BYTE3(v8) = 1;
  memset_thunk_772440563353939046(v9, 0, 0x60uLL);
  v9[6] = -1;
  v6 = *(_OWORD *)(a1 + 44);
  v9[1] = 96;
  v10 = SessionNotificationGuid;
  v9[0] = 7;
  v11 = v6;
  v14 = v8;
  v12 = a2;
  v13 = a3;
  v9[9] = NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock(v9);
}
