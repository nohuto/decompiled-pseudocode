/*
 * XREFs of ?HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007EF80
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800374BC (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003DB64 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E214 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180046464 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18004FD4C (-HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800515BE (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072B08 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072E24 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180078F18 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?HampSystemCheckNotifyForPowerChange@@YAXE@Z @ 0x180092AFC (-HampSystemCheckNotifyForPowerChange@@YAXE@Z.c)
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x180092FB0 (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 */

void __fastcall HampPdcDamExitWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _HOST_ACTIVITY_MANAGER *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct _HAM_RC_TREE_NODE *v10; // r15
  struct _HOST_ACTIVITY_MANAGER *v11; // rcx
  __int64 v12; // rdx
  int v13; // ebp
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rdi
  __int64 v15; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v16; // rcx
  BOOL IsResumed; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // edx
  __int64 v23; // rcx
  int v24; // [rsp+40h] [rbp-108h] BYREF
  __int64 v25; // [rsp+48h] [rbp-100h] BYREF
  const unsigned __int16 *v26; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-F0h] BYREF
  _BYTE v28[144]; // [rsp+60h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+F0h] [rbp-58h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1800C1A7D, 0LL, 0LL, 2u, &v29);
  v6 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v4);
  v7 = *((_DWORD *)a2 + 28);
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v8);
  if ( !v7 )
  {
    v10 = (struct _HOST_ACTIVITY_MANAGER *)((char *)v6 + 128);
    while ( 1 )
    {
      HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v9);
      v11 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
      v27 = *((_QWORD *)a2 + 15);
      HampManagerReleaseLockShared(v11, v12);
      v13 = 1;
      NextHost = HampHostEnumerateHostsInNode(v10, 0, 0LL);
      if ( !NextHost )
        break;
      do
      {
        HampHostAcquireLockSharedEx(NextHost, 0LL);
        if ( (*((_BYTE *)NextHost + 672) & 0x20) == 0 || HampHostIsTerminateQueued(NextHost) )
        {
          CempLockTrackerMarkReleased(HampLockTrackerId, v15, 1u);
          RtlReleaseSRWLockShared(NextHost);
        }
        else
        {
          IsResumed = HampHostIsResumed(v16);
          CempLockTrackerMarkReleased(HampLockTrackerId, v18, 1u);
          RtlReleaseSRWLockShared(NextHost);
          v13 &= IsResumed;
          if ( !IsResumed && (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
          {
            v25 = *((_QWORD *)NextHost - 4);
            v24 = *((_DWORD *)NextHost + 140);
            v26 = (const unsigned __int16 *)((char *)NextHost + 24);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v19,
              byte_1800C1CA6,
              v20,
              v21,
              &v26,
              (__int64)&v24,
              (__int64)&v25);
          }
        }
        NextHost = HampManagerGetNextHost(NextHost);
      }
      while ( NextHost );
      if ( v13 )
        break;
      RtlWaitOnAddress(a2 + 120, &v27, 8LL);
    }
  }
  HampSystemCheckNotifyForPowerChange(0);
  HampSystemNotificationClientAcknowledge(*((void **)a2 + 2), v22);
  HampPdcEndBoostForPhaseExit((struct _HOST_ACTIVITY_MANAGER **)a2);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
      tlgWriteTransfer_EventWriteTransfer(v23, (unsigned __int8 *)dword_1800C1C22, 0LL, 0LL, 2u, &v29);
  }
}
