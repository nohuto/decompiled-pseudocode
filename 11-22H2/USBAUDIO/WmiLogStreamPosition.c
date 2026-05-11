/*
 * XREFs of WmiLogStreamPosition @ 0x1C0003D30
 * Callers:
 *     PropertyGetAudioPositionEx @ 0x1C0037CC0 (PropertyGetAudioPositionEx.c)
 *     PropertyGetAudioPosition @ 0x1C00399C0 (PropertyGetAudioPosition.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009730 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WmiLogStreamPosition(_QWORD *a1, int a2)
{
  __int16 WnodeEventItem; // [rsp+20h] [rbp-78h] BYREF
  __int128 v4; // [rsp+22h] [rbp-76h]
  _BYTE v5[44]; // [rsp+32h] [rbp-66h] BYREF
  __int16 v6; // [rsp+5Eh] [rbp-3Ah]
  _DWORD v7[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v8; // [rsp+68h] [rbp-30h]
  __int64 v9; // [rsp+70h] [rbp-28h]
  __int64 v10; // [rsp+78h] [rbp-20h]
  __int64 v11; // [rsp+80h] [rbp-18h]

  v4 = 0LL;
  memset(v5, 0, sizeof(v5));
  v6 = 0;
  if ( !ExBusWmiLogEnable || !ExBusWmiLoggerHandle || (unsigned int)ExBusWmiLogLevel < 5 )
    return -1073741823;
  v8 = a1[2];
  v9 = a1[3];
  v10 = a1[1];
  v11 = a1[4];
  *(_QWORD *)&v5[30] = v7;
  WnodeEventItem = 64;
  v7[0] = 48;
  v7[1] = a2;
  *(_DWORD *)&v5[38] = 40;
  *(_DWORD *)&v5[26] = 1179648;
  WORD1(v4) = 1328;
  *(_OWORD *)&v5[6] = ExBus_Position_GUID;
  *(_QWORD *)((char *)&v4 + 6) = ExBusWmiLoggerHandle;
  return IoWMIWriteEvent(&WnodeEventItem);
}
