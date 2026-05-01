/*
 * XREFs of ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180430738
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18042D47C (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AA720 (-InternalRelease@-$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVCortanaSharedExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVCortanaSharedExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x180428D70 (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_180428D70.c)
 *     ?_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18042F9F8 (-_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaSharedExperienceManager::_RegisterMessages(CortanaSharedExperienceManager *this)
{
  int v2; // eax
  unsigned int LastError; // ebx
  int v4; // eax
  __int64 v5; // rdx
  UINT v6; // eax
  const char *v7; // r9
  __int64 v8; // rdx
  UINT v9; // eax
  __int128 v11; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF
  void *v14; // [rsp+70h] [rbp+30h] BYREF
  CortanaSharedExperienceManager *v15; // [rsp+78h] [rbp+38h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  v2 = CortanaSharedExperienceManager::_ImmersiveShellQueryService(
         this,
         &IID_IImmersiveWindowMessageService,
         &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
         &v14);
  LastError = v2;
  if ( v2 >= 0 )
  {
    v13 = 0LL;
    *(_QWORD *)&v11 = CortanaSharedExperienceManager::_OnMessageHandler;
    DWORD2(v11) = 0;
    v15 = this;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::InternalRelease(&v13);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,CortanaSharedExperienceManager *,long (CortanaSharedExperienceManager::*)(unsigned int,unsigned __int64,__int64)>(
           &v13,
           (__int64 *)&v15,
           &v11);
    LastError = v4;
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v14 + 24LL))(
             v14,
             0LL,
             (v13 + 8) & -(__int64)(v13 != 0),
             (char *)this + 432);
      LastError = v4;
      if ( v4 >= 0 )
      {
        v6 = RegisterWindowMessageW(L"CortanaExperienceManager.ResetActivationTimeoutPolicyMessage");
        *((_DWORD *)this + 112) = v6;
        if ( v6 )
        {
          v4 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v14 + 24LL))(
                 v14,
                 v6,
                 (v13 + 8) & -(__int64)(v13 != 0),
                 (char *)this + 452);
          LastError = v4;
          if ( v4 < 0 )
          {
            v5 = 1265LL;
            goto LABEL_16;
          }
          v9 = RegisterWindowMessageW(L"CortanaExperienceManager.DeferredSuspensionMessage");
          *((_DWORD *)this + 116) = v9;
          if ( v9 )
          {
            v4 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v14 + 24LL))(
                   v14,
                   v9,
                   (v13 + 8) & -(__int64)(v13 != 0),
                   (char *)this + 468);
            LastError = v4;
            if ( v4 >= 0 )
            {
              LastError = 0;
              goto LABEL_18;
            }
            v5 = 1270LL;
            goto LABEL_16;
          }
          v8 = 1269LL;
        }
        else
        {
          v8 = 1264LL;
        }
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)v8,
                      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
                      v7);
LABEL_18:
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::InternalRelease(&v13);
        goto LABEL_19;
      }
      v5 = 1260LL;
    }
    else
    {
      v5 = 1254LL;
    }
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E3,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_19:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  return LastError;
}
