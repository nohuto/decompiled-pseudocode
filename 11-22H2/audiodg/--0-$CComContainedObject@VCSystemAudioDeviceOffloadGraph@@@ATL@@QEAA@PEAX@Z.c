/*
 * XREFs of ??0?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14005A810
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005AE24 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJP.c)
 * Callees:
 *     ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x14005A964 (--0CSystemAudioDeviceOffloadGraph@@QEAA@XZ.c)
 */

CSystemAudioDeviceOffloadGraph *__fastcall ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::CComContainedObject<CSystemAudioDeviceOffloadGraph>(
        CSystemAudioDeviceOffloadGraph *a1,
        __int64 a2)
{
  CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph(a1);
  *((_QWORD *)a1 + 49) = a2;
  *(_QWORD *)a1 = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)a1 + 1) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)a1 + 2) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)a1 + 3) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISubmix'};
  *((_QWORD *)a1 + 37) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)a1 + 38) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISubmixInternal'};
  *((_QWORD *)a1 + 46) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioVolume'};
  *((_QWORD *)a1 + 47) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)a1 + 48) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMeter'};
  return a1;
}
