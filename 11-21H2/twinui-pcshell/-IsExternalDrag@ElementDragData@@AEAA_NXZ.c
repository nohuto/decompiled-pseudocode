/*
 * XREFs of ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x1804D7ED0
 * Callers:
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804D7784 (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1804B8170 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?ApplyMargins@RelativeMargins@@QEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x1804C071C (-ApplyMargins@RelativeMargins@@QEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 *     ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x1804D7E4C (-GetExternalDragProgress@ElementDragData@@AEAAMXZ.c)
 */

bool __fastcall ElementDragData::IsExternalDrag(ElementDragData *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  bool result; // al
  _BYTE v5[16]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v6; // [rsp+30h] [rbp-28h] BYREF

  result = 1;
  if ( ElementDragData::GetExternalDragProgress(this) <= 1.0 )
  {
    v3 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagPOINT *))(**(_QWORD **)(v2 + 40) + 88LL))(
                     *(_QWORD *)(v2 + 40),
                     &v6);
    RelativeMargins::ApplyMargins((double *)this + 16, (__int64)v5, v3);
    v6 = *(struct tagPOINT *)((char *)this + 92);
    if ( Geometry::CRect::Contains((Geometry::CRect *)v5, &v6) )
      return 0;
  }
  return result;
}
