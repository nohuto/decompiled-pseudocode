/*
 * XREFs of ?SetTransform@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B7A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCursorVisual::Api::SetTransform(
        Windows::UI::Composition::InteropCursorVisual::Api *this,
        const struct D2D_MATRIX_3X2_F *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct D2D_MATRIX_3X2_F *))(**((_QWORD **)this + 2) + 64LL))(
           *((_QWORD *)this + 2),
           a2);
}
