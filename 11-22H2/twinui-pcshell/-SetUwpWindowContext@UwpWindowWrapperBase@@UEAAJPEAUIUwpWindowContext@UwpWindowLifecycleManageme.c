/*
 * XREFs of ?SetUwpWindowContext@UwpWindowWrapperBase@@UEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1804F1D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::SetUwpWindowContext(
        UwpWindowWrapperBase *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *, GUID *, char *))
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *, GUID *, char *); // r14
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 224LL))(v4);
    v5 = **a2;
    v6 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = v5(
           (struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *)a2,
           &GUID_fc760dc3_9c96_583d_ac66_3103a9e1c1c0,
           (char *)this + 96);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6F0,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        v11);
    v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 12) + 48LL))(
           *((_QWORD *)this + 12),
           (char *)this + 336);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6F1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v8,
        v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6F4,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v9);
  }
  return result;
}
