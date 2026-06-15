/*
 * XREFs of ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z @ 0x18002DC18
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_::_Do_call @ 0x1800310A0 (std--_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_--_Do_call.c)
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180006C20 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyStreamClassPolicyGains@CProcess@@UEAAXHPEAH@Z @ 0x180025C50 (-ApplyStreamClassPolicyGains@CProcess@@UEAAXHPEAH@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18002CAD4 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     WPP_SF_Sddd @ 0x180030048 (WPP_SF_Sddd.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180039784 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnScreenReaderStateChanged(
        CApplicationManager *this,
        struct CProcess *a2,
        int a3,
        int a4)
{
  CApplicationManager *v7; // rbp
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  const wchar_t *v9; // r9
  int v10; // eax
  float v11; // xmm0_4
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CApplicationManager *v16; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+78h] [rbp+10h] BYREF
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v16 = this;
  v7 = g_ApplicationManager;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v17 = v8;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = L"Enabled";
    if ( !a3 )
      v9 = L"Disabled";
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (_DWORD)WPP_GLOBAL_Control,
      (unsigned int)L"Disabled",
      (_DWORD)v9,
      *((_DWORD *)a2 + 41),
      *((_DWORD *)a2 + 40),
      a4);
  }
  v10 = 0;
  if ( a4 <= 0 )
    v10 = a4;
  if ( v10 <= -24 )
    v10 = -24;
  v11 = ConvertDbToEngineVolume((float)v10);
  v18 = 0;
  v12 = TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 41), *((_DWORD *)a2 + 40), a3, v11, &v18);
  v13 = v12;
  if ( v12 >= 0 )
  {
    LODWORD(v16) = 0;
    CProcess::ApplyStreamClassPolicyGains(a2, a3 == 0, (int *)&v16);
    if ( v18 || (_DWORD)v16 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v7, *((_DWORD *)a2 + 41), 3u);
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xADB,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v12);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  return v13;
}
