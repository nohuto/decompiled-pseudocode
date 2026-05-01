/*
 * XREFs of ?SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@PEAPEAU2@@Z @ 0x180058800
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??4?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWindowingEnvironmentConfig@@@Z @ 0x1800588CC (--4-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@QEAAAEAV012@PEAUIWindowingEnvironmentC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::SetWindowingEnvironmentConfigInternal(
        CImmersiveApp *this,
        struct IWindowingEnvironmentConfig *a2,
        struct IWindowingEnvironmentConfig **a3)
{
  _QWORD *v4; // rsi
  __int64 (__fastcall *v5)(CImmersiveApp *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 )
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3D,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)0x80070057LL,
      v11[0]);
    return v8;
  }
  v4 = (_QWORD *)((char *)this + 672);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::operator=((char *)this + 672, a2);
  v11[0] = 0LL;
  v5 = *(__int64 (__fastcall **)(CImmersiveApp *, __int64 *))(*(_QWORD *)this + 464LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(v11);
  v7 = v5(this, AddressOf);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 2629LL;
    goto LABEL_12;
  }
  if ( v11[0] )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v4 + 80LL))(*v4, v11[0], &v13);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *((_DWORD *)this + 170) = v13;
      goto LABEL_6;
    }
    v10 = 2634LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v7,
      v11[0]);
    goto LABEL_7;
  }
LABEL_6:
  v8 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
  return v8;
}
