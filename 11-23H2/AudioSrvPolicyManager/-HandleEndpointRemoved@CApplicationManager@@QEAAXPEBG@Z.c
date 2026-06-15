/*
 * XREFs of ?HandleEndpointRemoved@CApplicationManager@@QEAAXPEBG@Z @ 0x18002CC84
 * Callers:
 *     ?OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z @ 0x18001D2E0 (-OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180008FE0 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetNext@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAAEAPEAVCApplication@@AEAPEAU__POSITION@@@Z @ 0x18000BC10 (-GetNext@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAAEAPEA.c)
 */

void __fastcall CApplicationManager::HandleEndpointRemoved(CApplicationManager *this, const unsigned __int16 *a2)
{
  CApplicationManager *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *i; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+58h] [rbp+20h] BYREF

  i = a2;
  v9 = this;
  v2 = g_ApplicationManager;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = (_QWORD *)*((_QWORD *)v2 + 9);
  v12 = v3;
  v9 = v5;
  while ( v9 )
  {
    v6 = *ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::GetNext(v4, &v9);
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 32));
    v8 = *(_QWORD **)(v6 + 72);
    v11 = (struct _RTL_CRITICAL_SECTION *)(v6 + 32);
    for ( i = v8; i; ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v7, &i) )
      ;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
}
