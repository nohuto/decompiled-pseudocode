/*
 * XREFs of winrt::Windows::Foundation::DeferralCompletedHandler::DeferralCompletedHandler__lambda_4c7cf74572be3be5d52cc677d169632e___ @ 0x1801988F8
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::DeferralCompletedHandler::DeferralCompletedHandler__lambda_4c7cf74572be3be5d52cc677d169632e___(
        _QWORD *a1,
        _QWORD *a2)
{
  std::_Ref_count_base *v4; // rcx
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x20uLL);
  v6[1] = 0LL;
  v6[2] = 0LL;
  v6[1] = *a2;
  v6[2] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 6) = 1;
  *v6 = off_180642CE0;
  *a1 = v6;
  v4 = (std::_Ref_count_base *)a2[1];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return a1;
}
