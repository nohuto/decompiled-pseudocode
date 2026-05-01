/*
 * XREFs of ?GetSizeConstraints@CApplicationViewBase@@UEAAJPEAUIImmersiveMonitor@@PEAUtagSIZE@@1@Z @ 0x180160B90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::GetSizeConstraints(
        CApplicationViewBase *this,
        struct IImmersiveMonitor *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall *v11)(CApplicationViewBase *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF
  char v16; // [rsp+60h] [rbp+18h] BYREF
  struct IImmersiveMonitor *v17; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v17 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
  v7 = (__int64)v17;
  if ( !v17 )
  {
    v11 = *(__int64 (__fastcall **)(CApplicationViewBase *, __int64 *))(*(_QWORD *)this + 80LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v17);
    v8 = v11(this, AddressOf);
    v9 = v8;
    if ( v8 < 0 )
    {
      v13 = 150LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_8;
    }
    v7 = (__int64)v17;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *, char *))(*(_QWORD *)v7 + 112LL))(v7, &v15, &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 155LL;
    goto LABEL_14;
  }
  v8 = (*(__int64 (__fastcall **)(CApplicationViewBase *, _QWORD, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)this + 288LL))(
         this,
         v15,
         a3,
         a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13 = 156LL;
    goto LABEL_14;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  return v9;
}
