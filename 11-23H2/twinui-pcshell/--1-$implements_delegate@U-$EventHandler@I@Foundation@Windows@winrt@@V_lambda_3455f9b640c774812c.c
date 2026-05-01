/*
 * XREFs of ??1?$implements_delegate@U?$EventHandler@I@Foundation@Windows@winrt@@V_lambda_3455f9b640c774812c562936cfdab1ef_@@@impl@winrt@@QEAA@XZ @ 0x180235210
 * Callers:
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_cf08e7fff4dde67b8d19a7111b5062ba_@@@impl@winrt@@UEAAIXZ @ 0x180240DE0 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@UPackageVolume@Dep_ea_180240DE0.c)
 *     ?Release@?$implements_delegate@U?$EventHandler@I@Foundation@Windows@winrt@@V_lambda_59a2c452c266c39cf2d30705a14a3598_@@@impl@winrt@@UEAAIXZ @ 0x18027C590 (-Release@-$implements_delegate@U-$EventHandler@I@Foundation@Windows@winrt@@V_lambda_59a2c452c266.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::EventHandler<unsigned int>,_lambda_3455f9b640c774812c562936cfdab1ef_>::~implements_delegate<winrt::Windows::Foundation::EventHandler<unsigned int>,_lambda_3455f9b640c774812c562936cfdab1ef_>(
        __int64 a1)
{
  __int64 result; // rax

  result = winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  if ( *(_QWORD *)(a1 + 8) )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)(a1 + 8));
  return result;
}
