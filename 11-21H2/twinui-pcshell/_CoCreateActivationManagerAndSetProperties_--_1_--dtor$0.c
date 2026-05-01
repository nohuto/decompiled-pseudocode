/*
 * XREFs of _CoCreateActivationManagerAndSetProperties_::_1_::dtor$0 @ 0x1802150C6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CoCreateActivationManagerAndSetProperties_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((void *)(a2 + 72));
}
