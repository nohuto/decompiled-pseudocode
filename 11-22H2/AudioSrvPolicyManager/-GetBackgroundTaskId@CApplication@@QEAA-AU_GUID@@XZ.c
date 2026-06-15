/*
 * XREFs of ?GetBackgroundTaskId@CApplication@@QEAA?AU_GUID@@XZ @ 0x180026E4C
 * Callers:
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18002F42C (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180009030 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 */

struct _GUID *__fastcall CApplication::GetBackgroundTaskId(CApplication *this, struct _GUID *__return_ptr retstr)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *Next; // rax
  struct _GUID v8; // xmm0
  _QWORD *v10; // [rsp+20h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+28h] [rbp-30h] BYREF
  struct _GUID v12; // [rsp+30h] [rbp-28h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *retstr = GUID_00000000_0000_0000_0000_000000000000;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v6 = (_QWORD *)*((_QWORD *)this + 9);
  v10 = v6;
  v11 = v2;
  while ( v6 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v5, &v10);
    if ( !*(_DWORD *)(*Next + 416LL) )
    {
      v8 = *(struct _GUID *)(*Next + 520LL);
      v12 = v8;
      v5 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)&v8.Data1;
      if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)&v8.Data1 )
        v5 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)v12.Data4;
      if ( v5 )
      {
        *retstr = v8;
        break;
      }
    }
    v6 = v10;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  return retstr;
}
