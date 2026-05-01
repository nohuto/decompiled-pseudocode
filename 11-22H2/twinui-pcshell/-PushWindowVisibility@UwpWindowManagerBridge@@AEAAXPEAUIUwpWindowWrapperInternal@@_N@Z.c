/*
 * XREFs of ?PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z @ 0x1800D4BF8
 * Callers:
 *     _lambda_39a728035cbc11bf105c92e6056dabb4_::operator() @ 0x1800D45C8 (_lambda_39a728035cbc11bf105c92e6056dabb4_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsBamoEnabled@@YA_NXZ @ 0x1800D2E84 (-IsBamoEnabled@@YA_NXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall UwpWindowManagerBridge::PushWindowVisibility(
        UwpWindowManagerBridge *this,
        struct IUwpWindowWrapperInternal *a2,
        unsigned __int8 a3)
{
  unsigned int v3; // edi
  unsigned int v6; // r15d
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v12; // eax
  __int64 (__fastcall *v13)(struct IUwpWindowWrapperInternal *, __int64 *); // rbx
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v18; // [rsp+78h] [rbp+38h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v3 = a3;
  v18 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2);
  if ( v18 )
    goto LABEL_2;
  v19 = 0LL;
  v13 = *(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, __int64 *))(*(_QWORD *)a2 + 248LL);
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v19);
  v14 = v13(a2, &v19);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v14,
      v16);
  if ( v19 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 80LL))(v19, &v18);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x172,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v15,
        v16);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  if ( v18 )
  {
LABEL_2:
    v19 = 0LL;
    v6 = v3;
    v7 = *((_QWORD *)this + 21);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v7 + 136LL);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v19);
    v9 = v8(v7, v18, v6, &v19);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17A,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v9,
        v16);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( !IsBamoEnabled()
      || (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 224LL))(a2) == 1 )
    {
      wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v19);
      v10 = *((_QWORD *)this + 6);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v10 + 224LL);
      wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v19);
      v12 = v11(v10, v18, v6, &v19);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x182,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v12,
          v16);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
}
