/*
 * XREFs of ?_IsItemVisible@VirtualDesktopItem@@AEAAJPEAUISwitchItem@@PEA_N@Z @ 0x180571C60
 * Callers:
 *     ?IsSwitchItemVisibleOnDesktop@VirtualDesktopItem@@UEAA_NPEAUISwitchItem@@@Z @ 0x180571AA0 (-IsSwitchItemVisibleOnDesktop@VirtualDesktopItem@@UEAA_NPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopItem::_IsItemVisible(
        VirtualDesktopItem *this,
        __int64 (__fastcall ***a2)(struct ISwitchItem *, GUID *, __int64 *),
        bool *a3)
{
  __int64 (__fastcall *v6)(struct ISwitchItem *, GUID *, __int64 *); // rbx
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, int *); // rbx
  _QWORD *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  v17 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  v7 = v6((struct ISwitchItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v17);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v11 = *((_QWORD *)this + 12);
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v11 + 24LL);
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v18);
    v8 = v12(v11, *v13, &v16);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
    if ( v8 >= 0 )
    {
      *a3 = v16 != 0;
      v8 = 0;
      goto LABEL_7;
    }
    v9 = (unsigned int)v8;
    v10 = 84LL;
  }
  else
  {
    v9 = (unsigned int)v7;
    v10 = 81LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitem.cpp",
    (const char *)v9);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  return (unsigned int)v8;
}
