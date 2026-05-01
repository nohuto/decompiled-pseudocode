/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180040CA0
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x180040A30 (RmgrSrv_RmAcquireResources.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18002B4FC (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B750 (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ??$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@utl@@_N@1@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@4@@Z @ 0x180040FC0 (--$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@@-$_HashTable@PE.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180041280 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333333@Z @ 0x18004462C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemp.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAcquireResources(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        DWORD a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        _QWORD *a12)
{
  struct _RM_SERVICE_GLOBALS **v12; // rbx
  __int64 v15; // rdi
  char *v16; // r15
  char v17; // di
  unsigned int v18; // edx
  _DWORD *v19; // rcx
  unsigned int *v20; // r14
  __int64 v21; // rsi
  int v22; // ebx
  int v23; // r14d
  struct _RM_SERVICE_GLOBALS **v24; // rsi
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  unsigned int v29; // edx
  char v30; // [rsp+70h] [rbp-90h]
  unsigned int v31; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  struct _RM_SERVICE_GLOBALS **v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  struct _RM_ACTIVITY_HOST *v35; // [rsp+90h] [rbp-70h] BYREF
  int v36; // [rsp+98h] [rbp-68h] BYREF
  int v37; // [rsp+9Ch] [rbp-64h] BYREF
  _QWORD *v38; // [rsp+A0h] [rbp-60h] BYREF
  int v39[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v40[144]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v41[560]; // [rsp+150h] [rbp+50h] BYREF

  v12 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  v34 = a11;
  v38 = a12;
  v33 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  v31 = a4;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v40);
  v15 = 0LL;
  v16 = 0LL;
  v32 = 0LL;
  v35 = 0LL;
  if ( a2 < 0x32 && a2 && a3 && a12 && a7 )
  {
    v17 = 1;
    v18 = 0;
    v30 = 1;
    v19 = a3;
    while ( (unsigned int)(*v19 - 22) <= 4 )
    {
      ++v18;
      v19 += 6;
      if ( v18 >= a2 )
        goto LABEL_9;
    }
    v30 = 0;
LABEL_9:
    RmpAcquireGlobalLock();
    if ( (*((int (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*v12 + 5))(v12, a5, v41) >= 0 )
    {
      RmpActivityHostFindByPsmId(v12[16], (struct _RM_PSM_HOST_INFO *)v41, &v35);
      v16 = (char *)v35;
    }
    v20 = a3;
    v21 = 0LL;
    while ( 1 )
    {
      v22 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v12, *v20, a5, 0);
      if ( v22 < 0 )
        break;
      v12 = v33;
      v21 = (unsigned int)(v21 + 1);
      v20 += 6;
      if ( (unsigned int)v21 >= a2 )
      {
        v23 = a8;
        v17 = 0;
        v24 = v33;
        goto LABEL_15;
      }
    }
    v23 = a8;
    if ( (a8 & 1) == 0 )
      goto LABEL_29;
    if ( v30 )
    {
      v29 = a3[6 * v21];
      v24 = v33;
      v22 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v33, v29, a5, 1);
      if ( v22 < 0 )
        goto LABEL_29;
    }
    else
    {
      v24 = v33;
    }
LABEL_15:
    v22 = ExecutionModel::ExternalResourceSet::CreateInstance(
            v24[3],
            a2,
            a3,
            v31,
            a5,
            a6,
            a7,
            v17,
            v23,
            a9,
            a10,
            v16,
            v34,
            &v32);
    if ( v22 >= 0 )
    {
      *v38 = v32;
      utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::emplace<ExecutionModel::ResourceHandle__ * &,ExecutionModel::ExternalResourceSet * &>(
        (_DWORD)v24 + 88,
        (int)v39);
      v15 = v32;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      v22 = 0;
      goto LABEL_17;
    }
LABEL_29:
    v15 = v32;
LABEL_17:
    RmpReleaseGlobalLock();
    if ( v16 )
      RmpObjectRelease(v16);
  }
  else
  {
    v22 = -2147024809;
    v23 = a8;
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 9LL) )
  {
    v36 = (unsigned __int8)v27;
    v37 = a10;
    LODWORD(v38) = a9;
    LODWORD(v35) = a5;
    LODWORD(v34) = v23;
    LODWORD(v33) = a2;
    *(_QWORD *)v39 = v15;
    LODWORD(v32) = v22;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v25,
      (unsigned int)&unk_1800C2492,
      v26,
      v27,
      (__int64)&v32,
      (__int64)v39,
      (__int64)&v33,
      (__int64)&v31,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v22;
}
