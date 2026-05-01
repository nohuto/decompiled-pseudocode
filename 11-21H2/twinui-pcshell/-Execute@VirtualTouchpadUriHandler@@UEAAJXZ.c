/*
 * XREFs of ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180448F70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     swscanf_s @ 0x180189148 (swscanf_s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?close_reset@?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@SAXPEAG@Z @ 0x18022A5AE (-close_reset@-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constant@_K$0A@.c)
 *     ?GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1804491B4 (-GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager.c)
 *     ?GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z @ 0x1804493A4 (-GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z.c)
 *     ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x1804495F0 (-GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z @ 0x1804498F4 (-_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualTouchpadUriHandler::Execute(VirtualTouchpadUriHandler *this)
{
  unsigned int v2; // edx
  const struct _GUID *v3; // r8
  int SelectedItem; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 *v9; // rbx
  const unsigned __int16 *v10; // rcx
  int ExperienceManager; // eax
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v15[2]; // [rsp+20h] [rbp-20h] BYREF
  HMONITOR v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  wchar_t *Buffer; // [rsp+68h] [rbp+28h] BYREF
  struct tagPOINT v19; // [rsp+70h] [rbp+30h] BYREF
  void *v20; // [rsp+78h] [rbp+38h] BYREF

  v20 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v20);
  SelectedItem = CWRLExecuteCommandBase::_GetSelectedItem(this, v2, v3, &v20);
  v5 = SelectedItem;
  if ( SelectedItem >= 0 )
  {
    Buffer = 0LL;
    v6 = (*(__int64 (__fastcall **)(void *, __int64, wchar_t **))(*(_QWORD *)v20 + 40LL))(v20, 2147909632LL, &Buffer);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = (unsigned int)v6;
      v8 = 30LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)v7);
LABEL_20:
      wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&Buffer);
      goto LABEL_21;
    }
    if ( (unsigned int)_o__wcsnicmp(Buffer, L"ms-virtualtouchpad", 18LL) )
    {
      v5 = -2147024809;
      v7 = 2147942487LL;
      v8 = 31LL;
      goto LABEL_7;
    }
    v15[0] = 0LL;
    v9 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)v15, v16);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
    ExperienceManager = VirtualTouchpadUriHandler::GetExperienceManager(
                          v10,
                          (struct Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager **)v9);
    v5 = ExperienceManager;
    if ( ExperienceManager < 0 )
    {
      v12 = 34LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)ExperienceManager);
LABEL_19:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
      goto LABEL_20;
    }
    v13 = 0;
    if ( swscanf_s(Buffer, L"ms-virtualtouchpad:?x=%d&y=%d", &v19, &v19.y) != 2 )
    {
      v13 = 1;
      v16[0] = 0LL;
      if ( VirtualTouchpadUriHandler::GetPrimaryTouchEnabledMonitorIfAny(v16) < 0 || !v16[0] )
        goto LABEL_18;
      ExperienceManager = VirtualTouchpadUriHandler::GetLaunchLocationForMonitor(v16[0], &v19);
      v5 = ExperienceManager;
      if ( ExperienceManager < 0 )
      {
        v12 = 46LL;
        goto LABEL_17;
      }
    }
    *(float *)v16 = (float)v19.x;
    *((float *)v16 + 1) = (float)v19.y;
    *(float *)&v16[1] = (float)v19.x;
    *((float *)&v16[1] + 1) = (float)v19.y;
    ExperienceManager = (*(__int64 (__fastcall **)(__int64, _QWORD, HMONITOR *))(*(_QWORD *)v15[0] + 48LL))(
                          v15[0],
                          v13,
                          v16);
    v5 = ExperienceManager;
    if ( ExperienceManager < 0 )
    {
      v12 = 49LL;
      goto LABEL_17;
    }
LABEL_18:
    v5 = 0;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B,
    (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)SelectedItem);
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v20);
  return v5;
}
