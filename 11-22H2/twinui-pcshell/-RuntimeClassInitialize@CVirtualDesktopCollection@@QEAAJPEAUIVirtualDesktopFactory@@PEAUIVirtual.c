/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x18013B114
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x1801939A4 (--$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x18013B060 (-AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopPersistence@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPersistence@@@Z @ 0x18013C078 (--4-$ComPtr@UIVirtualDesktopPersistence@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPersiste.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopCollection::RuntimeClassInitialize(
        CVirtualDesktopCollection *this,
        struct IVirtualDesktopFactory *a2,
        struct IVirtualDesktopPersistence *a3,
        char a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64 *, GUID *, char *); // rdi
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  *((_BYTE *)this + 16) = a4;
  if ( *((struct IVirtualDesktopFactory **)this + 3) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)a2 + 8LL))(a2);
    v14 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  }
  v7 = CVirtualDesktopCollection::AddVirtualDesktop(this, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    v12 = 390LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_8;
  }
  v9 = *((_QWORD *)this + 3);
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *, GUID *, char *))(*(_QWORD *)v9 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
  v7 = v10(v9, &qword_1808195F0, &GUID_3f07f4be_b107_441a_af0f_39d82529072c, (char *)this + 40);
  v8 = v7;
  if ( v7 < 0 )
  {
    v12 = 392LL;
    goto LABEL_11;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopPersistence>::operator=((char *)this + 32, a3);
  v8 = 0;
LABEL_8:
  *((_BYTE *)this + 17) = 0;
  return v8;
}
