/*
 * XREFs of ?UnpinView@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805404D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::UnpinView(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v9[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(GUID *)v9 = GUID_NULL;
  if ( a3 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, int *))(*(_QWORD *)a3 + 32LL))(a3, v9);
    if ( v5 < 0 )
    {
      v6 = 299LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v7 = *(_QWORD *)v9 - 0x4658059A45DB96FFLL;
    if ( *(_QWORD *)v9 == 0x4658059A45DB96FFLL )
      v7 = *(_QWORD *)&v9[2] - 0x1012647F7CCD4687LL;
    if ( !v7 )
    {
      v5 = -2147024809;
      v6 = 303LL;
      goto LABEL_12;
    }
  }
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 208LL))(a2, v9);
  if ( v5 < 0 )
  {
    v6 = 307LL;
    goto LABEL_12;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 80LL))(
         *((_QWORD *)this + 2),
         a2);
  if ( v5 < 0 )
  {
    v6 = 308LL;
    goto LABEL_12;
  }
  return (unsigned int)v5;
}
