/*
 * XREFs of ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18013E880
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800FAD6C (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopFactory@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013CBE4 (--$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAU.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18014037C (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopFactory_CreateInstance(
        struct IVirtualDesktopVisibilityPolicy *a1,
        struct IVirtualDesktopLock *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // rcx
  CVirtualDesktopFactory *v8; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  CVirtualDesktopFactory *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktopVisibilityPolicy *v14; // [rsp+30h] [rbp+8h] BYREF
  struct IVirtualDesktopLock *v15; // [rsp+38h] [rbp+10h] BYREF
  CVirtualDesktopFactory *v16; // [rsp+40h] [rbp+18h] BYREF

  v15 = a2;
  v14 = a1;
  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v16);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopFactory,CVirtualDesktopFactory,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
         &v16,
         (__int64 *)&v14,
         (__int64 *)&v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = (unsigned int)v5;
    v11 = 53LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopfactory.cpp",
      (const char *)v10);
    goto LABEL_6;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(&GUID_b9578153_6356_4d4e_9572_ef7ded404181, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v12 = v16;
    *a4 = v16;
    (*(void (__fastcall **)(CVirtualDesktopFactory *))(*(_QWORD *)v12 + 8LL))(v12);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v7, v7) )
  {
    v8 = v16;
    *a4 = v16;
    v6 = 0;
    (*(void (__fastcall **)(CVirtualDesktopFactory *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v6 < 0 )
  {
    v10 = (unsigned int)v6;
    v11 = 54LL;
    goto LABEL_11;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v16);
  return (unsigned int)v6;
}
