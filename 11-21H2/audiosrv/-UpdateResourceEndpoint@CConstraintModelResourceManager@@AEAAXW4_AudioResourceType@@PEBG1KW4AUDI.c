/*
 * XREFs of ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x18010E0C4
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x18010BDC0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_18010BDC0.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004CB1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??0ResourceHandleInfo@@QEAA@AEBU0@@Z @ 0x1801099C4 (--0ResourceHandleInfo@@QEAA@AEBU0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x18010B2C8 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@AEAPEAU__POSITION@@@Z @ 0x18010B660 (-GetNext@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?SetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x18010DEE0 (-SetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXP.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CConstraintModelResourceManager::UpdateResourceEndpoint(
        struct _RTL_CRITICAL_SECTION *a1,
        __int64 a2,
        char *a3,
        char *a4,
        int a5,
        int a6)
{
  __int64 v9; // rcx
  _QWORD *p_Type; // rbx
  const struct ResourceHandleInfo *v11; // rax
  __int64 v12; // rcx
  char *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *i; // [rsp+20h] [rbp-E0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-D8h] BYREF
  char v19; // [rsp+30h] [rbp-D0h]
  char v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+518h] [rbp+418h] BYREF
  _BYTE v22[8]; // [rsp+520h] [rbp+420h] BYREF
  int v23; // [rsp+528h] [rbp+428h]
  int v24; // [rsp+63Ch] [rbp+53Ch]
  unsigned __int16 v25[201]; // [rsp+648h] [rbp+548h] BYREF
  unsigned __int16 v26[261]; // [rsp+7DAh] [rbp+6DAh] BYREF
  int v27; // [rsp+9E4h] [rbp+8E4h]
  __int64 v28; // [rsp+9F8h] [rbp+8F8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    a1 + 3);
  p_Type = &a1[4].DebugInfo->Type;
  for ( i = p_Type; i; p_Type = i )
  {
    v11 = (const struct ResourceHandleInfo *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                                               v9,
                                               (__int64)p_Type);
    ResourceHandleInfo::ResourceHandleInfo((ResourceHandleInfo *)v22, v11);
    if ( v23 == 1 && v24 == a6 )
    {
      v13 = &v20;
      v14 = v22;
      v15 = 9LL;
      do
      {
        *(_OWORD *)v13 = *v14;
        *((_OWORD *)v13 + 1) = v14[1];
        *((_OWORD *)v13 + 2) = v14[2];
        *((_OWORD *)v13 + 3) = v14[3];
        *((_OWORD *)v13 + 4) = v14[4];
        *((_OWORD *)v13 + 5) = v14[5];
        *((_OWORD *)v13 + 6) = v14[6];
        v13 += 128;
        *((_OWORD *)v13 - 1) = v14[7];
        v14 += 8;
        --v15;
      }
      while ( v15 );
      *(_OWORD *)v13 = *v14;
      *((_OWORD *)v13 + 1) = v14[1];
      *((_OWORD *)v13 + 2) = v14[2];
      *((_OWORD *)v13 + 3) = v14[3];
      *((_OWORD *)v13 + 4) = v14[4];
      *((_OWORD *)v13 + 5) = v14[5];
      if ( a3 )
        StringCchCopyW((char *)v25, 201LL, a3);
      else
        v25[0] = 0;
      StringCchCopyW((char *)v26, 261LL, a4);
      v27 = a5;
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::SetAt(
        v16,
        (__int64)p_Type,
        (__int64)v22);
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v21);
    }
    ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetNext(v12, &i);
    wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v28);
  }
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
}
