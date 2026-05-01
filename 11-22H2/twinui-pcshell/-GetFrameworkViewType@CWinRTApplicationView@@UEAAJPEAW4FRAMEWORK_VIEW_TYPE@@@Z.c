/*
 * XREFs of ?GetFrameworkViewType@CWinRTApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18005C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplicationHolographic@@@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationHolographic@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005C65C (--$As@UIImmersiveApplicationHolographic@@@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetFrameworkViewType(
        CWinRTApplicationView *this,
        enum FRAMEWORK_VIEW_TYPE *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 6;
  v9 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IImmersiveApplication>::As<IImmersiveApplicationHolographic>((char *)this + 208, &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 601LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v3,
      v7);
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, enum FRAMEWORK_VIEW_TYPE *))(*(_QWORD *)v9 + 24LL))(v9, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 602LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  return v4;
}
