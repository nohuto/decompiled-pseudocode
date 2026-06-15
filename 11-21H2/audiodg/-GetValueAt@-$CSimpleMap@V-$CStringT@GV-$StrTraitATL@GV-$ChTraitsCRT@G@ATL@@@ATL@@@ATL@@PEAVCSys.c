/*
 * XREFs of ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x140054810
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000C240 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x140054540 (-AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z.c)
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x140054714 (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x140051790 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
        __int64 a1,
        int a2)
{
  if ( a2 < 0 || a2 >= (int)qword_1400C1638 )
  {
    ATL::_AtlRaiseException(0xC000008C);
    JUMPOUT(0x14005483ELL);
  }
  return qword_1400C1630 + 8LL * a2;
}
