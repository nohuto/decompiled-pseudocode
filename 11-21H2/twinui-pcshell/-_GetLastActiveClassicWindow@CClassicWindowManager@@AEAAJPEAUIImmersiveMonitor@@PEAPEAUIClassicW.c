/*
 * XREFs of ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180058CD8
 * Callers:
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180058C38 (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 *     ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x1802F02B0 (-GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180058F54 (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindow(
        CClassicWindowManager *this,
        struct IUnknown *a2,
        struct IClassicWindow **a3)
{
  struct IUnknown *v3; // rdi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  bool v9; // r13
  HWND v10; // rax
  __int64 v11; // r13
  int (__fastcall *v12)(__int64, _QWORD, _QWORD, struct IUnknown **); // rdi
  unsigned int v13; // eax
  HWND v15; // rax
  HWND v16; // rdx
  int (__fastcall *v17)(__int64, __int64); // rdi
  __int64 AddressOf; // rax
  int v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 v20[2]; // [rsp+38h] [rbp-10h] BYREF
  struct IUnknown *v21; // [rsp+90h] [rbp+48h] BYREF
  struct IUnknown *v22; // [rsp+98h] [rbp+50h]
  struct IClassicWindow **v23; // [rsp+A0h] [rbp+58h]
  unsigned int v24; // [rsp+A8h] [rbp+60h]

  v23 = a3;
  v22 = a2;
  v3 = a2;
  *a3 = 0LL;
  v24 = -2147024809;
  v5 = *((_QWORD *)this + 25);
  v6 = v5;
  v7 = 0LL;
  if ( !v5 )
    return v24;
  while ( 1 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 24) + 8 * v7);
    v20[0] = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = 1;
    if ( !v3 )
      goto LABEL_10;
    v21 = 0LL;
    v17 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 80LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v21);
    if ( v17(v8, AddressOf) >= 0
      && !(unsigned int)SHIsSameObject(v22, v21)
      && (*(int (__fastcall **)(_QWORD, struct IUnknown *, int *))(**((_QWORD **)this + 33) + 80LL))(
           *((_QWORD *)this + 33),
           v21,
           &v19) >= 0 )
    {
      v9 = v19 == 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
    if ( v9 )
    {
LABEL_10:
      v10 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
      if ( !IsIconic(v10) )
      {
        v11 = *((_QWORD *)this + 35);
        if ( !v11 )
          break;
        LODWORD(v21) = 0;
        v12 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, struct IUnknown **))(*(_QWORD *)v11 + 48LL);
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
        if ( v12(v11, v13, 0LL, &v21) < 0 || (_DWORD)v21 != 1 )
          break;
      }
    }
LABEL_6:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v20);
    if ( ++v7 >= v5 )
      goto LABEL_13;
    v3 = v22;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 152LL))(v8) )
  {
    v15 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
    if ( !CApplicationManagerUtility::IsValidAndVisibleWindow(v15, v16) )
    {
      v6 = v7;
      goto LABEL_6;
    }
  }
  v20[0] = 0LL;
  *v23 = (struct IClassicWindow *)v8;
  v24 = 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v20);
LABEL_13:
  if ( v6 != v5 )
    (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 23) + 16LL))((char *)this + 184, v6);
  return v24;
}
