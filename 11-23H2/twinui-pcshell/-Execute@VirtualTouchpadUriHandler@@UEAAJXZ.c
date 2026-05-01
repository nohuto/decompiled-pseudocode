/*
 * XREFs of ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x1804FEDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     swscanf_s @ 0x1801C7748 (swscanf_s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1804FF004 (-GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager.c)
 *     ?GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z @ 0x1804FF1F4 (-GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z.c)
 *     ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x1804FF440 (-GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z @ 0x1804FF754 (-_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualTouchpadUriHandler::Execute(VirtualTouchpadUriHandler *this)
{
  __int64 *v2; // rbx
  unsigned int v3; // edx
  const struct _GUID *v4; // r8
  int SelectedItem; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, void **); // rdi
  void **v9; // rax
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 *v13; // rbx
  const unsigned __int16 *v14; // rcx
  int ExperienceManager; // eax
  __int64 v16; // rdx
  unsigned int v17; // edi
  __int64 v19[2]; // [rsp+20h] [rbp-20h] BYREF
  HMONITOR v20[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct tagPOINT v22; // [rsp+68h] [rbp+28h] BYREF
  wchar_t *Buffer; // [rsp+70h] [rbp+30h] BYREF
  __int64 v24; // [rsp+78h] [rbp+38h] BYREF

  v19[0] = 0LL;
  v2 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)v19, v20);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2);
  SelectedItem = CWRLExecuteCommandBase::_GetSelectedItem(this, v3, v4, (void **)v2);
  v6 = SelectedItem;
  if ( SelectedItem < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
      (const char *)(unsigned int)SelectedItem);
    goto LABEL_22;
  }
  Buffer = 0LL;
  v7 = v19[0];
  v8 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v19[0] + 40LL);
  v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&Buffer);
  v10 = v8(v7, 2147909632LL, v9);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v12 = 30LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
      (const char *)v11);
    goto LABEL_20;
  }
  if ( (unsigned int)_o__wcsnicmp(Buffer, L"ms-virtualtouchpad", 18LL) )
  {
    v6 = -2147024809;
    v11 = 2147942487LL;
    v12 = 31LL;
    goto LABEL_7;
  }
  v24 = 0LL;
  v13 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v24, v20);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
  ExperienceManager = VirtualTouchpadUriHandler::GetExperienceManager(
                        v14,
                        (struct Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager **)v13);
  v6 = ExperienceManager;
  if ( ExperienceManager >= 0 )
  {
    v17 = 0;
    if ( swscanf_s(Buffer, L"ms-virtualtouchpad:?x=%d&y=%d", &v22, &v22.y) != 2 )
    {
      v17 = 1;
      v20[0] = 0LL;
      if ( VirtualTouchpadUriHandler::GetPrimaryTouchEnabledMonitorIfAny(v20) < 0 || !v20[0] )
        goto LABEL_18;
      ExperienceManager = VirtualTouchpadUriHandler::GetLaunchLocationForMonitor(v20[0], &v22);
      v6 = ExperienceManager;
      if ( ExperienceManager < 0 )
      {
        v16 = 46LL;
        goto LABEL_17;
      }
    }
    *(float *)v20 = (float)v22.x;
    *((float *)v20 + 1) = (float)v22.y;
    *(float *)&v20[1] = (float)v22.x;
    *((float *)&v20[1] + 1) = (float)v22.y;
    ExperienceManager = (*(__int64 (__fastcall **)(__int64, _QWORD, HMONITOR *))(*(_QWORD *)v24 + 48LL))(v24, v17, v20);
    v6 = ExperienceManager;
    if ( ExperienceManager < 0 )
    {
      v16 = 49LL;
      goto LABEL_17;
    }
LABEL_18:
    v6 = 0;
    goto LABEL_19;
  }
  v16 = 34LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)ExperienceManager);
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
LABEL_20:
  if ( Buffer )
    CoTaskMemFree(Buffer);
LABEL_22:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v19);
  return v6;
}
