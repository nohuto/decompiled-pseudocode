/*
 * XREFs of ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180006188
 * Callers:
 *     RmgrSrv_RmAccessCheck @ 0x180005E80 (RmgrSrv_RmAccessCheck.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18003A308 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     RmgrSrv_RmAccessCheckOnCaller @ 0x18006C380 (RmgrSrv_RmAccessCheckOnCaller.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x180082CDC (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 *     ?CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z @ 0x18008B680 (-CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z.c)
 * Callees:
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006450 (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006D40 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032530 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned int a2,
        DWORD a3,
        char a4)
{
  struct _RM_ACTIVITY_HOST *v4; // rdi
  int v5; // esi
  struct ExecutionModel::ResourceManager *v10; // rcx
  unsigned int v11; // ebx
  HANDLE v13; // rax
  void *v14; // rbx
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v16; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_ACTIVITY_HOST *v18; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+58h] [rbp-A8h]
  __int16 v21; // [rsp+5Ch] [rbp-A4h]
  _BYTE v22[560]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+290h] [rbp+190h] BYREF
  void *v24; // [rsp+2A0h] [rbp+1A0h]
  int v25; // [rsp+2A8h] [rbp+1A8h]
  int v26; // [rsp+2ACh] [rbp+1ACh]
  unsigned int *v27; // [rsp+2B0h] [rbp+1B0h]
  int v28; // [rsp+2B8h] [rbp+1B8h]
  int v29; // [rsp+2BCh] [rbp+1BCh]
  DWORD *v30; // [rsp+2C0h] [rbp+1C0h]
  int v31; // [rsp+2C8h] [rbp+1C8h]
  int v32; // [rsp+2CCh] [rbp+1CCh]
  unsigned int *v33; // [rsp+2D0h] [rbp+1D0h]
  int v34; // [rsp+2D8h] [rbp+1D8h]
  int v35; // [rsp+2DCh] [rbp+1DCh]

  v4 = 0LL;
  v5 = 0;
  v18 = 0LL;
  if ( a2 > 0x31 )
  {
    v11 = -2147024809;
    goto LABEL_9;
  }
  if ( (*((int (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*a1 + 5))(a1, a3, v22) >= 0 )
  {
    RmpActivityHostFindByPsmId(a1[16], (struct _RM_PSM_HOST_INFO *)v22, &v18);
    v4 = v18;
    if ( v18 )
    {
      if ( !*((_BYTE *)v18 + 656) )
      {
        *(_DWORD *)&EventDescriptor.Id = a2;
        EventDescriptor.Keyword = 1LL;
        v20 = 101;
        v21 = 256;
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          v10,
          (a4 != 0) + 2,
          1u,
          (struct ExecutionModel::_ResourceInfo *)&EventDescriptor,
          v18);
        LOBYTE(v5) = v20 != 101;
        v11 = 0;
        goto LABEL_6;
      }
    }
  }
  v13 = OpenProcess(0x100000u, 0, a3);
  v14 = v13;
  if ( v13 )
  {
    if ( WaitForSingleObject(v13, 0) == 258 )
      v5 = 1;
    CloseHandle(v14);
    v11 = 1;
LABEL_6:
    if ( v5 )
      goto LABEL_7;
  }
  v11 = -2147024891;
LABEL_7:
  if ( v4 )
    RmpObjectRelease(v4);
LABEL_9:
  if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 9) != 0 && (qword_1800DB1F8 & 9) == qword_1800DB1F8 )
  {
    v35 = 0;
    v32 = 0;
    v29 = 0;
    v33 = &v15;
    v34 = 4;
    v30 = &v16;
    v27 = &v17;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DB1E8;
    v31 = 4;
    v28 = 4;
    v15 = a2;
    v16 = a3;
    v17 = v11;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
    v24 = &unk_1800C3383;
    UserData.Reserved = 2;
    v25 = 57;
    v26 = 1;
    LODWORD(v18) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return v11;
}
