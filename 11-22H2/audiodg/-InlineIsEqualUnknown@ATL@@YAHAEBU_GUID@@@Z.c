/*
 * XREFs of ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x14004CD10
 * Callers:
 *     ?CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x140022680 (-CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004D3C0 (-QueryInterface@-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004D540 (-QueryInterface@-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCStreamInstance@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004D6C0 (-QueryInterface@-$CComAggObject@VCStreamInstance@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140051AD0 (-QueryInterface@-$CComAggObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400580F0 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005A630 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005B910 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140066840 (-QueryInterface@-$CComAggObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140069320 (-QueryInterface@-$CComAggObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140092750 (-QueryInterface@-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX.c)
 *     ?QueryInterface@?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400928C0 (-QueryInterface@-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140092A30 (-QueryInterface@-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX.c)
 *     ?QueryInterface@?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140092BB0 (-QueryInterface@-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14009A300 (-QueryInterface@-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14009A470 (-QueryInterface@-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ATL::InlineIsEqualUnknown(const struct _GUID *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !a1->Data1 && !*(_DWORD *)&a1->Data2 && *(_DWORD *)a1->Data4 == 192 )
    return *(_DWORD *)&a1->Data4[4] == 1174405120;
  return result;
}
