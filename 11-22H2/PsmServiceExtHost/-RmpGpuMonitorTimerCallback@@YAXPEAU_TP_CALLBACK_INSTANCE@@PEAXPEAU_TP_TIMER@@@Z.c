/*
 * XREFs of ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008C580
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006F1C (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18002CF10 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032530 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800468A8 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18004699C (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18008BEEC (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x18008C47C (-RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  __int64 v4; // rcx
  char *v5; // rbx
  BOOL IsGpuBusy; // esi
  struct ExecutionModel::ResourceSet *v7; // rax
  struct _RM_OBJECT_HEADER *Next; // rax
  struct _RM_ACTIVITY_HOST *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 First; // [rsp+30h] [rbp-99h] BYREF
  int v14; // [rsp+38h] [rbp-91h]
  int v15; // [rsp+3Ch] [rbp-8Dh]
  _BYTE v16[144]; // [rsp+40h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+D0h] [rbp+7h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  if ( (unsigned int)dword_1800DB1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1800C5A02, 0LL, 0LL, 2u, &v17);
  v5 = a2 + 48;
  RmpAcquireGlobalLock();
  if ( (a2[92] & 1) != 0 )
  {
    IsGpuBusy = RmpGpuMonitorIsGpuBusy((struct _RM_GPU_MONITOR *)(a2 + 48));
    RmpObjectTableEnumerationBegin(
      (struct _RM_OBJECT_TABLE *)(a2 + 16),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v17);
    while ( 1 )
    {
      Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v17);
      v9 = Next;
      if ( !Next )
        break;
      v15 = 0;
      v14 = 2;
      First = RmpActivityHostEnumerateResourceSetGetFirst((__int64)Next, 2, 0);
      while ( 1 )
      {
        v7 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
        if ( !v7 )
          break;
        if ( (*((_BYTE *)v7 + 1380) & 8) != 0 )
        {
          RmpActivityHostCheckAndUpdateGpuInterference(v9, IsGpuBusy);
          break;
        }
      }
      RmpObjectRelease(v9);
    }
    RtlReleaseSRWLockShared(v17.Ptr + 16);
  }
  v10 = *((_DWORD *)v5 + 11);
  if ( (v10 & 1) != 0 )
  {
    TpSetTimer(*(_QWORD *)v5, v5 + 8, 0LL, *((unsigned int *)v5 + 10));
  }
  else
  {
    *((_DWORD *)v5 + 11) = v10 & 0xFFFFFFFD;
    if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
      tlgWriteTransfer_EventWriteTransfer(v11, (unsigned __int8 *)dword_1800C595D, 0LL, 0LL, 2u, &v17);
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800DB1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(v12, (unsigned __int8 *)dword_1800C584F, 0LL, 0LL, 2u, &v17);
  CempLockTrackerClearForThread(HampLockTrackerId);
}
