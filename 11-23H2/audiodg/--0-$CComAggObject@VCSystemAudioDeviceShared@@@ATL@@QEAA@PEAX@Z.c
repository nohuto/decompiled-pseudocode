/*
 * XREFs of ??0?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x14005A1C0
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005A4D0 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEB.c)
 * Callees:
 *     ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x140003AFC (--0CSystemAudioDeviceShared@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComAggObject<CSystemAudioDeviceShared>::CComAggObject<CSystemAudioDeviceShared>(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceShared>::`vftable';
  CSystemAudioDeviceShared::CSystemAudioDeviceShared((CSystemAudioDeviceShared *)(a1 + 24));
  *(_QWORD *)(a1 + 392) = a2;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioDeviceGraph'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioProtectedOutput'};
  *(_QWORD *)(a1 + 48) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmix'};
  *(_QWORD *)(a1 + 320) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `ISaDeviceCallback'};
  *(_QWORD *)(a1 + 328) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmixInternal'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
