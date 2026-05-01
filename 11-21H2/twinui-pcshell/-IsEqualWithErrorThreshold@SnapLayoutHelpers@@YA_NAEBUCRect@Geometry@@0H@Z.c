/*
 * XREFs of ?IsEqualWithErrorThreshold@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@0H@Z @ 0x1805A6E64
 * Callers:
 *     ?DoSnapRegionsOverlap@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@12@AEBUCRect@Geometry@@1H@Z @ 0x1805A35FC (-DoSnapRegionsOverlap@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@12@AEBUCRect@.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_860ed2b1985808d5321f1d44f6d1e68b___ @ 0x1805B6A70 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windows--Internal-.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapLayoutHelpers::IsEqualWithErrorThreshold(
        SnapLayoutHelpers *this,
        const struct Geometry::CRect *a2,
        const struct Geometry::CRect *a3)
{
  unsigned int v3; // r9d

  v3 = 2 * (_DWORD)a3;
  return (int)a3 + *(_DWORD *)this - *(_DWORD *)a2 <= (unsigned int)(2 * (_DWORD)a3)
      && (int)a3 + *((_DWORD *)this + 1) - *((_DWORD *)a2 + 1) <= v3
      && (int)a3 + *((_DWORD *)this + 2) - *((_DWORD *)a2 + 2) <= v3
      && (int)a3 + *((_DWORD *)this + 3) - *((_DWORD *)a2 + 3) <= v3;
}
