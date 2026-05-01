/*
 * XREFs of ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18008B4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18008AAB8 (-RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008ACBC (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z @ 0x18008AD3C (-RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008BB7C (-RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeRecipientProcessTerminationCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        _QWORD *a2,
        struct _TP_WAIT *a3)
{
  _DWORD *v4; // rdi
  int v5; // eax
  char v6; // cl
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  struct _LIST_ENTRY v10; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v12[144]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v14; // [rsp+108h] [rbp+0h]
  int v15; // [rsp+110h] [rbp+8h]
  int v16; // [rsp+114h] [rbp+Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  v4 = (_DWORD *)a2[4];
  if ( (unsigned int)dword_1800DC1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v5 = *((_DWORD *)a2 + 27);
    v16 = 0;
    LODWORD(v9) = v5;
    v15 = 4;
    v14 = &v9;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800C44AB,
      0LL,
      0LL,
      3u,
      &v13);
  }
  RtlAcquireSRWLockExclusive(v4 + 18);
  v4[20] = GetCurrentThreadId();
  v6 = *((_BYTE *)a2 + 170);
  if ( (v6 & 1) == 0 || (*(_BYTE *)(*(_QWORD *)v4 + 3224LL) & 1) != 0 )
  {
    v10.Blink = &v10;
    v10.Flink = &v10;
  }
  else
  {
    RmpGameModeClearPairingTree((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)a2, &v10);
    RmpGameModeRemoveRecipientProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)a2);
    v6 = *((_BYTE *)a2 + 170);
  }
  *((_BYTE *)a2 + 170) = v6 & 0xFD;
  v4[20] = 0;
  RtlReleaseSRWLockExclusive(v4 + 18);
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 0x400000000001LL) )
  {
    LODWORD(v9) = *((_DWORD *)a2 + 27);
    v11 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (int)&dword_1800DC1E0,
      (int)&unk_1800C423C,
      v7,
      v8,
      (__int64)&v9,
      (__int64)&v11);
  }
  RmpGameModeDereferenceRemovedProcesses(&v10);
  RmpGameModeDereferenceRecipientProcess(a2);
  CempLockTrackerClearForThread(HampLockTrackerId);
}
