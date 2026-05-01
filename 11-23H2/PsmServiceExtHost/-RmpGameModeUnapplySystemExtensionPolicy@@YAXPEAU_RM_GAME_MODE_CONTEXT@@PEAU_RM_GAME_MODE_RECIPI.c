/*
 * XREFs of ?RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008A2A0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z @ 0x18008EFAC (-RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z.c)
 */

void __fastcall RmpGameModeUnapplySystemExtensionPolicy(struct _RM_GAME_MODE_CONTEXT *a1, void **a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  RmpSystemNotifyGameModeExtensionStateChange(a2[5], 0);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v4 = *((_DWORD *)a2 + 27);
    v9 = 0;
    v5 = v4;
    v8 = 4;
    v7 = &v5;
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1800C501F, 0LL, 0LL, 3u, &v6);
  }
}
