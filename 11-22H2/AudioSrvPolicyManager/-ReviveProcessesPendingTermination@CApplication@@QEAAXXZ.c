/*
 * XREFs of ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x1800293CC
 * Callers:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@@Z @ 0x18002D6DC (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerr.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180009030 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18000B1D0 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x1800287A8 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::ReviveProcessesPendingTermination(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  __int64 *Next; // rax
  __int64 v5; // rdx
  int v6; // [rsp+50h] [rbp+20h] BYREF
  int v7; // [rsp+58h] [rbp+28h] BYREF
  _QWORD *v8; // [rsp+60h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+68h] [rbp+38h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v9 = v2;
  v7 = 0;
  v6 = 1;
  CApplicationManager::GetApplicationPBMStatus(
    g_ApplicationManager,
    this,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v8,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v7,
    (enum _PLM_EXEMPTION *)&v6);
  v8 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v8 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v3, &v8);
    v3 = *Next;
    if ( *(_DWORD *)(*Next + 416) == 1 )
    {
      *(_DWORD *)(v3 + 416) = 0;
      CProcess::RefreshPBMState(v3, v5, v7, v6);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
}
