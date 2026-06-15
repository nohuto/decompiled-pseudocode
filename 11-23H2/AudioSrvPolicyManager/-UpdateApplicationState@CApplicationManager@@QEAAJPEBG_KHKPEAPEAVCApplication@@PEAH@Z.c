/*
 * XREFs of ?UpdateApplicationState@CApplicationManager@@QEAAJPEBG_KHKPEAPEAVCApplication@@PEAH@Z @ 0x18002F6F8
 * Callers:
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x18003ADC4 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000C490 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18002A95C (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::UpdateApplicationState(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        struct CApplication **a6,
        int *a7)
{
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  int v12; // ebx
  int Application; // esi
  struct CApplication *v14; // rdi
  int v16; // [rsp+40h] [rbp-38h] BYREF
  CApplication *v17; // [rsp+48h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+50h] [rbp-28h] BYREF
  int v19; // [rsp+80h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v18 = v11;
  v12 = 0;
  v19 = 0;
  v16 = 0;
  Application = CApplicationManager::GetApplication(this, a2, a3, a5, &v17, 1, &v19);
  if ( Application >= 0 )
  {
    v14 = v17;
    CApplication::UpdateAppState(v17, a4, &v16);
    if ( v19 || v16 )
      v12 = 1;
    *a7 = v12;
    *a6 = v14;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  return (unsigned int)Application;
}
