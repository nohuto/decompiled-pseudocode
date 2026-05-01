/*
 * XREFs of ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180515708
 * Callers:
 *     _lambda_ca8ece6d0ba6e230db3589fff51d060c_::operator() @ 0x18020866C (_lambda_ca8ece6d0ba6e230db3589fff51d060c_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18020A408 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::RegisterForApplicationStateChanges(
        struct _RTL_CRITICAL_SECTION *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  LPVOID v4; // rbx
  __int64 (__fastcall *v5)(LPVOID, SID *, GUID *, __int64 *); // rdi
  int v6; // eax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION v12; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(&CLSID_ShellServiceHost, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v10 = 0LL;
    v4 = ppv;
    v5 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    v6 = v5(v4, &SID_ProcessLifetimeManagerControl, &GUID_48f4e2d1_eeba_461e_8f8f_6353da1a3aca, &v10);
    v3 = v6;
    if ( v6 >= 0 )
    {
      TouchKeyboardExperienceManager::GetCurrentInputAppId(this, &v12);
      DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&v12;
      if ( v12.LockSemaphore >= (HANDLE)8 )
        DebugInfo = v12.DebugInfo;
      v8 = (*(__int64 (__fastcall **)(__int64, PRTL_CRITICAL_SECTION_DEBUG, __int64, unsigned __int64, LONG *))(*(_QWORD *)v10 + 24LL))(
             v10,
             DebugInfo,
             15LL,
             (unsigned __int64)&this[3].SpinCount & -(__int64)(this != 0LL),
             &this[7].LockCount);
      v3 = v8;
      if ( v8 >= 0 )
        v3 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1053,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
      std::wstring::_Tidy_deallocate((__int64)&v12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x104D,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  return v3;
}
