/*
 * XREFs of ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x18013B060
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x18013B114 (-RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtual.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18013CBA4 (-_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::AddVirtualDesktop(
        CVirtualDesktopCollection *this,
        struct IVirtualDesktop **a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, GUID *, struct IVirtualDesktop **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  struct IVirtualDesktop *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktop *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = 0LL;
  v12 = 0LL;
  v4 = *((_QWORD *)this + 3);
  v5 = *(__int64 (__fastcall **)(__int64, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v4 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  v6 = v5(v4, &GUID_3f07f4be_b107_441a_af0f_39d82529072c, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 97LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_8;
  }
  v6 = CVirtualDesktopCollection::_AddDesktop(this, v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 98LL;
    goto LABEL_11;
  }
  if ( a2 )
  {
    v10 = v12;
    v12 = 0LL;
    *a2 = v10;
  }
  v7 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  return v7;
}
