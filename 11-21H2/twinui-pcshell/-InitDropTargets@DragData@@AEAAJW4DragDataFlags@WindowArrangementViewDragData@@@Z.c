/*
 * XREFs of ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180522F60
 * Callers:
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x18052351C (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@_N@Z @ 0x18052298C (-AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@.c)
 *     ?GetDropTargetEnabledList@DragData@@AEAA?AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180522BD8 (-GetDropTargetEnabledList@DragData@@AEAA-AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrang.c)
 *     ?GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z @ 0x180522CC0 (-GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z.c)
 *     ?GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z @ 0x180522D84 (-GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragData::InitDropTargets(__int64 a1, char a2)
{
  char DropTargetEnabledList; // si
  int ReplaceDropTargetRects; // ebx
  __int64 v5; // rdx
  int LeftAndRightItems; // eax
  int v8; // eax
  __int64 *v9; // r14
  bool v10; // zf
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64 *, _QWORD, __int64 *, _QWORD); // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64 *, __int64 *, _QWORD); // rbx
  int v16; // eax
  __int32 v17; // r14d
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  struct IAppLayoutItem *v19[2]; // [rsp+38h] [rbp-38h] BYREF
  struct IAppLayoutItem *v20; // [rsp+48h] [rbp-28h] BYREF
  __m128i v21; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  DropTargetEnabledList = DragData::GetDropTargetEnabledList(a1, a2);
  if ( (DropTargetEnabledList & 1) != 0 )
  {
    v21 = *(__m128i *)(a1 + 56);
    v21.m128i_i32[3] = *(_DWORD *)(a1 + 84) + v21.m128i_i32[1];
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 5, &v21, 0);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 237LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)ReplaceDropTargetRects);
      return (unsigned int)ReplaceDropTargetRects;
    }
  }
  if ( (DropTargetEnabledList & 2) != 0 )
  {
    v21 = *(__m128i *)(a1 + 56);
    v21.m128i_i32[1] = _mm_srli_si128(v21, 8).m128i_i32[1] - *(_DWORD *)(a1 + 88);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 6, &v21, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 244LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 4) != 0 )
  {
    *(_OWORD *)v19 = *(_OWORD *)(a1 + 56);
    LODWORD(v19[1]) = _mm_cvtsi128_si32(*(__m128i *)v19) + *(_DWORD *)(a1 + 92);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 0, v19, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 252LL;
      goto LABEL_4;
    }
    *(_OWORD *)v19 = *(_OWORD *)(a1 + 56);
    LODWORD(v19[0]) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v19, 8)) - *(_DWORD *)(a1 + 92);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 1, v19, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 256LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 8) != 0 )
  {
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 4, (_OWORD *)(a1 + 56), 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 265LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 0x10) != 0 )
  {
    v20 = 0LL;
    v19[0] = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v19);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
    LeftAndRightItems = DragData::GetLeftAndRightItems((DragData *)a1, &v20, v19);
    ReplaceDropTargetRects = LeftAndRightItems;
    if ( LeftAndRightItems < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)LeftAndRightItems);
LABEL_33:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v19);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
      return (unsigned int)ReplaceDropTargetRects;
    }
    v18 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 184LL))(
           *(_QWORD *)(a1 + 40),
           *(_QWORD *)(a1 + 48));
    v9 = *(__int64 **)(a1 + 40);
    v10 = v8 == 0;
    v11 = *v9;
    if ( v10 )
    {
      v15 = *(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v11 + 168);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
      v13 = v15(v9, &v18, 0LL);
      ReplaceDropTargetRects = v13;
      if ( v13 < 0 )
      {
        v14 = 289LL;
        goto LABEL_32;
      }
    }
    else
    {
      v12 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, _QWORD))(v11 + 152);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
      v13 = v12(v9, *(_QWORD *)(a1 + 48), &v18, 0LL);
      ReplaceDropTargetRects = v13;
      if ( v13 < 0 )
      {
        v14 = 281LL;
LABEL_32:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
        goto LABEL_33;
      }
    }
    v16 = (*(__int64 (__fastcall **)(__int64, struct IAppLayoutItem *))(*(_QWORD *)v18 + 96LL))(v18, v20);
    v21 = 0LL;
    if ( v16 )
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __m128i *))(*(_QWORD *)v19[0] + 56LL))(v19[0], 0LL, &v21);
      v17 = v21.m128i_i32[2] - MulDiv(v21.m128i_i32[2] - v21.m128i_i32[0], 50, 100);
    }
    else
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __m128i *))(*(_QWORD *)v20 + 56LL))(v20, 0LL, &v21);
      v17 = MulDiv(v21.m128i_i32[2] - v21.m128i_i32[0], 50, 100) + v21.m128i_i32[0];
    }
    v21 = *(__m128i *)(a1 + 56);
    v21.m128i_i32[2] = v17;
    v13 = DragData::AddDropTarget((_QWORD *)a1, 0, &v21, 1);
    ReplaceDropTargetRects = v13;
    if ( v13 < 0 )
    {
      v14 = 317LL;
      goto LABEL_32;
    }
    v21 = *(__m128i *)(a1 + 56);
    v21.m128i_i32[0] = v17;
    v13 = DragData::AddDropTarget((_QWORD *)a1, 1, &v21, 1);
    ReplaceDropTargetRects = v13;
    if ( v13 < 0 )
    {
      v14 = 321LL;
      goto LABEL_32;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v19);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
  }
  if ( (DropTargetEnabledList & 0x20) != 0 )
  {
    v21 = 0LL;
    *(_OWORD *)v19 = 0LL;
    ReplaceDropTargetRects = DragData::GetReplaceDropTargetRects(
                               (DragData *)a1,
                               (struct Geometry::CRect *)&v21,
                               (struct Geometry::CRect *)v19);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 328LL;
      goto LABEL_4;
    }
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 2, &v21, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 329LL;
      goto LABEL_4;
    }
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 3, v19, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v5 = 330LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
