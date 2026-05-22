/*
 * XREFs of ?get_Matrix@Partner@CompositionManipulation@Composition@UI@Windows@@UEAAJPEAUD2D_MATRIX_4X4_F@@@Z @ 0x180090960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0Matrix4x4F@D2D1@@QEAA@MMMMMMMMMMMMMMMM@Z @ 0x180161208 (--0Matrix4x4F@D2D1@@QEAA@MMMMMMMMMMMMMMMM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionManipulation::Partner::get_Matrix(
        Windows::UI::Composition::CompositionManipulation::Partner *this,
        struct D2D_MATRIX_4X4_F *a2)
{
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int64 result; // rax
  __int64 v6; // [rsp+90h] [rbp-58h] BYREF

  v3 = (_OWORD *)D2D1::Matrix4x4F::Matrix4x4F(
                   (D2D1::Matrix4x4F *)&v6,
                   1.0,
                   0.0,
                   0.0,
                   0.0,
                   0.0,
                   1.0,
                   0.0,
                   0.0,
                   0.0,
                   0.0,
                   1.0,
                   0.0,
                   0.0,
                   0.0,
                   0.0,
                   1.0);
  *(_OWORD *)&a2->_11 = *v3;
  *(_OWORD *)&a2->m[1][0] = v3[1];
  *(_OWORD *)&a2->m[2][0] = v3[2];
  v4 = v3[3];
  result = 0LL;
  *(_OWORD *)&a2->m[3][0] = v4;
  return result;
}
