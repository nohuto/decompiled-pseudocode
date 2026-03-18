/*
 * XREFs of ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C02186E0
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021864C (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C03B34FC (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C03B3A0C (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C001CBB4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C002806C (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

__int64 __fastcall MONITOR_MGR::_OpenPersistencyRegistry(MONITOR_MGR *this, ACCESS_MASK a2, void **a3)
{
  __int64 v6; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r15
  __int64 v8; // rbx
  void *v9; // r8
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  NTSTATUS v15; // eax
  void *DeviceRegKey; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING v17; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v18[2]; // [rsp+38h] [rbp-38h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  wchar_t v20; // [rsp+5Ch] [rbp-14h]

  if ( a2 != 131097 && a2 != 131078 && a2 != 983103 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v6 = *((_QWORD *)this + 3);
  DeviceRegKey = 0LL;
  if ( !*(_QWORD *)(v6 + 16) )
  {
    WdLogSingleEntry0(1LL);
    v6 = *((_QWORD *)this + 3);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v6 + 16) + 216LL) )
  {
    WdLogSingleEntry0(1LL);
    v6 = *((_QWORD *)this + 3);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(v6 + 16) + 216LL));
  if ( !DeviceAttachmentBaseRef )
    WdLogSingleEntry0(1LL);
  v8 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 1u, a2, &DeviceRegKey);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( (int)v8 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), v8);
    return (unsigned int)v8;
  }
  v9 = DeviceRegKey;
  if ( !DeviceRegKey )
  {
    WdLogSingleEntry0(1LL);
    v9 = DeviceRegKey;
  }
  v19 = *(_DWORD *)L"cy";
  *a3 = 0LL;
  v20 = aMonitorpersist[18];
  v17.Buffer = (wchar_t *)v18;
  v18[0] = *(_OWORD *)L"MonitorPersistency";
  *(_QWORD *)&v17.Length = 2490404LL;
  v18[1] = *(_OWORD *)L"ersistency";
  v10 = DxgkOpenRegistrySubkey(a3, a2, v9, &v17);
  v8 = v10;
  if ( v10 != -1073741772 )
  {
    if ( v10 >= 0 )
    {
      if ( !*a3 )
        WdLogSingleEntry0(1LL);
      goto LABEL_17;
    }
    goto LABEL_23;
  }
  if ( a2 == 131078 || a2 == 983103 )
  {
    v15 = DxgkCreateRegistrySubkey(a3, a2, DeviceRegKey, &v17);
    v8 = v15;
    if ( v15 >= 0 )
      goto LABEL_17;
LABEL_23:
    WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), v8);
    goto LABEL_17;
  }
  v13 = WdLogNewEntry5_WdTrace(v12, v11);
  *(_QWORD *)(v13 + 24) = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
  *(_QWORD *)(v13 + 32) = -1073741772LL;
LABEL_17:
  ZwClose(DeviceRegKey);
  return (unsigned int)v8;
}
