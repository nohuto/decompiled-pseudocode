/*
 * XREFs of ??0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C00CFA80
 * Callers:
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00CF8CC (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ??0CMutex@OPM@@QEAA@PEAJ@Z @ 0x1C005BE20 (--0CMutex@OPM@@QEAA@PEAJ@Z.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C009ABA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x1C0169414 (--_GCMutex@OPM@@QEAAPEAXI@Z.c)
 *     ?Destroy@CMonitorPDO@OPM@@UEAAJXZ @ 0x1C0169450 (-Destroy@CMonitorPDO@OPM@@UEAAJXZ.c)
 */

OPM::CMonitorPDO *__fastcall OPM::CMonitorPDO::CMonitorPDO(
        OPM::CMonitorPDO *this,
        struct _LUID *a2,
        unsigned int a3,
        int *a4)
{
  PVOID *v4; // r15
  OPM::CMutex *Pool2; // rax
  unsigned int v8; // edx
  void **v9; // rax
  struct _KMUTANT **v10; // rbx
  void **v11; // r14
  NTSTATUS DeviceInterfaces; // esi
  struct _KMUTANT *v13; // rcx
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp-10h] BYREF
  PVOID EventCategoryData; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+50h]
  int *v18; // [rsp+A8h] [rbp+58h]

  v18 = a4;
  v17 = a3;
  v4 = (PVOID *)((char *)this + 16);
  *(_QWORD *)this = &OPM::CMonitorPDO::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  if ( *a4 < 0 )
    return this;
  *((struct _LUID *)this + 8) = *a2;
  SymbolicLinkList = 0LL;
  LODWORD(EventCategoryData) = 0;
  Pool2 = (OPM::CMutex *)ExAllocatePool2(258LL, 8LL);
  if ( !Pool2 )
  {
    v11 = 0LL;
    goto LABEL_25;
  }
  v9 = (void **)OPM::CMutex::CMutex(Pool2, (int *)&EventCategoryData);
  v10 = (struct _KMUTANT **)v9;
  v11 = v9;
  if ( !v9 )
  {
LABEL_25:
    DeviceInterfaces = -1073741801;
    goto LABEL_13;
  }
  DeviceInterfaces = (int)EventCategoryData;
  if ( (int)EventCategoryData < 0 )
    goto LABEL_13;
  *((_QWORD *)this + 1) = v9;
  v11 = 0LL;
  OPM::CMutex::Lock(v9);
  EventCategoryData = 0LL;
  DeviceInterfaces = ((__int64 (__fastcall *)(struct _LUID *, _QWORD, PVOID *, PVOID *))qword_1C0296828)(
                       a2,
                       v17,
                       &EventCategoryData,
                       v4);
  if ( DeviceInterfaces < 0
    || (ObfReferenceObject(*v4),
        DeviceInterfaces = IoRegisterPlugPlayNotification(
                             EventCategoryTargetDeviceChange,
                             0,
                             EventCategoryData,
                             gpWin32kDriverObject,
                             OPM::CMonitorPDO::MonitorPDORemovalCallback,
                             this,
                             (PVOID *)this + 5),
        ObfDereferenceObject(EventCategoryData),
        EventCategoryData = 0LL,
        DeviceInterfaces < 0)
    || (DeviceInterfaces = IoRegisterPlugPlayNotification(
                             EventCategoryDeviceInterfaceChange,
                             0,
                             &GUID_DEVINTERFACE_MONITOR,
                             gpWin32kDriverObject,
                             OPM::CMonitorPDO::MonitorInterfaceCallback,
                             this,
                             (PVOID *)this + 6),
        DeviceInterfaces < 0) )
  {
LABEL_22:
    v13 = *v10;
    if ( !*v10 )
      goto LABEL_13;
    goto LABEL_12;
  }
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, (PDEVICE_OBJECT)*v4, 0, &SymbolicLinkList);
  if ( DeviceInterfaces < 0 )
    goto LABEL_11;
  if ( !*SymbolicLinkList )
  {
    DeviceInterfaces = -1073741823;
    goto LABEL_22;
  }
  RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 24), SymbolicLinkList);
LABEL_11:
  SymbolicLinkList = 0LL;
  v13 = *v10;
  if ( *v10 )
  {
LABEL_12:
    KeReleaseMutex(v13, 0);
LABEL_13:
    if ( SymbolicLinkList )
    {
      ExFreePoolWithTag(SymbolicLinkList, 0);
      SymbolicLinkList = 0LL;
    }
    if ( v11 )
      OPM::CMutex::`scalar deleting destructor'(v11, v8);
  }
  if ( DeviceInterfaces < 0 )
  {
    if ( *((_QWORD *)this + 1) )
      OPM::CMonitorPDO::Destroy(this);
    *v18 = DeviceInterfaces;
  }
  else
  {
    *((_QWORD *)this + 7) = PsGetCurrentProcessId();
  }
  return this;
}
