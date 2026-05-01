/*
 * XREFs of ?IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ @ 0x180135930
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CImmersiveApp::IsApplicationInteractive(unsigned __int64 this)
{
  void (__fastcall *v2)(unsigned __int64, __int64); // rbx
  __int64 AddressOf; // rax
  char v4; // bp
  PSRWLOCK v6; // rsi
  struct IUnknown *v7; // rbx
  struct IUnknown *v8; // r13
  PVOID Ptr; // r15
  struct IUnknown **v10; // r12
  struct IUnknown **v11; // r14
  bool v12; // di
  bool v13; // zf
  struct IUnknown *v14; // [rsp+60h] [rbp+8h] BYREF
  struct IUnknown *v15; // [rsp+68h] [rbp+10h] BYREF
  struct IUnknown **v16; // [rsp+70h] [rbp+18h]

  v15 = 0LL;
  v2 = *(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)this + 464LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v15);
  v2(this, AddressOf);
  if ( (*(_BYTE *)(this + 464) & 4) == 0 )
    goto LABEL_2;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  v4 = 1;
  v7 = (struct IUnknown *)(this & -(__int64)(this != 112));
  v8 = v15;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
  if ( !v7 )
    goto LABEL_7;
  v10 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[8].Ptr;
  v11 = (struct IUnknown **)CApplicationManagerUtility::g_pIAMGlobals[7].Ptr;
  if ( v11 != v10 )
  {
    v16 = &v14;
    do
    {
      v14 = *v11;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
      v12 = (unsigned int)SHIsSameObject(v7, v14) != 0;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
      if ( v12 )
        break;
      ++v11;
    }
    while ( v11 != v10 );
  }
  if ( v11 == v6[8].Ptr )
  {
LABEL_7:
    if ( Ptr )
    {
      v13 = *((_DWORD *)v6[1].Ptr + (_QWORD)Ptr - 1) == 1;
    }
    else
    {
      if ( !LODWORD(v6[5].Ptr) || !(unsigned int)SHIsSameObject(v8, (struct IUnknown *)v6[6].Ptr) )
      {
        if ( HIDWORD(v6[5].Ptr) == 1 )
          goto LABEL_3;
        goto LABEL_2;
      }
      v13 = LODWORD(v6[5].Ptr) == 1;
    }
    if ( v13 )
      goto LABEL_3;
LABEL_2:
    v4 = 0;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return v4;
}
