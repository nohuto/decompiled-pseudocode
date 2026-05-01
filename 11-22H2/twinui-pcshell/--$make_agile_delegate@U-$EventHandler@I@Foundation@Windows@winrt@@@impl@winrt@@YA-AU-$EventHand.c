/*
 * XREFs of ??$make_agile_delegate@U?$EventHandler@I@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$EventHandler@I@Foundation@Windows@1@AEBU2341@@Z @ 0x18027DA58
 * Callers:
 *     ?add@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x18027EBFC (-add@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA-AUevent_token@2@AEBU-$Even.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$?0V_lambda_3455f9b640c774812c562936cfdab1ef_@@@?$EventHandler@I@Foundation@Windows@winrt@@QEAA@V_lambda_3455f9b640c774812c562936cfdab1ef_@@@Z @ 0x18027D29C (--$-0V_lambda_3455f9b640c774812c562936cfdab1ef_@@@-$EventHandler@I@Foundation@Windows@winrt@@QEA.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802CECBA (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z @ 0x180412B0C (-get_agile_reference@impl@winrt@@YA-AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::EventHandler<unsigned int>>(
        winrt::Windows::Foundation::IUnknown *this,
        __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8; // [rsp+50h] [rbp+30h] BYREF
  __int64 v9; // [rsp+58h] [rbp+38h] BYREF

  v4 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(a2, &v8);
  if ( v8 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
  v5 = *a2;
  if ( v4 )
  {
    *(_QWORD *)this = v5;
    winrt::Windows::Foundation::IUnknown::add_ref(this);
  }
  else
  {
    v9 = 0LL;
    winrt::impl::get_agile_reference(
      &v8,
      winrt::impl::guid_v<winrt::Windows::Foundation::EventHandler<unsigned int>>,
      v5,
      &v9);
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      v8 = v6;
      winrt::Windows::Foundation::EventHandler<unsigned int>::EventHandler<unsigned int>(this, &v8);
    }
    else
    {
      *(_QWORD *)this = *a2;
      winrt::Windows::Foundation::IUnknown::add_ref(this);
    }
    if ( v9 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v9);
  }
  return this;
}
