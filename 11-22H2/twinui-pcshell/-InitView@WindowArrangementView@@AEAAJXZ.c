/*
 * XREFs of ?InitView@WindowArrangementView@@AEAAJXZ @ 0x1805D2CE4
 * Callers:
 *     ?Initialize@WindowArrangementView@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1805D2E00 (-Initialize@WindowArrangementView@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@W4SHOW_WINDOW_ARRA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1805D21E8 (-GetPrimaryMonitor@WindowArrangementView@@AEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?InitDragData@WindowArrangementView@@AEAAJXZ @ 0x1805D2554 (-InitDragData@WindowArrangementView@@AEAAJXZ.c)
 *     ?InitDropFeedback@WindowArrangementView@@AEAAJPEAUIUnknown@@@Z @ 0x1805D29FC (-InitDropFeedback@WindowArrangementView@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x1805DB47C (-DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowArrangementView::InitView(WindowArrangementView *this)
{
  char *v2; // rbx
  int Instance; // eax
  unsigned int v4; // ebx
  __int64 *AddressOf; // rax
  int PrimaryMonitor; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 72) != 2
    || (v2 = (char *)this + 104,
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 13),
        Instance = DragData_CreateInstance(
                     *((_QWORD *)this + 2),
                     *((_QWORD *)this + 15),
                     *((_QWORD *)this + 11),
                     3LL,
                     &GUID_b5c79aaf_cbb3_4765_befd_5e2ef070c692,
                     v2),
        v4 = Instance,
        Instance >= 0) )
  {
    v10 = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v10);
    PrimaryMonitor = WindowArrangementView::GetPrimaryMonitor((IUnknown **)this, (struct IImmersiveMonitor **)AddressOf);
    v4 = PrimaryMonitor;
    if ( PrimaryMonitor >= 0 )
    {
      PrimaryMonitor = WindowArrangementView::InitDragData(this);
      v4 = PrimaryMonitor;
      if ( PrimaryMonitor >= 0 )
      {
        PrimaryMonitor = WindowArrangementView::InitDropFeedback(this, v10);
        v4 = PrimaryMonitor;
        if ( PrimaryMonitor >= 0 )
        {
LABEL_11:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
          return v4;
        }
        v7 = 966LL;
      }
      else
      {
        v7 = 965LL;
      }
    }
    else
    {
      v7 = 962LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)PrimaryMonitor);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3F7,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)Instance);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3BD,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)v4);
  return v4;
}
