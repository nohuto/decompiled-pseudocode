/*
 * XREFs of ?Release@StateChangedEventArgsImpl@@UEAAKXZ @ 0x18061FB60
 * Callers:
 *     ?Release@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U23456@$00@Internal@Collections@Foundation@Windows@@W7EAAKXZ @ 0x1802A9D80 (-Release@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Inte.c)
 *     ?Release@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U23456@$00@Internal@Collections@Foundation@Windows@@WBA@EAAKXZ @ 0x1802A9DA0 (-Release@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PEAUHST_ea_1802A9DA0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall StateChangedEventArgsImpl::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *>,Microsoft::WRL::FtmBase>::Release(this);
}
