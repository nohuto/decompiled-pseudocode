/*
 * XREFs of ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18003A288
 * Callers:
 *     RmgrSrv_RmAcquireResources @ 0x180039920 (RmgrSrv_RmAcquireResources.c)
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180006188 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A5A4 (-RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333333@Z @ 0x18003A62C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemp.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18003A82C (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@$0A@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@utl@@_N@1@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@4@@Z @ 0x18004F46C (--$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@$0A@@-$_HashTabl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
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
  ExecutionModel::ResourceManager *v12; // rbx
  unsigned int v13; // r15d
  unsigned int v15; // edi
  __int64 v16; // r8
  __int64 v17; // rsi
  char v18; // r13
  unsigned int v19; // edx
  _DWORD *v20; // rcx
  char v21; // r15
  unsigned int *v22; // r14
  int v23; // eax
  __int64 v24; // rdi
  int v25; // ebx
  unsigned int v26; // ecx
  DWORD v27; // r14d
  struct _RM_SERVICE_GLOBALS **v28; // rsi
  int v29; // r8d
  __int64 v30; // rax
  _QWORD *v31; // r8
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  unsigned int v37; // edx
  char v38; // [rsp+38h] [rbp-C8h]
  unsigned int v39; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v40; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  struct _RM_SERVICE_GLOBALS **v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  int v45; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v46; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v47[3]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v48[144]; // [rsp+C0h] [rbp-40h] BYREF

  v12 = g_pResourceManager;
  v13 = a4;
  v43 = a11;
  v15 = a2;
  v46 = a12;
  v42 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  v40 = a4;
  v39 = a2;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v48);
  v17 = 0LL;
  v44 = 0LL;
  v41 = 0LL;
  if ( v15 >= 0x32 || !v15 || !a3 || !a12 || !a7 )
  {
    v25 = -2147024809;
    goto LABEL_23;
  }
  v18 = 1;
  v19 = 0;
  v20 = a3;
  while ( (unsigned int)(*v20 - 22) <= 4 )
  {
    ++v19;
    v20 += 6;
    if ( v19 >= v15 )
      goto LABEL_9;
  }
  v18 = 0;
LABEL_9:
  RmHamFindHostByPid(*((_QWORD *)v12 + 16) + 2248LL, a5, v16, &v44);
  RmpAcquireGlobalLock();
  v21 = 0;
  v22 = a3;
  while ( 1 )
  {
    v23 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld((struct _RM_SERVICE_GLOBALS **)v12, *v22, a5, 0);
    v24 = v44;
    v25 = v23;
    if ( v23 < 0 )
      break;
    v26 = v39;
    v17 = (unsigned int)(v17 + 1);
    v12 = (ExecutionModel::ResourceManager *)v42;
    v22 += 6;
    if ( (unsigned int)v17 >= v39 )
    {
      v27 = a5;
      v28 = v42;
      goto LABEL_13;
    }
  }
  v29 = a8;
  if ( (a8 & 1) == 0 )
    goto LABEL_36;
  v27 = a5;
  if ( v18 )
  {
    v37 = a3[6 * v17];
    v28 = v42;
    v25 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v42, v37, a5, 1);
    if ( v25 >= 0 )
    {
      v26 = v39;
      v21 = 1;
LABEL_13:
      v29 = a8;
      goto LABEL_14;
    }
LABEL_36:
    v13 = v40;
    goto LABEL_37;
  }
  v26 = v39;
  v21 = 1;
  v28 = v42;
LABEL_14:
  if ( v24 )
    v30 = v24 - 64;
  else
    v30 = 0LL;
  v38 = v21;
  v13 = v40;
  v25 = ExecutionModel::ExternalResourceSet::CreateInstance(
          v28[3],
          v26,
          a3,
          v40,
          v27,
          a6,
          a7,
          v38,
          v29,
          a9,
          a10,
          v30,
          v43,
          &v41);
  if ( v25 >= 0 )
  {
    v31 = v46;
    *v46 = v41;
    utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::emplace<ExecutionModel::ResourceHandle__ * &,ExecutionModel::ExternalResourceSet * &,0>(
      v28 + 11,
      v47,
      v31,
      &v41);
    v17 = v41;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    v25 = 0;
    goto LABEL_18;
  }
LABEL_37:
  v17 = v41;
LABEL_18:
  RmpReleaseGlobalLock();
  if ( v24 )
  {
    RmpAcquireGlobalLock();
    if ( (*(_QWORD *)(v24 + 600))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)((v24 - 64) & -(__int64)(v24 != 0)));
    RmpReleaseGlobalLock();
  }
  v15 = v39;
LABEL_23:
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    v40 = (unsigned __int8)v34;
    v39 = a10;
    v45 = a9;
    LODWORD(v46) = a8;
    LODWORD(v43) = a5;
    LODWORD(v44) = v13;
    LODWORD(v42) = v15;
    v47[0] = v17;
    LODWORD(v41) = v25;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v33,
      (unsigned int)&unk_1800C3571,
      v34,
      v35,
      (__int64)&v41,
      (__int64)v47,
      (__int64)&v42,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v39,
      (__int64)&v40);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v25;
}
