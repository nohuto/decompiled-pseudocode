/*
 * XREFs of ??0?$CComObject@VCAudioProcessor@@@ATL@@QEAA@PEAX@Z @ 0x1400036BC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400035DC (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 * Callees:
 *     ??0CAudioProcessor@@QEAA@XZ @ 0x14000418C (--0CAudioProcessor@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

CAudioProcessor *__fastcall ATL::CComObject<CAudioProcessor>::CComObject<CAudioProcessor>(CAudioProcessor *a1)
{
  CAudioProcessor::CAudioProcessor(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CAudioProcessor>::`vftable'{for `IAudioProcessor'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CAudioProcessor>::`vftable'{for `IAudioProcessRT'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CAudioProcessor>::`vftable'{for `IAudioLogging'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
