/*
 * XREFs of ?GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804DD818
 * Callers:
 *     ?v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ @ 0x1804DE0B0 (-v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowWrapper::GetBatch(
        WindowWrapper *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  if ( !*a2 )
  {
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 144LL))(
                     *((_QWORD *)this + 36),
                     &v10);
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v4 + 40LL))(*v4, &v9);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch **))(*(_QWORD *)*v5 + 256LL))(
           *v5,
           *((unsigned int *)this + 90),
           0LL,
           a2);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x19C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v6,
        v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  }
}
