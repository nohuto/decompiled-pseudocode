/*
 * XREFs of ?Release@agile_ref_fallback@impl@winrt@@UEAAIXZ @ 0x1804111E0
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1agile_ref_fallback@impl@winrt@@QEAA@XZ @ 0x18040F214 (--1agile_ref_fallback@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::agile_ref_fallback::Release(winrt::impl::agile_ref_fallback *this)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)this + 5);
  if ( !v2 && this )
  {
    winrt::impl::agile_ref_fallback::~agile_ref_fallback(this);
    operator delete(this);
  }
  return v2;
}
