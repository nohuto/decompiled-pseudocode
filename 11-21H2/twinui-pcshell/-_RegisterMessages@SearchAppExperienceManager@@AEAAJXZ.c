/*
 * XREFs of ?_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ @ 0x18038C318
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x18038A6E4 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180161038 (-InternalRelease@-$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@W.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVSearchAppExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVSearchAppExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x1803892AC (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_1803892AC.c)
 *     ?_ImmersiveShellQueryService@SearchAppExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18038B658 (-_ImmersiveShellQueryService@SearchAppExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppExperienceManager::_RegisterMessages(SearchAppExperienceManager *this)
{
  const struct _GUID *v2; // rdx
  const struct _GUID *v3; // r8
  int v4; // eax
  unsigned int LastError; // ebx
  int v6; // eax
  __int64 v7; // rdx
  UINT v8; // eax
  const char *v9; // r9
  __int64 v10; // rdx
  UINT v11; // eax
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+68h] [rbp+28h] BYREF
  void *v16; // [rsp+70h] [rbp+30h] BYREF
  SearchAppExperienceManager *v17; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
  v4 = SearchAppExperienceManager::_ImmersiveShellQueryService(this, v2, v3, &v16);
  LastError = v4;
  if ( v4 >= 0 )
  {
    v15 = 0LL;
    *(_QWORD *)&v13 = SearchAppExperienceManager::_OnMessageHandler;
    DWORD2(v13) = 0;
    v17 = this;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::InternalRelease(&v15);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,SearchAppExperienceManager *,long (SearchAppExperienceManager::*)(unsigned int,unsigned __int64,__int64)>(
           &v15,
           (__int64 *)&v17,
           &v13);
    LastError = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v16 + 24LL))(
             v16,
             0LL,
             (v15 + 8) & -(__int64)(v15 != 0),
             (char *)this + 440);
      LastError = v6;
      if ( v6 >= 0 )
      {
        v8 = RegisterWindowMessageW(L"SearchAppExperienceManager.ResetActivationTimeoutPolicyMessage");
        *((_DWORD *)this + 114) = v8;
        if ( v8 )
        {
          v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v16 + 24LL))(
                 v16,
                 v8,
                 (v15 + 8) & -(__int64)(v15 != 0),
                 (char *)this + 460);
          LastError = v6;
          if ( v6 < 0 )
          {
            v7 = 1127LL;
            goto LABEL_16;
          }
          v11 = RegisterWindowMessageW(L"SearchAppExperienceManager.DeferredSuspensionMessage");
          *((_DWORD *)this + 118) = v11;
          if ( v11 )
          {
            v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v16 + 24LL))(
                   v16,
                   v11,
                   (v15 + 8) & -(__int64)(v15 != 0),
                   (char *)this + 476);
            LastError = v6;
            if ( v6 >= 0 )
            {
              LastError = 0;
              goto LABEL_18;
            }
            v7 = 1132LL;
            goto LABEL_16;
          }
          v10 = 1131LL;
        }
        else
        {
          v10 = 1126LL;
        }
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)v10,
                      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
                      v9);
LABEL_18:
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::InternalRelease(&v15);
        goto LABEL_19;
      }
      v7 = 1122LL;
    }
    else
    {
      v7 = 1116LL;
    }
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x459,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_19:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
  return LastError;
}
