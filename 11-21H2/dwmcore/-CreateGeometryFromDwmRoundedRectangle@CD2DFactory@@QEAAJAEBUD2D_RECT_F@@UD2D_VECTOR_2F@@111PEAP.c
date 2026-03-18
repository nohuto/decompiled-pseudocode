/*
 * XREFs of ?CreateGeometryFromDwmRoundedRectangle@CD2DFactory@@QEAAJAEBUD2D_RECT_F@@UD2D_VECTOR_2F@@111PEAPEAUID2D1Geometry@@@Z @ 0x180103710
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006C96C (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::CreateGeometryFromDwmRoundedRectangle(
        CD2DFactory *this,
        const struct D2D_RECT_F *a2,
        struct D2D_VECTOR_2F a3,
        struct D2D_VECTOR_2F a4,
        struct D2D_VECTOR_2F a5,
        struct D2D_VECTOR_2F a6,
        struct ID2D1Geometry **a7)
{
  return (*(__int64 (__fastcall **)(__int64, const struct D2D_RECT_F *, struct D2D_VECTOR_2F, struct D2D_VECTOR_2F, struct D2D_VECTOR_2F, struct D2D_VECTOR_2F, struct ID2D1Geometry **))(*(_QWORD *)qword_1803D75A0 + 24LL))(
           qword_1803D75A0,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
