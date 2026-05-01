/*
 * XREFs of ?Release@agile_ref_fallback@impl@winrt@@UEAAIXZ @ 0x180343380
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1agile_ref_fallback@impl@winrt@@QEAA@XZ @ 0x180341668 (--1agile_ref_fallback@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::agile_ref_fallback::Release(
        winrt::impl::agile_ref_fallback *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // edi

  v5 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)this + 5, a2, a3, a4);
  if ( !v5 && this )
  {
    winrt::impl::agile_ref_fallback::~agile_ref_fallback(this);
    operator delete(this);
  }
  return v5;
}
