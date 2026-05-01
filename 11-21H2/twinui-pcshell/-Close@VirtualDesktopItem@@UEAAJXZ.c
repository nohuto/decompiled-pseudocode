/*
 * XREFs of ?Close@VirtualDesktopItem@@UEAAJXZ @ 0x1804B7140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopItem::Close(VirtualDesktopItem *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64, __int64 *); // rbx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, __int64 *); // rbx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = *((_QWORD *)this + 2);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v2 + 64LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  v4 = v3(v2, *((_QWORD *)this + 3), 6LL, &v12);
  if ( v4 == -2147316575 )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v5 + 64LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    v4 = v6(v5, *((_QWORD *)this + 3), 5LL, &v12);
  }
  if ( v4 < 0 )
  {
    v7 = (unsigned int)v4;
    v8 = 53LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitem.cpp",
      (const char *)v7);
    goto LABEL_8;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 96LL))(
         *((_QWORD *)this + 2),
         *((_QWORD *)this + 3),
         v12);
  v4 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 54LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return (unsigned int)v4;
}
