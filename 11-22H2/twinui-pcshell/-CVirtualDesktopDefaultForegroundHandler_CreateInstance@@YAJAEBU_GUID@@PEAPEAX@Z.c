/*
 * XREFs of ?CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18019C884
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800FAD6C (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18014037C (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopDefaultForegroundHandler@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopDefaultForegroundHandler@@@Z @ 0x18019C938 (--$MakeAndInitialize@VCVirtualDesktopDefaultForegroundHandler@@V1@$$V@Details@WRL@Microsoft@@YAJ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopDefaultForegroundHandler_CreateInstance(const struct _GUID *a1, void **a2)
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
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v12);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopDefaultForegroundHandler,CVirtualDesktopDefaultForegroundHandler,>(&v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = (unsigned int)v3;
    v9 = 39LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopdefaultforegroundhandler.cpp",
      (const char *)v8);
    goto LABEL_6;
  }
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_f3dd45cd_b7b3_43e6_af41_de5c35d3f6b9, &GUID_00000000_0000_0000_c000_000000000046) )
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
    v9 = 40LL;
    goto LABEL_11;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v4;
}
