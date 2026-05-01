/*
 * XREFs of ?GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z @ 0x1805DB738
 * Callers:
 *     ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1805DB920 (-InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z @ 0x1805DB674 (-GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragData::GetReplaceDropTargetRects(
        DragData *this,
        struct Geometry::CRect *a2,
        struct Geometry::CRect *a3)
{
  int LeftAndRightItems; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // ecx
  struct IAppLayoutItem *v11; // [rsp+20h] [rbp-40h] BYREF
  struct IAppLayoutItem *v12; // [rsp+28h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 3) = 0;
  *(_DWORD *)a3 = 0;
  *((_DWORD *)a3 + 1) = 0;
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 3) = 0;
  v12 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  LeftAndRightItems = DragData::GetLeftAndRightItems(this, &v12, &v11);
  v7 = LeftAndRightItems;
  if ( LeftAndRightItems >= 0 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)v12 + 56LL))(v12, 0LL, &v13);
    v14 = 0LL;
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)v11 + 56LL))(v11, 0LL, &v14);
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 56);
    *((_DWORD *)a2 + 2) = DWORD2(v13);
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + 56);
    v8 = v14;
    *(_DWORD *)a3 = v14;
    v9 = (v8 - *((_DWORD *)a2 + 2)) / 2 + *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v9;
    *(_DWORD *)a3 = v9;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x181,
      (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
      (const char *)(unsigned int)LeftAndRightItems);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  return v7;
}
