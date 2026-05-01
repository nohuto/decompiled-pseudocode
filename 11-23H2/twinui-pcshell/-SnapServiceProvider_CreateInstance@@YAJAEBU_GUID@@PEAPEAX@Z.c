/*
 * XREFs of ?SnapServiceProvider_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18010B054
 * Callers:
 *     ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x18010AC10 (-RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VSnapServiceProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSnapServiceProvider@@@Z @ 0x18010B3C4 (--$MakeAndInitialize@VSnapServiceProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSnapServicePr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapServiceProvider_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<SnapServiceProvider,SnapServiceProvider,>(&v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 273LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
      (const char *)(unsigned int)v3,
      v7);
    goto LABEL_3;
  }
  v3 = (**v9)(v9, &GUID_f5bca281_598d_4411_a252_74a25d86fc95, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 274LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return v4;
}
