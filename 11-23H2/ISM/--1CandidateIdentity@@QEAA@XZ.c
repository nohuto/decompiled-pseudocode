/*
 * XREFs of ??1CandidateIdentity@@QEAA@XZ @ 0x180098C34
 * Callers:
 *     _MPCConstantManager::ChangeConstant_::_1_::dtor$0 @ 0x1800AB340 (_MPCConstantManager--ChangeConstant_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetActiveInputTypeList_::_1_::dtor$0 @ 0x1800AB6C1 (_MPCConstantManager--GetActiveInputTypeList_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetConstantNamesString_::_1_::dtor$0 @ 0x1800ABA89 (_MPCConstantManager--GetConstantNamesString_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetConstantNamesString_::_1_::dtor$1 @ 0x1800ABAB0 (_MPCConstantManager--GetConstantNamesString_--_1_--dtor$1.c)
 *     _MPCConstantManager::GetConstantsForInputType_::_1_::dtor$0 @ 0x1800ABD2E (_MPCConstantManager--GetConstantsForInputType_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetCurrentInputTypesString_::_1_::dtor$0 @ 0x1800ABEA5 (_MPCConstantManager--GetCurrentInputTypesString_--_1_--dtor$0.c)
 *     _MPCConstantManager::GetCurrentInputTypesString_::_1_::dtor$2 @ 0x1800ABECC (_MPCConstantManager--GetCurrentInputTypesString_--_1_--dtor$2.c)
 *     _MPCConstantManager::GetCurrentInputTypesString_::_1_::dtor$3 @ 0x1800ABED8 (_MPCConstantManager--GetCurrentInputTypesString_--_1_--dtor$3.c)
 *     _TracingSessionHelper::StartOrStop_::_1_::dtor$2 @ 0x1800DBFED (_TracingSessionHelper--StartOrStop_--_1_--dtor$2.c)
 *     _PenInterface::PenInterface_::_1_::dtor$1 @ 0x1801A691D (_PenInterface--PenInterface_--_1_--dtor$1.c)
 *     _HapticInterface::HapticInterface_::_1_::dtor$4 @ 0x1801A91D0 (_HapticInterface--HapticInterface_--_1_--dtor$4.c)
 *     _Edge::Edge_::_1_::dtor$0 @ 0x1801C926D (_Edge--Edge_--_1_--dtor$0.c)
 *     _Edge::Edge_::_1_::dtor$0_0 @ 0x1801C92F5 (_Edge--Edge_--_1_--dtor$0_0.c)
 *     _Edge::Edge_::_1_::dtor$0_1 @ 0x1801C938D (_Edge--Edge_--_1_--dtor$0_1.c)
 *     _Edges::HitTest_::_1_::dtor$0 @ 0x1801C9EDC (_Edges--HitTest_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CandidateIdentity::~CandidateIdentity(CandidateIdentity *this)
{
  std::wstring::_Tidy_deallocate(this);
}
