/*
 * XREFs of UsbhResumePort @ 0x1C001A780
 * Callers:
 *     UsbhResumeSuspendedPort @ 0x1C001A698 (UsbhResumeSuspendedPort.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0016EE0 (UsbhSyncSendCommand.c)
 */

__int64 __fastcall UsbhResumePort(__int64 a1, __int64 a2)
{
  __int16 v4; // r11
  _DWORD *v5; // r10
  int v6; // eax
  unsigned int v7; // r10d
  int v9; // [rsp+20h] [rbp-18h]
  __int16 v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF
  __int16 v12; // [rsp+5Ch] [rbp+24h]
  __int16 v13; // [rsp+5Eh] [rbp+26h]

  Log(a1, 4, 1381191024, *(unsigned __int16 *)(a2 + 4), 0LL);
  v12 = *(_WORD *)(a2 + 4);
  v10 = v4;
  v11 = 131363;
  v13 = v4;
  v6 = UsbhSyncSendCommand(a1, (__int64)&v11, 0LL, &v10, v9, v5);
  Log(a1, 4, 1381191032, *(unsigned __int16 *)(a2 + 4), v6);
  return v7;
}
