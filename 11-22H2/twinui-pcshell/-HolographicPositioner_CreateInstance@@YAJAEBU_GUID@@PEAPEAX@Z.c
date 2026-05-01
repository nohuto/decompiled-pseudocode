/*
 * XREFs of ?HolographicPositioner_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800845F8
 * Callers:
 *     ?CreateInstance@HolographicPositionerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800845D0 (-CreateInstance@HolographicPositionerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VHolographicPositioner@@UIHolographicPositioner@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHolographicPositioner@@@Z @ 0x180084694 (--$MakeAndInitialize@VHolographicPositioner@@UIHolographicPositioner@@$$V@Details@WRL@Microsoft@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, const struct _GUID *, void **); // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x943,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL,
      v9);
    return v5;
  }
  *a2 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<HolographicPositioner,IHolographicPositioner,>(&v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 2376LL;
LABEL_11:
    v8 = (unsigned int)v4;
    goto LABEL_12;
  }
  if ( !v11 )
  {
    v5 = -2147467259;
    v8 = 2147500037LL;
    v7 = 2378LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)v8,
      v9);
    goto LABEL_5;
  }
  v4 = (**v11)(v11, a1, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = 2379LL;
    goto LABEL_11;
  }
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return v5;
}
