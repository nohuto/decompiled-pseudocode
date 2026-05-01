/*
 * XREFs of ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x180198CE8
 * Callers:
 *     ?CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVirtualDesktopPersistence@@@Z @ 0x180198C80 (-CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVi.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ @ 0x18014041C (-InternalRelease@-$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x180198DA4 (--$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@@Deta.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopPersistence_CreateInstance(
        struct IVirtualDesktopRegistryHelpers *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  int v5; // ebx
  _DWORD *v6; // rcx
  void *v7; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  void *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktopRegistryHelpers *v13; // [rsp+30h] [rbp+8h] BYREF
  void *v14; // [rsp+38h] [rbp+10h] BYREF

  v13 = a1;
  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease((__int64 *)&v14);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPersistence,VirtualDesktopPersistence,IVirtualDesktopRegistryHelpers * &>(
         &v14,
         &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = (unsigned int)v4;
    v10 = 314LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v9);
    goto LABEL_6;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_f7ed6698_3d52_49ee_a98b_c9f3cdbb3eba, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v14;
    *a3 = v14;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 8LL))(v11);
    v5 = 0;
  }
  else if ( InlineIsEqualGUID(v6, v6) )
  {
    v7 = v14;
    *a3 = v14;
    v5 = 0;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v5 = -2147467262;
  }
  if ( v5 < 0 )
  {
    v9 = (unsigned int)v5;
    v10 = 315LL;
    goto LABEL_11;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v5;
}
