/*
 * XREFs of PopScanIdleList @ 0x1402D6330
 * Callers:
 *     PopSystemIdleWorker @ 0x140752F30 (PopSystemIdleWorker.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x140255D5C (PopGetPowerSettingValue.c)
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036B86C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PoRequestPowerIrp @ 0x1403A3C60 (PoRequestPowerIrp.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopCoalescingCheck @ 0x1405CFAF4 (PopCoalescingCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1405D1B90 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1405D3148 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopSetPowerSettingValue @ 0x14075140C (PopSetPowerSettingValue.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407525EC (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PopScanIdleList(int a1, unsigned __int64 a2)
{
  int v2; // esi
  int v3; // ebx
  unsigned __int64 v4; // rdi
  char v5; // r13
  unsigned int v6; // r12d
  KIRQL v7; // al
  __int64 *v8; // r15
  __int64 v9; // rdx
  int v10; // r8d
  __int64 *v12; // rbx
  __int32 v13; // r14d
  unsigned __int32 v14; // esi
  unsigned int v15; // edi
  int v16; // edx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v26; // rdx
  char v27; // al
  char v28; // al
  int v29; // ecx
  char v30; // [rsp+48h] [rbp-C0h] BYREF
  char v31; // [rsp+49h] [rbp-BFh] BYREF
  int Src; // [rsp+4Ch] [rbp-BCh] BYREF
  KIRQL NewIrql[4]; // [rsp+50h] [rbp-B8h]
  int v34; // [rsp+54h] [rbp-B4h] BYREF
  int v35; // [rsp+58h] [rbp-B0h]
  unsigned int v36; // [rsp+5Ch] [rbp-ACh] BYREF
  int v37; // [rsp+60h] [rbp-A8h]
  unsigned int v38; // [rsp+64h] [rbp-A4h]
  unsigned int v39; // [rsp+68h] [rbp-A0h]
  unsigned int v40; // [rsp+6Ch] [rbp-9Ch]
  unsigned __int32 v41; // [rsp+70h] [rbp-98h] BYREF
  __int32 v42; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+80h] [rbp-88h]
  _QWORD *v44; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v45; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  int *v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-48h]
  __int64 v51; // [rsp+C8h] [rbp-40h]
  int v52; // [rsp+D0h] [rbp-38h]
  int v53; // [rsp+D4h] [rbp-34h]
  __int64 *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  char *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  unsigned __int32 *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  __int32 *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  char *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  char *v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  char *v66; // [rsp+138h] [rbp+30h]
  __int64 v67; // [rsp+140h] [rbp+38h]

  v37 = dword_140C232E8;
  v2 = a1;
  v3 = 0;
  v40 = dword_140C232E4;
  v4 = a2;
  v5 = 0;
  v43 = a1;
  v6 = 0;
  v45 = a2;
  Src = 0;
  v38 = *((_DWORD *)PopPolicy + 53);
  v39 = PopCurrentCoalescingSpindownTimeout;
  v36 = 0;
  v35 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  NewIrql[0] = v7;
  if ( byte_140C547FC )
  {
    KeReleaseSpinLock(&PopDopeGlobalLock, v7);
  }
  else
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    v8 = (__int64 *)PopIdleDetectList;
    if ( (__int64 *)PopIdleDetectList != &PopIdleDetectList )
    {
      do
      {
        v12 = v8 - 4;
        v13 = _InterlockedExchange((volatile __int32 *)v8 - 7, 0);
        *((_DWORD *)v8 - 5) += v13;
        if ( v13 || *((_DWORD *)v12 + 2) )
          *(_DWORD *)v12 = 0;
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v12, PopIdleScanInterval);
        if ( !v14 )
          *((_DWORD *)v12 + 14) = 1;
        if ( v37 == 1 )
          v15 = *((_DWORD *)v12 + 4);
        else
          v15 = *((_DWORD *)v12 + 5);
        v16 = *((_DWORD *)v12 + 12);
        v17 = v14;
        if ( v16 == 1 )
        {
          if ( v15 == -1 )
            v15 = v38;
          v19 = PopCoalescingCheck(v39, v15, v14);
          v15 = v19;
          if ( v19 )
            ++v35;
          v6 = v40;
          if ( v40 > v19 )
            v6 = v19;
          v20 = *((_DWORD *)v12 + 23);
          v17 = PopIdleScanInterval + *((_DWORD *)v12 + 22);
          if ( v14 )
          {
            if ( v20 <= PopIdleScanInterval )
              v23 = 0;
            else
              v23 = v20 - PopIdleScanInterval;
          }
          else
          {
            v21 = v20 + PopIdleScanInterval;
            v22 = v6;
            v23 = v6;
            if ( v21 <= v6 )
            {
              v22 = PopIdleScanInterval + *((_DWORD *)v12 + 22);
              v23 = v21;
            }
            v17 = v22;
          }
          *((_DWORD *)v12 + 23) = v23;
          v16 = *((_DWORD *)v12 + 12);
          *((_DWORD *)v12 + 22) = v17;
        }
        if ( v15 && v17 >= v15 && *((_DWORD *)v12 + 14) == 1 && (v14 || (PopSimulate & 0x2000000) != 0) )
        {
          if ( v16 == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v12[3]);
          if ( PoRequestPowerIrp(
                 (PDEVICE_OBJECT)v12[3],
                 2u,
                 *(POWER_STATE *)((char *)v12 + 52),
                 PopDeviceIdleCompletion,
                 0LL,
                 0LL) >= 0 )
          {
            *((_DWORD *)v12 + 3) = 0;
            v24 = *((_DWORD *)v12 + 13);
            ++dword_140C547F8;
            *((_DWORD *)v12 + 14) = v24;
          }
        }
        else if ( v16 == 1 && !v14 )
        {
          v5 = 1;
        }
        v42 = v13;
        v41 = v14;
        v31 = 0;
        v30 = 0;
        LOWORD(v34) = 0;
        v44 = 0LL;
        if ( PopDiagHandleRegistered )
        {
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK) )
          {
            DeviceAttachmentBaseRefWithTag = (_QWORD *)IoGetDeviceAttachmentBaseRefWithTag(v12[3], 1732538192LL);
            v44 = DeviceAttachmentBaseRefWithTag;
            if ( DeviceAttachmentBaseRefWithTag )
            {
              v26 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
              if ( v26 )
              {
                LOWORD(v34) = *(_WORD *)(v26 + 40) >> 1;
                v27 = *((_BYTE *)v12 + 52) - 1;
                UserData.Ptr = (ULONGLONG)(v12 + 3);
                v30 = v27;
                v28 = *((_BYTE *)v12 + 56) - 1;
                *(_QWORD *)&UserData.Size = 8LL;
                v31 = v28;
                v47 = &v44;
                v49 = &v34;
                v48 = 8LL;
                v50 = 2LL;
                v29 = *(unsigned __int16 *)(v26 + 40);
                v51 = *(_QWORD *)(v26 + 48);
                v54 = v12 + 2;
                v56 = (char *)v12 + 20;
                v58 = &v41;
                v60 = &v42;
                v62 = (char *)v12 + 12;
                v64 = &v30;
                v66 = &v31;
                v52 = v29;
                v65 = 1LL;
                v67 = 1LL;
                v53 = 0;
                v55 = 4LL;
                v57 = 4LL;
                v59 = 4LL;
                v61 = 4LL;
                v63 = 4LL;
                EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
                DeviceAttachmentBaseRefWithTag = v44;
              }
              if ( DeviceAttachmentBaseRefWithTag )
                ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x67446F50u);
            }
          }
        }
        if ( *((_DWORD *)v12 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(v8 - 4, v15, v6);
        v8 = (__int64 *)*v8;
      }
      while ( v8 != &PopIdleDetectList );
      v3 = v35;
      v4 = v45;
      v2 = v43;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KeReleaseSpinLock(&PopDopeGlobalLock, NewIrql[0]);
    v10 = PopIdleBackgroundIgnoreCount;
    if ( PopIdleBackgroundIgnoreCount )
      v10 = --PopIdleBackgroundIgnoreCount;
    if ( PopBackgroundTaskIgnoreCount )
      --PopBackgroundTaskIgnoreCount;
    if ( !v2
      || (v9 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval,
          v18 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval,
          v4 == v18) )
    {
      PopBackgroundTaskAllowed = 1;
    }
    else if ( v4 < v18 )
    {
      PopBackgroundTaskAllowed = 0;
    }
    if ( !v3 || v5 )
    {
      if ( !v10 && !dword_140C232CC )
      {
        PopGetPowerSettingValue((__int64)&GUID_IDLE_BACKGROUND_TASK, v9, 3, &Src, 4u, &v36);
        ++Src;
        PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK);
        v9 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
        PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
      }
      if ( !PopBackgroundTaskIgnoreCount && PopSIdle >= 50 && !dword_140C232CC && PopBackgroundTaskAllowed )
      {
        PopGetPowerSettingValue((__int64)&GUID_BACKGROUND_TASK_NOTIFICATION, v9, 0, &Src, 4u, &v36);
        ++Src;
        PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, &Src);
        PopBackgroundTaskAllowed = 0;
        PopBackgroundTaskIgnoreCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      }
    }
  }
  return 0LL;
}
