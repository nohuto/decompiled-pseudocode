/*
 * XREFs of ?HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007DEB0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800139C8 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013E94 (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C548 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C580 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041E80 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18004D8CC (-HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18005534E (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18006E814 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?HampSystemCheckNotifyForPowerChange@@YAXE@Z @ 0x18008E1A0 (-HampSystemCheckNotifyForPowerChange@@YAXE@Z.c)
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x18008E6EC (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 */

void __fastcall HampPdcDamExitWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  __int64 v4; // rcx
  struct _HOST_ACTIVITY_MANAGER *v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  struct _HAM_RC_TREE_NODE *v8; // r15
  struct _HOST_ACTIVITY_MANAGER *v9; // rcx
  __int64 v10; // rdx
  int v11; // ebp
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rdi
  __int64 v13; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v14; // rcx
  BOOL IsResumed; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edx
  __int64 v21; // rcx
  int v22; // [rsp+40h] [rbp-108h] BYREF
  __int64 v23; // [rsp+48h] [rbp-100h] BYREF
  const unsigned __int16 *v24; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-F0h] BYREF
  _BYTE v26[144]; // [rsp+60h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+F0h] [rbp-58h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v26);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1800C253F, 0LL, 0LL, 2u, &v27);
  v5 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  v6 = *((_DWORD *)a2 + 28);
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v7);
  if ( !v6 )
  {
    v8 = (struct _HOST_ACTIVITY_MANAGER *)((char *)v5 + 352);
    while ( 1 )
    {
      HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2);
      v9 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
      v25 = *((_QWORD *)a2 + 15);
      HampManagerReleaseLockShared(v9, v10);
      v11 = 1;
      NextHost = HampHostEnumerateHostsInNode(v8, 0, 0LL);
      if ( !NextHost )
        break;
      do
      {
        HampHostAcquireLockSharedEx(NextHost);
        if ( (*((_BYTE *)NextHost + 672) & 0x20) == 0 || HampHostIsTerminateQueued(NextHost) )
        {
          CempLockTrackerMarkReleased(HampLockTrackerId, v13, 1u);
          RtlReleaseSRWLockShared(NextHost);
        }
        else
        {
          IsResumed = HampHostIsResumed(v14);
          CempLockTrackerMarkReleased(HampLockTrackerId, v16, 1u);
          RtlReleaseSRWLockShared(NextHost);
          v11 &= IsResumed;
          if ( !IsResumed && (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
          {
            v23 = *((_QWORD *)NextHost - 4);
            v22 = *((_DWORD *)NextHost + 140);
            v24 = (const unsigned __int16 *)((char *)NextHost + 24);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v17,
              byte_1800C2768,
              v18,
              v19,
              &v24,
              (__int64)&v22,
              (__int64)&v23);
          }
        }
        NextHost = HampManagerGetNextHost(NextHost);
      }
      while ( NextHost );
      if ( v11 )
        break;
      RtlWaitOnAddress(a2 + 120, &v25, 8LL);
    }
  }
  HampSystemCheckNotifyForPowerChange(0);
  HampSystemNotificationClientAcknowledge(*((void **)a2 + 2), v20);
  HampPdcEndBoostForPhaseExit((struct _HOST_ACTIVITY_MANAGER **)a2);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(v21, (unsigned __int8 *)dword_1800C26E4, 0LL, 0LL, 2u, &v27);
}
