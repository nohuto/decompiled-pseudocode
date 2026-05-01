/*
 * XREFs of ?RmpGameModeCheckRemovePairedAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180088340
 * Callers:
 *     ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x1800883F8 (-RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008947C (-RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

unsigned __int8 __fastcall RmpGameModeCheckRemovePairedAuxiliary(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = *((_QWORD *)a1 + 9);
  if ( (*((_BYTE *)a1 + 80) & 1) != 0 )
  {
    if ( !v2 )
      goto LABEL_5;
    v2 ^= (unsigned __int64)a1 + 72;
  }
  if ( v2 )
    return 0;
LABEL_5:
  RmpGameModeRemoveRecipientProcess(a1);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v4 = *((_DWORD *)a1 + 27);
    v10 = 0;
    v8 = &v6;
    v6 = v4;
    v9 = 4;
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1800C4FE6, 0LL, 0LL, 3u, &v7);
  }
  return 1;
}
