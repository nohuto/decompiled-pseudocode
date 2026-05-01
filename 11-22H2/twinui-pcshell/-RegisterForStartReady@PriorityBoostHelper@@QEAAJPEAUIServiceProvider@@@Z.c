/*
 * XREFs of ?RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E5F9C
 * Callers:
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801068D4 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PriorityBoostHelper::RegisterForStartReady(PriorityBoostHelper *this, struct IServiceProvider *a2)
{
  const char *v4; // r9
  _QWORD *v5; // r14
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v7; // ebx
  UINT v8; // eax
  const char *v9; // r9
  UINT v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( GetCurrentThreadId() != *((_DWORD *)this + 26) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v4);
  v5 = (_QWORD *)((char *)this + 56);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 7);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
         (char *)this + 56);
  if ( v7 < 0 )
  {
    v12 = 25LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      (const char *)(unsigned int)v7,
      v14);
    return (unsigned int)v7;
  }
  v8 = RegisterWindowMessageW(L"HostExperienceManager.StartReadyMessage");
  *((_DWORD *)this + 29) = v8;
  if ( !v8 )
  {
    v13 = 31LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v13,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
             v9);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v5 + 24LL))(
         *v5,
         v8,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
         (char *)this + 96);
  if ( v7 < 0 )
  {
    v12 = 32LL;
    goto LABEL_11;
  }
  v10 = RegisterWindowMessageW(L"HostExperienceManager.ResetActivationTimeoutPolicyMessage");
  *((_DWORD *)this + 28) = v10;
  if ( v10 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v5 + 24LL))(
           *v5,
           v10,
           ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
           (char *)this + 100);
    if ( v7 >= 0 )
      return 0LL;
    v12 = 38LL;
    goto LABEL_11;
  }
  v13 = 37LL;
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)v13,
           (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
           v9);
}
