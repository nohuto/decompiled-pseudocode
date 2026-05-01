/*
 * XREFs of ?Release@?$implements_delegate@U?$EventHandler@I@Foundation@Windows@winrt@@V_lambda_59a2c452c266c39cf2d30705a14a3598_@@@impl@winrt@@UEAAIXZ @ 0x18027C590
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$implements_delegate@U?$EventHandler@I@Foundation@Windows@winrt@@V_lambda_3455f9b640c774812c562936cfdab1ef_@@@impl@winrt@@QEAA@XZ @ 0x180235210 (--1-$implements_delegate@U-$EventHandler@I@Foundation@Windows@winrt@@V_lambda_3455f9b640c774812c.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::EventHandler<unsigned int>,_lambda_59a2c452c266c39cf2d30705a14a3598_>::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 8);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate<winrt::Windows::Foundation::EventHandler<unsigned int>,_lambda_3455f9b640c774812c562936cfdab1ef_>::~implements_delegate<winrt::Windows::Foundation::EventHandler<unsigned int>,_lambda_3455f9b640c774812c562936cfdab1ef_>((__int64)a1);
    operator delete((void *)a1);
  }
  return v2;
}
