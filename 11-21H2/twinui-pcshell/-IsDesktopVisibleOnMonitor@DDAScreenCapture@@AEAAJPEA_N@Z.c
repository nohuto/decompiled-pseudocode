/*
 * XREFs of ?IsDesktopVisibleOnMonitor@DDAScreenCapture@@AEAAJPEA_N@Z @ 0x1803BA174
 * Callers:
 *     ?IsScreenDRMProtected@DDAScreenCapture@@AEAAJPEA_N@Z @ 0x1803BA394 (-IsScreenDRMProtected@DDAScreenCapture@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DDAScreenCapture::IsDesktopVisibleOnMonitor(DDAScreenCapture *this, bool *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  LPVOID v6; // rbx
  __int64 (__fastcall *v7)(LPVOID, SID *, GUID *, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v12; // eax
  LPVOID v13; // rbx
  __int64 (__fastcall *v14)(LPVOID, GUID *, GUID *, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v22; // [rsp+80h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp+38h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  v4 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v19 = 0LL;
    v6 = ppv;
    v7 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
    v8 = v7(v6, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v19);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10D,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v8);
LABEL_15:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
      goto LABEL_16;
    }
    v20[0] = 0LL;
    v9 = v19;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 48LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(v20);
    v12 = v10(v9, *((_QWORD *)this + 16), AddressOf);
    v5 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x110,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v12);
LABEL_14:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v20);
      goto LABEL_15;
    }
    v18 = 0LL;
    v13 = ppv;
    v14 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    v15 = v14(v13, &IID_IImmersiveSystemMode, &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84, &v18);
    v5 = v15;
    if ( v15 >= 0 )
    {
      v22 = 0;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v18 + 24LL))(v18, v20[0], &v22);
      v5 = v15;
      if ( v15 >= 0 )
      {
        *a2 = v22 != 0;
        v5 = 0;
        goto LABEL_13;
      }
      v16 = 277LL;
    }
    else
    {
      v16 = 275LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v15);
LABEL_13:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x108,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
    (const char *)(unsigned int)v4);
LABEL_16:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  return v5;
}
