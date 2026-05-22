/*
 * XREFs of ??1CandidateIdentity@@QEAA@XZ @ 0x1800AB214
 * Callers:
 *     _MPCConstantManager::ChangeConstant_::_1_::dtor$0 @ 0x1800BDB30 (_MPCConstantManager--ChangeConstant_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetActiveInputTypeList_::_1_::dtor$0 @ 0x1800BDEB1 (_MPCConstantManager--GetActiveInputTypeList_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetConstantNamesString_::_1_::dtor$0 @ 0x1800BE279 (_MPCConstantManager--GetConstantNamesString_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetConstantNamesString_::_1_::dtor$1 @ 0x1800BE2A0 (_MPCConstantManager--GetConstantNamesString_--_1_--dtor$1.c)
 *     _MPCConstantManager::GetConstantsForInputType_::_1_::dtor$0 @ 0x1800BE51E (_MPCConstantManager--GetConstantsForInputType_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetCurrentInputTypesString_::_1_::dtor$0 @ 0x1800BE695 (_MPCConstantManager--GetCurrentInputTypesString_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetCurrentInputTypesString_::_1_::dtor$2 @ 0x1800BE6BC (_MPCConstantManager--GetCurrentInputTypesString_--_1_--dtor$2.c)
 *     _MPCConstantManager::GetCurrentInputTypesString_::_1_::dtor$3 @ 0x1800BE6C8 (_MPCConstantManager--GetCurrentInputTypesString_--_1_--dtor$3.c)
 *     _TracingSessionHelper::StartOrStop_::_1_::dtor$2 @ 0x1800EAF4D (_TracingSessionHelper--StartOrStop_--_1_--dtor$2.c)
 *     _PenInterface::PenInterface_::_1_::dtor$1 @ 0x1801B48FD (_PenInterface--PenInterface_--_1_--dtor$1.c)
 *     _HapticInterface::HapticInterface_::_1_::dtor$4 @ 0x1801B71B0 (_HapticInterface--HapticInterface_--_1_--dtor$4.c)
 *     _Edge::Edge_::_1_::dtor$0 @ 0x1801D6ADD (_Edge--Edge_--_1_--dtor$0.c)
 *     _Edge::Edge_::_1_::dtor$0_0 @ 0x1801D6B65 (_Edge--Edge_--_1_--dtor$0_0.c)
 *     _Edge::Edge_::_1_::dtor$0_1 @ 0x1801D6BFD (_Edge--Edge_--_1_--dtor$0_1.c)
 *     _Edges::HitTest_::_1_::dtor$0 @ 0x1801D774C (_Edges--HitTest_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CandidateIdentity::~CandidateIdentity(CandidateIdentity *this)
{
  std::wstring::_Tidy_deallocate(this);
}
