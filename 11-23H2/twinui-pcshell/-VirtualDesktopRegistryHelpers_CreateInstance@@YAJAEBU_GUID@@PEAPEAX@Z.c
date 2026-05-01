/*
 * XREFs of ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180191D88
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800FAD6C (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ @ 0x1801403CC (-InternalRelease@-$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRegistryHelpers@@@Z @ 0x180191E3C (--$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVir.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopRegistryHelpers_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  int v4; // ebx
  _DWORD *v5; // rcx
  void *v6; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  void *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopRegistryHelpers>::InternalRelease((__int64 *)&v12);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopRegistryHelpers,VirtualDesktopRegistryHelpers,>(&v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = (unsigned int)v3;
    v9 = 213LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)v8);
    goto LABEL_6;
  }
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_b3038f52_6c01_47f7_8363_bc7bed1d4dbb, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v12;
    *a2 = v12;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
    v4 = 0;
  }
  else if ( InlineIsEqualGUID(v5, v5) )
  {
    v6 = v12;
    *a2 = v12;
    v4 = 0;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    v4 = -2147467262;
  }
  if ( v4 < 0 )
  {
    v8 = (unsigned int)v4;
    v9 = 214LL;
    goto LABEL_11;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<VirtualDesktopRegistryHelpers>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v4;
}
