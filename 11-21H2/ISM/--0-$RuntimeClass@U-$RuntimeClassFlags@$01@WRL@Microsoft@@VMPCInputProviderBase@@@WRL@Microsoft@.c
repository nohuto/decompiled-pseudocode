/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A62F4
 * Callers:
 *     ??0MPCHandProcessor@@QEAA@XZ @ 0x1800A640C (--0MPCHandProcessor@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VMPCHomeGestureProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18019474C (--$MakeAndInitialize@VMPCHomeGestureProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreatePara.c)
 *     ??$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180194834 (--$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 *     ??0MPCSixDofProcessor@@QEAA@XZ @ 0x1801BDAEC (--0MPCSixDofProcessor@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801CA35C (--$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 *     ??$MakeAndInitialize@VMPCHeadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801CA8A0 (--$MakeAndInitialize@VMPCHeadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 *     ??0MPCClickerProcessor@@QEAA@XZ @ 0x1801CAF74 (--0MPCClickerProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x180028780 (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>(
        __int64 a1)
{
  MPCInputProviderBase::MPCInputProviderBase((MPCInputProviderBase *)a1);
  *(_DWORD *)(a1 + 3660) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `IInputProcessor'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *(_QWORD *)(a1 + 16) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *(_QWORD *)(a1 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
