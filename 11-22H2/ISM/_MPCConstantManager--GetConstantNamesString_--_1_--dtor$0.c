/*
 * XREFs of _MPCConstantManager::GetConstantNamesString_::_1_::dtor$0 @ 0x1800BE279
 * Callers:
 *     <none>
 * Callees:
 *     ??1CandidateIdentity@@QEAA@XZ @ 0x1800AB214 (--1CandidateIdentity@@QEAA@XZ.c)
 */

void __fastcall MPCConstantManager::GetConstantNamesString_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    CandidateIdentity::~CandidateIdentity(*(CandidateIdentity **)(a2 + 72));
  }
}
