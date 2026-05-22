/*
 * XREFs of ?ActivateInstance@?$SimpleAgileActivationFactory@VSharedD3DDevice@Internal@Composition@UI@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800A1390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::SimpleAgileActivationFactory<Windows::UI::Composition::Internal::SharedD3DDevice,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  return Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Internal::SharedD3DDevice,IInspectable,>(a2);
}
