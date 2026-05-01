/*
 * XREFs of ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x18014760C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800DE300 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x1801476D4 (--$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtu.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C980 (-InternalRelease@-$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection_CreateInstance(
        struct IVirtualDesktopFactory *a1,
        struct IVirtualDesktopPersistence *a2,
        char a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  int v7; // ebx
  _DWORD *v8; // rcx
  void *v9; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  void *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopFactory *v15; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopPersistence *v16; // [rsp+48h] [rbp+28h] BYREF
  char v17; // [rsp+50h] [rbp+30h] BYREF
  void *v18; // [rsp+58h] [rbp+38h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v5 = a5;
  *a5 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(&v18);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopCollection,CVirtualDesktopCollection,IVirtualDesktopFactory * &,IVirtualDesktopPersistence * &,bool &>(
         &v18,
         &v15,
         &v16,
         &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = (unsigned int)v6;
    v12 = 467LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)v11);
    goto LABEL_6;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(&GUID_9fafa2cb_97de_4908_b655_97e28836140d, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = v18;
    *v5 = v18;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
    v7 = 0;
  }
  else if ( InlineIsEqualGUID(v8, v8) )
  {
    v9 = v18;
    *v5 = v18;
    v7 = 0;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v7 = -2147467262;
  }
  if ( v7 < 0 )
  {
    v11 = (unsigned int)v7;
    v12 = 468LL;
    goto LABEL_11;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(&v18);
  return (unsigned int)v7;
}
