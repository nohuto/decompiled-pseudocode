/*
 * XREFs of ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1804D7C44
 * Callers:
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x1804D7A08 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 *     ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804D86F0 (-StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MapElementRectToAncestor@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U23@@Z @ 0x1804C53FC (-MapElementRectToAncestor@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U2.c)
 *     ??$As@UIMultitaskingViewDragSource@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDragSource@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804D6A48 (--$As@UIMultitaskingViewDragSource@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ElementDragData::GetDragSourceLocation(ElementDragData *this, __m128i *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v8; // [rsp+30h] [rbp-58h] BYREF
  __m128i v9; // [rsp+40h] [rbp-48h] BYREF
  __m128i v10; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v7[0] = 0LL;
  v4 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewDragSource>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4,
         v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v7[0] + 32LL))(v7[0], &v10);
    v8 = v10;
    *a2 = *ElementHelpers::MapElementRectToAncestor(&v9, *((_QWORD *)this + 4), *((struct IUnknown **)this + 5), &v8);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D1,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
  return v5;
}
