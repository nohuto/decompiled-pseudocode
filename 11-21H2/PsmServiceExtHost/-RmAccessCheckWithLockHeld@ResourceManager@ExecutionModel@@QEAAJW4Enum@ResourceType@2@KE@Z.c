/*
 * XREFs of ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18002B4FC
 * Callers:
 *     RmgrSrv_RmAccessCheck @ 0x18002C050 (RmgrSrv_RmAccessCheck.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180040CA0 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     RmgrSrv_RmAccessCheckOnCaller @ 0x18006CAB0 (RmgrSrv_RmAccessCheckOnCaller.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x1800845FC (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 *     ?CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z @ 0x18008F5E0 (-CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029CF0 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B750 (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned int a2,
        DWORD a3,
        char a4)
{
  char *v4; // rsi
  struct ExecutionModel::ResourceManager *v9; // rcx
  BOOL v10; // r14d
  unsigned int v11; // edi
  void *v13; // rbx
  HANDLE v14; // rax
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-C8h] BYREF
  DWORD v17; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h]
  int v20; // [rsp+50h] [rbp-B0h]
  __int16 v21; // [rsp+54h] [rbp-ACh]
  _BYTE v22[560]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+290h] [rbp+190h] BYREF
  PVOID *p_P; // [rsp+2B0h] [rbp+1B0h]
  int v25; // [rsp+2B8h] [rbp+1B8h]
  int v26; // [rsp+2BCh] [rbp+1BCh]
  DWORD *v27; // [rsp+2C0h] [rbp+1C0h]
  int v28; // [rsp+2C8h] [rbp+1C8h]
  int v29; // [rsp+2CCh] [rbp+1CCh]
  unsigned int *v30; // [rsp+2D0h] [rbp+1D0h]
  int v31; // [rsp+2D8h] [rbp+1D8h]
  int v32; // [rsp+2DCh] [rbp+1DCh]

  v4 = 0LL;
  P = 0LL;
  if ( a2 > 0x31 )
  {
    v11 = -2147024809;
    goto LABEL_9;
  }
  if ( (*((int (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*a1 + 5))(a1, a3, v22) >= 0 )
  {
    RmpActivityHostFindByPsmId(a1[16], (struct _RM_PSM_HOST_INFO *)v22, (struct _RM_ACTIVITY_HOST **)&P);
    v4 = (char *)P;
    if ( P )
    {
      if ( !*((_BYTE *)P + 656) )
      {
        v18 = a2;
        v19 = 1LL;
        v20 = 101;
        v21 = 256;
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          v9,
          (a4 != 0) + 2,
          1u,
          (struct ExecutionModel::_ResourceInfo *)&v18,
          (struct _RM_ACTIVITY_HOST *)P);
        v10 = v20 != 101;
        v11 = 0;
        goto LABEL_6;
      }
    }
  }
  v13 = 0LL;
  v14 = OpenProcess(0x100000u, 0, a3);
  v11 = 1;
  if ( v14 )
  {
    v13 = v14;
    if ( WaitForSingleObject(v14, 0) == 258 )
    {
      v10 = 1;
LABEL_18:
      CloseHandle(v13);
LABEL_6:
      if ( v10 )
        goto LABEL_7;
      goto LABEL_12;
    }
  }
  v10 = 0;
  if ( v13 )
    goto LABEL_18;
LABEL_12:
  v11 = -2147024891;
LABEL_7:
  if ( v4 )
    RmpObjectRelease(v4);
LABEL_9:
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 9) != 0 && (qword_1800DC1F8 & 9) == qword_1800DC1F8 )
  {
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v30 = &v16;
    v31 = 4;
    v27 = &v17;
    p_P = &P;
    v28 = 4;
    v25 = 4;
    v16 = a2;
    v17 = a3;
    LODWORD(P) = v11;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800C21DA,
      0LL,
      0LL,
      5u,
      &v23);
  }
  return v11;
}
