/*
 * XREFs of ?Release@BrokeredViewTabConverterStatics@@UEAAKXZ @ 0x1803DA7D0
 * Callers:
 *     ?Release@BrokeredViewTabConverterStatics@@W7EAAKXZ @ 0x1801F9730 (-Release@BrokeredViewTabConverterStatics@@W7EAAKXZ.c)
 *     ?Release@BrokeredViewTabConverterStatics@@WCI@EAAKXZ @ 0x1801F9750 (-Release@BrokeredViewTabConverterStatics@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall BrokeredViewTabConverterStatics::Release(__int64 this, volatile int *a2)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverterStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
           this,
           a2);
}
