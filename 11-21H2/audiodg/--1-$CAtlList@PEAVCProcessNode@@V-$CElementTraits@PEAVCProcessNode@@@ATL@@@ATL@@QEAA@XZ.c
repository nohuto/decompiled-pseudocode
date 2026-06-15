/*
 * XREFs of ??1?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAA@XZ @ 0x140050AA4
 * Callers:
 *     _CPipeInstance::CreateDevicePipeInstance_::_1_::dtor$0 @ 0x140037012 (_CPipeInstance--CreateDevicePipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$0 @ 0x1400370EA (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$0 @ 0x140038556 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectCache::CDeviceGraphObjectCache_::_1_::dtor$3 @ 0x140038EC8 (_CDeviceGraphObjectCache--CDeviceGraphObjectCache_--_1_--dtor$3.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$2 @ 0x140038F0A (_CAudioProcessor--CAudioProcessor_--_1_--dtor$2.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$3 @ 0x140038F23 (_CAudioProcessor--CAudioProcessor_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$0 @ 0x140059802 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$0 @ 0x140059D44 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::~CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>(
        __int64 a1)
{
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll(a1);
}
