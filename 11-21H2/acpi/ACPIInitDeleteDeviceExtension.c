/*
 * XREFs of ACPIInitDeleteDeviceExtension @ 0x1C00569B4
 * Callers:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C0007270 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIExtListEnumNext @ 0x1C000C1AC (ACPIExtListEnumNext.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C0056D10 (ACPIInitRemoveDeviceExtension.c)
 * Callees:
 *     ACPIInternalMoveList @ 0x1C0002C10 (ACPIInternalMoveList.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C00056D8 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     ExFreeToNPagedLookasideList @ 0x1C00309D4 (ExFreeToNPagedLookasideList.c)
 *     ACPICleanDeviceDependenciesWithTreeLock @ 0x1C004B558 (ACPICleanDeviceDependenciesWithTreeLock.c)
 *     ACPIInitRemovePowerNodes @ 0x1C0056E28 (ACPIInitRemovePowerNodes.c)
 *     ACPIInternalInterruptPolarityCacheCleanup @ 0x1C00575A8 (ACPIInternalInterruptPolarityCacheCleanup.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C005F510 (PnpiCleanupForceActiveBothInterrupts.c)
 *     AMLIFinalizeObject @ 0x1C00646F8 (AMLIFinalizeObject.c)
 */

void __fastcall ACPIInitDeleteDeviceExtension(volatile signed __int32 *Entry)
{
  unsigned int v2; // ecx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  __int64 v21; // rax
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  volatile signed __int32 *v25; // rdi
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rcx

  v2 = 0;
  v3 = Entry + 102;
  while ( !*v3 )
  {
    ++v2;
    ++v3;
    if ( v2 > 4 )
      goto LABEL_4;
  }
  if ( (Entry[250] & 0x20000) != 0 || (Entry[2] & 0x800LL) == 0 )
  {
LABEL_4:
    ACPIInitRemovePowerNodes(Entry);
    PnpiCleanupForceActiveBothInterrupts(Entry);
    ACPIInternalInterruptPolarityCacheCleanup(Entry);
    if ( !Entry )
      return;
    while ( 1 )
    {
      v4 = Entry + 204;
      v5 = *((_QWORD *)Entry + 102);
      if ( *(volatile signed __int32 **)(v5 + 8) != Entry + 204 )
        break;
      v6 = (_QWORD *)*((_QWORD *)Entry + 103);
      if ( (_QWORD *)*v6 != v4 )
        break;
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *((_QWORD *)Entry + 103) = Entry + 204;
      *v4 = v4;
      ACPICleanDeviceDependenciesWithTreeLock((__int64)Entry);
      v7 = Entry + 212;
      v8 = *((_QWORD *)Entry + 106);
      if ( *(volatile signed __int32 **)(v8 + 8) != Entry + 212 )
        break;
      v9 = (_QWORD *)*((_QWORD *)Entry + 107);
      if ( (_QWORD *)*v9 != v7 )
        break;
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = Entry + 208;
      *((_QWORD *)Entry + 107) = Entry + 212;
      *v7 = v7;
      if ( (_QWORD *)*v10 != v10 )
        ACPIInternalMoveList(v10, (__int64)&AcpiUnresolvedEjectList);
      v11 = *((_QWORD *)Entry + 1);
      if ( (v11 & 0x80000000000LL) != 0 )
      {
        v12 = (const char *)&unk_1C006FB8B;
        v13 = (const char *)&unk_1C006FB8B;
        if ( (v11 & 0x200000000000LL) != 0 )
        {
          v12 = (const char *)*((_QWORD *)Entry + 76);
          if ( (v11 & 0x400000000000LL) != 0 )
            v13 = (const char *)*((_QWORD *)Entry + 77);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x16u,
            0xAu,
            (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
            *((_DWORD *)Entry + 190),
            (char)Entry,
            v12,
            v13);
        v14 = *((_QWORD *)Entry + 95);
        if ( v14 )
        {
          AMLIFinalizeObject(v14, 0LL);
          AMLIDereferenceHandleEx(*((volatile signed __int32 **)Entry + 95));
          *((_QWORD *)Entry + 95) = 0LL;
        }
      }
      v15 = *((_QWORD *)Entry + 1);
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v16 = (void *)*((_QWORD *)Entry + 76);
        if ( v16 )
        {
          ExFreePoolWithTag(v16, 0);
          v15 = *((_QWORD *)Entry + 1);
        }
      }
      if ( (v15 & 0x400000000000LL) != 0 )
      {
        v17 = (void *)*((_QWORD *)Entry + 77);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
      }
      v18 = (void *)*((_QWORD *)Entry + 84);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      v19 = (void *)*((_QWORD *)Entry + 85);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      v20 = (void *)*((_QWORD *)Entry + 86);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      v21 = *((_QWORD *)Entry + 1);
      if ( v21 < 0 )
      {
        v22 = (void *)*((_QWORD *)Entry + 23);
        if ( v22 )
        {
          ExFreePoolWithTag(v22, 0);
          v21 = *((_QWORD *)Entry + 1);
        }
      }
      if ( (v21 & 0x8000000) != 0 )
      {
        v23 = (void *)*((_QWORD *)Entry + 25);
        if ( v23 )
        {
          ExFreePoolWithTag(v23, 0x54706341u);
          *((_QWORD *)Entry + 25) = 0LL;
        }
      }
      v24 = (void *)*((_QWORD *)Entry + 116);
      if ( v24 )
        ExFreePoolWithTag(v24, 0x4D706341u);
      v25 = (volatile signed __int32 *)*((_QWORD *)Entry + 99);
      ExFreeToNPagedLookasideList(&DeviceExtensionLookAsideList, (PVOID)Entry);
      if ( !v25 || _InterlockedExchangeAdd(v25 + 183, 0xFFFFFFFF) != 1 )
        return;
      Entry = v25;
    }
LABEL_47:
    __fastfail(3u);
  }
  ACPIInitReferenceDeviceExtension((__int64)Entry);
  v27 = Entry + 220;
  *((_DWORD *)Entry + 224) = *(_DWORD *)(**((_QWORD **)Entry + 95) + 40LL);
  v28 = (_QWORD *)qword_1C00813E8;
  if ( *(__int64 **)qword_1C00813E8 != &AcpiDevicesWhichMightNeedEnumerationList )
    goto LABEL_47;
  *v27 = &AcpiDevicesWhichMightNeedEnumerationList;
  *((_QWORD *)Entry + 111) = v28;
  *v28 = v27;
  qword_1C00813E8 = (__int64)(Entry + 220);
  _InterlockedOr64((volatile signed __int64 *)Entry + 125, v26);
}
