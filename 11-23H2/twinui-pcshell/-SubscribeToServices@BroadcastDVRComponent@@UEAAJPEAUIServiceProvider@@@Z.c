/*
 * XREFs of ?SubscribeToServices@BroadcastDVRComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E96E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAllowedSku@@YA_NXZ @ 0x1801AB410 (-IsAllowedSku@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall BroadcastDVRComponent::SubscribeToServices(BroadcastDVRComponent *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v10; // eax
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-30h]
  int v14; // [rsp+20h] [rbp-30h]
  __int64 v15[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  if ( !IsAllowedSku() )
    return 0LL;
  v15[0] = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
         a2,
         &IID_IImmersiveApplicationNotificationService,
         &GUID_7860c098_fb29_49aa_a512_adacc0ffee84,
         v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = 784LL;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v15[0] + 24LL))(
           v15[0],
           ((unsigned __int64)this + 64) & -(__int64)(this != (BroadcastDVRComponent *)56),
           (char *)this + 168);
    v6 = v5;
    if ( v5 < 0 )
    {
      v12 = 785LL;
    }
    else
    {
      v7 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 24);
      v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
             a2,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             (char *)this + 192);
      v6 = v5;
      if ( v5 < 0 )
      {
        v12 = 788LL;
      }
      else
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 24) + 96LL))(
               *((_QWORD *)this + 24),
               ((unsigned __int64)this + 72) & -(__int64)(this != (BroadcastDVRComponent *)56),
               (char *)this + 172);
        v6 = v5;
        if ( v5 < 0 )
        {
          v12 = 789LL;
        }
        else
        {
          v8 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
          v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
                 a2,
                 &IID_IImmersiveSessionIdleDetector,
                 &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                 &v18);
          v6 = v5;
          if ( v5 < 0 )
          {
            v12 = 792LL;
          }
          else
          {
            v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v18 + 32LL))(
                   v18,
                   ((unsigned __int64)this + 80) & -(__int64)(this != (BroadcastDVRComponent *)56),
                   (char *)this + 176);
            v6 = v5;
            if ( v5 < 0 )
            {
              v12 = 793LL;
            }
            else
            {
              v9 = a2->lpVtbl->QueryService;
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
              v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v9)(
                     a2,
                     &SID_ImmersiveShellHookService,
                     &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                     &v17);
              v6 = v5;
              if ( v5 < 0 )
              {
                v12 = 796LL;
              }
              else
              {
                v13 = (_DWORD)this + 180;
                v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v17 + 24LL))(
                       v17,
                       &unk_1808137A0,
                       1LL,
                       ((unsigned __int64)this + 96) & -(__int64)(this != (BroadcastDVRComponent *)56));
                v6 = v5;
                if ( v5 >= 0 )
                {
                  v10 = RtlSubscribeWnfStateChangeNotification(
                          (char *)this + 416,
                          WNF_SHEL_LOGON_COMPLETE,
                          0LL,
                          BroadcastDVRComponent::StaticShellReadyWNFCallback,
                          (char *)this - 56,
                          0LL,
                          0,
                          0);
                  if ( v10 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x32A,
                      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                      (const char *)(unsigned int)v10,
                      v14);
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
                  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
                  return 0LL;
                }
                v12 = 797LL;
              }
            }
          }
        }
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)(unsigned int)v5,
    v13);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
  return v6;
}
