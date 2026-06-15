/*
 * XREFs of ?Release@CStringData@ATL@@QEAAXXZ @ 0x140003EE4
 * Callers:
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x140003A48 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140003D54 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140003E04 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x140054444 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x140054458 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x140054684 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140068B00 (-FreeNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@UIW.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CStringData::Release(ATL::CStringData *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD, ATL::CStringData *))(**(_QWORD **)this + 8LL))(*(_QWORD *)this, this);
}
