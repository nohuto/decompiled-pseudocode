/*
 * XREFs of ?CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18019B1A8
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800FAD6C (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801403A4 (-InternalRelease@-$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopVisibilityPolicy@@V1@AEAPEAUIVirtualDesktopNotification@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@@Z @ 0x18019B264 (--$MakeAndInitialize@VCVirtualDesktopVisibilityPolicy@@V1@AEAPEAUIVirtualDesktopNotification@@@D.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopVisibilityPolicy_CreateInstance(
        struct IVirtualDesktopNotification *a1,
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
  struct IVirtualDesktopNotification *v13; // [rsp+30h] [rbp+8h] BYREF
  void *v14; // [rsp+38h] [rbp+10h] BYREF

  v13 = a1;
  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease((__int64 *)&v14);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopVisibilityPolicy,CVirtualDesktopVisibilityPolicy,IVirtualDesktopNotification * &>(
         &v14,
         &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = (unsigned int)v4;
    v10 = 394LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)v9);
    goto LABEL_6;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_d9f556e1_e62d_4847_b4af_4ef5dacdc290, &GUID_00000000_0000_0000_c000_000000000046) )
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
    v10 = 395LL;
    goto LABEL_11;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v5;
}
