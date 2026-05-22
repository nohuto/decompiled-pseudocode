/*
 * XREFs of ??1CandidateIdentity@@QEAA@XZ @ 0x180081984
 * Callers:
 *     _MPCConstantManager::ChangeConstant_::_1_::dtor$0 @ 0x180094D00 (_MPCConstantManager--ChangeConstant_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetActiveInputTypeList_::_1_::dtor$0 @ 0x180095091 (_MPCConstantManager--GetActiveInputTypeList_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetConstantNamesString_::_1_::dtor$0 @ 0x180095433 (_MPCConstantManager--GetConstantNamesString_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetConstantNamesString_::_1_::dtor$1 @ 0x18009545A (_MPCConstantManager--GetConstantNamesString_--_1_--dtor$1.c)
 *     _MPCConstantManager::GetConstantsForInputType_::_1_::dtor$0 @ 0x1800956AE (_MPCConstantManager--GetConstantsForInputType_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetCurrentInputTypesString_::_1_::dtor$0 @ 0x180095825 (_MPCConstantManager--GetCurrentInputTypesString_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetCurrentInputTypesString_::_1_::dtor$2 @ 0x18009584C (_MPCConstantManager--GetCurrentInputTypesString_--_1_--dtor$2.c)
 *     _MPCConstantManager::GetCurrentInputTypesString_::_1_::dtor$3 @ 0x180095858 (_MPCConstantManager--GetCurrentInputTypesString_--_1_--dtor$3.c)
 *     _TracingSessionHelper::StartOrStop_::_1_::dtor$2 @ 0x1800C2FDB (_TracingSessionHelper--StartOrStop_--_1_--dtor$2.c)
 *     _PenInterface::PenInterface_::_1_::dtor$1 @ 0x1801887F7 (_PenInterface--PenInterface_--_1_--dtor$1.c)
 *     _HapticInterface::HapticInterface_::_1_::dtor$4 @ 0x18018B06C (_HapticInterface--HapticInterface_--_1_--dtor$4.c)
 *     _Edge::Edge_::_1_::dtor$0 @ 0x1801AAE9A (_Edge--Edge_--_1_--dtor$0.c)
 *     _Edge::Edge_::_1_::dtor$0_0 @ 0x1801AAF1D (_Edge--Edge_--_1_--dtor$0_0.c)
 *     _Edge::Edge_::_1_::dtor$0_1 @ 0x1801AAFB1 (_Edge--Edge_--_1_--dtor$0_1.c)
 *     _Edges::HitTest_::_1_::dtor$0 @ 0x1801ABAE4 (_Edges--HitTest_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CandidateIdentity::~CandidateIdentity(CandidateIdentity *this)
{
  std::wstring::_Tidy_deallocate(this);
}
