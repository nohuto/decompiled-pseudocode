/*
 * XREFs of ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@W4VirtualDesktopPersistenceMode@@AEBU_GUID@@PEAPEAX@Z @ 0x1801106AC
 * Callers:
 *     ?CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVirtualDesktopPersistence@@@Z @ 0x180110380 (-CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVi.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAW4VirtualDesktopPersistenceMode@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAW4VirtualDesktopPersistenceMode@@@Z @ 0x180110770 (--$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAW4.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C890 (-InternalRelease@-$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopPersistence_CreateInstance(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+38h] [rbp+10h] BYREF
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  v15 = a2;
  v14 = a1;
  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease(&v16);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPersistence,VirtualDesktopPersistence,IVirtualDesktopRegistryHelpers * &,enum VirtualDesktopPersistenceMode &>(
         &v16,
         &v14,
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = (unsigned int)v5;
    v11 = 552LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v10);
    goto LABEL_6;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(&GUID_196f685d_86d4_40ee_8428_11e6be28c090, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v12 = v16;
    *a4 = v16;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v7, v7) )
  {
    v8 = v16;
    *a4 = v16;
    v6 = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v6 < 0 )
  {
    v10 = (unsigned int)v6;
    v11 = 553LL;
    goto LABEL_11;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease(&v16);
  return (unsigned int)v6;
}
