/*
 * XREFs of ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140003F18
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140003D54 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?InternalSetAtIndex@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAXHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140003FBC (-InternalSetAtIndex@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::Add(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax

  v5 = _o__recalloc(SadMap, (int)qword_1400C1638 + 1, 8LL);
  if ( !v5 )
    return 0LL;
  SadMap = v5;
  v6 = _o__recalloc(qword_1400C1630, (int)qword_1400C1638 + 1, 8LL);
  if ( !v6 )
    return 0LL;
  qword_1400C1630 = v6;
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::InternalSetAtIndex(
    v7,
    (unsigned int)qword_1400C1638,
    a2,
    a3);
  result = 1LL;
  LODWORD(qword_1400C1638) = qword_1400C1638 + 1;
  return result;
}
