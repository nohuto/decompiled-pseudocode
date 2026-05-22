/*
 * XREFs of ?Release@CSharedTarget@Composition@UI@Windows@@UEAAKXZ @ 0x18010DB70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1CSharedTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18010DA08 (--1CSharedTarget@Composition@UI@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CSharedTarget::Release(Windows::UI::Composition::CSharedTarget *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    Windows::UI::Composition::CSharedTarget::~CSharedTarget(this);
    operator delete(this);
  }
  return v2;
}
