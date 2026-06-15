/*
 * XREFs of ??1?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAA@XZ @ 0x18013E224
 * Callers:
 *     _DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies_::_1_::dtor$0 @ 0x18007B290 (_DynamicAudioEndpointManager--VerifyListIntegrityAndRefreshDependencies_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$3 @ 0x18013ECBA (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::~CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>(
        __int64 *a1)
{
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll(a1);
}
