/*
 * XREFs of ??0?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z @ 0x140056E18
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400574C4 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAX.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CSystemAudioDeviceExclusive@@QEAA@XZ @ 0x140056F18 (--0CSystemAudioDeviceExclusive@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComAggObject<CSystemAudioDeviceExclusive>::CComAggObject<CSystemAudioDeviceExclusive>(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceExclusive>::`vftable';
  CSystemAudioDeviceExclusive::CSystemAudioDeviceExclusive((CSystemAudioDeviceExclusive *)(a1 + 24));
  *(_QWORD *)(a1 + 320) = a2;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioDeviceGraph'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioProtectedOutput'};
  *(_QWORD *)(a1 + 48) = &ATL::CComContainedObject<CSystemAudioDeviceExclusive>::`vftable'{for `ISubmix'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
