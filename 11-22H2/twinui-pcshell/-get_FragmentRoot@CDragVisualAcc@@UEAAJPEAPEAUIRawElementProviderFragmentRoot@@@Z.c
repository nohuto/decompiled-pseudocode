/*
 * XREFs of ?get_FragmentRoot@CDragVisualAcc@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z @ 0x1805F7780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDragVisualAcc::get_FragmentRoot(CDragVisualAcc *this, struct IRawElementProviderFragmentRoot **a2)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>>(
           (__int64)this - 8,
           &GUID_620ce2a5_ab8f_40a9_86cb_de3c75599b58,
           a2);
}
