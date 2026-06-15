/*
 * XREFs of ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x18010C830
 * Callers:
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x18010A13C (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x18010DA8C (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@H@Z @ 0x18010DC40 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z @ 0x1801098A0 (--0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z.c)
 *     ??0ResourceHandleInfo@@QEAA@AEBU0@@Z @ 0x1801099C4 (--0ResourceHandleInfo@@QEAA@AEBU0@@Z.c)
 *     ?AddTail@?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAAPEAU__POSITION@@_K@Z @ 0x18010A3F0 (-AddTail@-$CAtlList@_KV-$CElementTraits@_K@ATL@@@ATL@@QEAAPEAU__POSITION@@_K@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x18010B2C8 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@AEAPEAU__POSITION@@@Z @ 0x18010B660 (-GetNext@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x18010D968 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@H@Z @ 0x18010DC40 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@.c)
 *     ?SetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x18010DEE0 (-SetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXP.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CConstraintModelResourceManager::ProcessRevokedResources(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rcx
  _QWORD *p_Type; // rbx
  const struct ResourceHandleInfo *v4; // rax
  __int64 v5; // rdi
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // di
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  _QWORD *v14; // [rsp+28h] [rbp-E0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-D8h] BYREF
  char v16; // [rsp+38h] [rbp-D0h]
  __int64 v17[5]; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+68h] [rbp-A0h]
  __int128 v19; // [rsp+70h] [rbp-98h] BYREF
  __int128 v20; // [rsp+80h] [rbp-88h] BYREF
  __int64 v21[36]; // [rsp+98h] [rbp-70h] BYREF
  int v22; // [rsp+1BCh] [rbp+B4h]
  unsigned __int16 v23[201]; // [rsp+1C0h] [rbp+B8h] BYREF
  unsigned __int16 v24[261]; // [rsp+352h] [rbp+24Ah] BYREF
  unsigned int v25; // [rsp+55Ch] [rbp+454h]
  int v26; // [rsp+564h] [rbp+45Ch]
  __int64 v27; // [rsp+570h] [rbp+468h] BYREF
  _BYTE v28[944]; // [rsp+578h] [rbp+470h] BYREF

  do
  {
    memset(v17, 0, sizeof(v17));
    v18 = 10;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      this + 3);
    p_Type = &this[4].DebugInfo->Type;
    v14 = p_Type;
    while ( p_Type )
    {
      v4 = (const struct ResourceHandleInfo *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                                                v2,
                                                (__int64)p_Type);
      ResourceHandleInfo::ResourceHandleInfo((ResourceHandleInfo *)v21, v4);
      v5 = v21[0];
      v19 = 0LL;
      v6 = v22;
      if ( v22 == 1 )
      {
        ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::AddTail(v17, v21[0]);
      }
      else
      {
        while ( (int)RmGetNotification(v5, &v19) >= 0 )
        {
          if ( (_DWORD)v19 == 1 )
          {
            ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::AddTail(v17, v5);
            v6 = 1;
            v22 = 1;
            ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::SetAt(v8, p_Type, v21);
          }
        }
        if ( !v6 && v26 )
        {
          v9 = *(_QWORD *)(v27 + 24);
          v20 = 0LL;
          while ( (int)RmGetNotification(v9, &v20) >= 0 )
          {
            if ( (_DWORD)v20 == 1 )
            {
              ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::AddTail(v17, v5);
              v22 = 1;
              ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::SetAt(v10, p_Type, v21);
              ExclusiveEndpointInfo::ExclusiveEndpointInfo((ExclusiveEndpointInfo *)v28, (char *)v23, (char *)v24, v25);
              CConstraintModelResourceManager::RevokeEndpointResourcesInGroup(
                (CConstraintModelResourceManager *)this,
                (struct ExclusiveEndpointInfo *)v28,
                0);
            }
          }
        }
      }
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetNext(v7, &v14);
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v27);
      p_Type = v14;
    }
    if ( v16 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v16 = 0;
    }
    if ( v17[2] )
    {
      v11 = 0;
      v12 = (_QWORD *)v17[0];
      while ( v12 )
      {
        v13 = v12[2];
        v12 = (_QWORD *)*v12;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&this[5].LockCount + 24LL))(
          *(_QWORD *)&this[5].LockCount,
          v13);
      }
    }
    else
    {
      v11 = 1;
    }
    ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(v17);
  }
  while ( !v11 );
}
