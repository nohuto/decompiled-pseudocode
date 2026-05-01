/*
 * XREFs of ?GetWidth@CRect@Geometry@@QEBAJXZ @ 0x1801C02E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Geometry::CRect::GetWidth(Geometry::CRect *this)
{
  return (unsigned int)(*((_DWORD *)this + 2) - *(_DWORD *)this);
}
