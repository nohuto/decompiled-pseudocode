/*
 * XREFs of ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x180198FDC
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800FAD6C (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801403F4 (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x1801990A4 (--$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopForegroundPolicy_CreateInstance(
        struct IVirtualDesktopCollection *a1,
        struct IVirtualDesktopVisibilityPolicy *a2,
        struct IVirtualDesktopDefaultForegroundHandler *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  int v7; // ebx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopCollection *v15; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v16; // [rsp+48h] [rbp+28h] BYREF
  struct IVirtualDesktopDefaultForegroundHandler *v17; // [rsp+50h] [rbp+30h] BYREF
  void *v18; // [rsp+58h] [rbp+38h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v5 = a5;
  *a5 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease((__int64 *)&v18);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopForegroundPolicy,CVirtualDesktopForegroundPolicy,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopDefaultForegroundHandler * &>(
         &v18,
         &v15,
         &v16,
         &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = (unsigned int)v6;
    v12 = 243LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)v11);
    goto LABEL_6;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(&GUID_f1ff9fd4_66ef_4962_be4f_5bb471763fc4, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = (__int64)v18;
    *v5 = v18;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v7 = 0;
  }
  else if ( InlineIsEqualGUID(v8, v8) )
  {
    v9 = (__int64)v18;
    *v5 = v18;
    v7 = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v7 = -2147467262;
  }
  if ( v7 < 0 )
  {
    v11 = (unsigned int)v7;
    v12 = 244LL;
    goto LABEL_11;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease((__int64 *)&v18);
  return (unsigned int)v7;
}
