/*
 * XREFs of _CAudioSessionInstanceId::Initialize_::_1_::dtor$5_0 @ 0x180082F28
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800CE3D4 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioSessionInstanceId::Initialize_::_1_::dtor_5_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 168) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 168) &= ~1u;
    return ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(a2 + 72);
  }
  return result;
}
