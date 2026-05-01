/*
 * XREFs of ?UpdateHostedViewPosition@FrameWrapper@@UEAAJXZ @ 0x18030B4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800467B0 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FrameWrapper::UpdateHostedViewPosition(FrameWrapper *this)
{
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[16]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 40);
  if ( *v2 )
  {
    v7 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
           v2,
           &v7);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(FrameWrapper *, _BYTE *))(*(_QWORD *)this + 56LL))(this, v8);
      v3 = v4;
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 32LL))(v7, v8);
        v3 = v4;
        if ( v4 >= 0 )
        {
          v3 = 0;
          goto LABEL_11;
        }
        v5 = 244LL;
      }
      else
      {
        v5 = 243LL;
      }
    }
    else
    {
      v5 = 241LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v4);
LABEL_11:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
    return v3;
  }
  v3 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEE,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
    (const char *)0x8007139FLL);
  return v3;
}
