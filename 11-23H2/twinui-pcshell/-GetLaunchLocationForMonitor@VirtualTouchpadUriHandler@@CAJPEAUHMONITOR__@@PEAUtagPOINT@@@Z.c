/*
 * XREFs of ?GetLaunchLocationForMonitor@VirtualTouchpadUriHandler@@CAJPEAUHMONITOR__@@PEAUtagPOINT@@@Z @ 0x1804FF1F4
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x1804FEDB0 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::GetLaunchLocationForMonitor(HMONITOR a1, struct tagPOINT *a2)
{
  __int64 *ppv; // rbx
  HRESULT Instance; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, SID *, GUID *, __int64 *); // rsi
  __int64 *v9; // rdi
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, HMONITOR, SID *, GUID *, __int64 *); // rsi
  __int64 *v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  LONG v16; // eax
  LONG v17; // eax
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v24[2]; // [rsp+58h] [rbp-18h] BYREF
  LONG v25; // [rsp+60h] [rbp-10h]
  LONG v26; // [rsp+64h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  *a2 = 0LL;
  v22 = 0LL;
  ppv = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v22, &v23);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(ppv);
  Instance = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, (LPVOID *)ppv);
  v6 = Instance;
  if ( Instance >= 0 )
  {
    v7 = v22;
    v21 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v22 + 24LL);
    v9 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v21, &v23);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v9);
    v10 = v8(v7, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, v9);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v10);
LABEL_22:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
      goto LABEL_23;
    }
    v11 = v21;
    v19 = 0LL;
    v12 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, __int64 *))(*(_QWORD *)v21 + 72LL);
    v13 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v19, &v23);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
    v14 = v12(v11, a1, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v13);
    v6 = v14;
    if ( v14 < 0 )
    {
      v15 = 115LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v14);
LABEL_21:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      goto LABEL_22;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 80LL))(v19, &v20);
    v6 = v14;
    if ( v14 < 0 )
    {
      v15 = 117LL;
      goto LABEL_11;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v19 + 168LL))(v19, v24);
    v6 = v14;
    if ( v14 < 0 )
    {
      v15 = 119LL;
      goto LABEL_11;
    }
    if ( v20 < 2 )
    {
      v17 = v25;
    }
    else
    {
      if ( v20 != 2 )
      {
        if ( v20 != 3 )
        {
LABEL_20:
          v6 = 0;
          goto LABEL_21;
        }
        a2->x = v25;
        v16 = v24[1];
LABEL_19:
        a2->y = v16;
        goto LABEL_20;
      }
      v17 = v24[0];
    }
    a2->x = v17;
    v16 = v26;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D,
    (int)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)Instance);
LABEL_23:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  return v6;
}
