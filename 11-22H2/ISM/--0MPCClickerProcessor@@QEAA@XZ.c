/*
 * XREFs of ??0MPCClickerProcessor@@QEAA@XZ @ 0x1801F6CEC
 * Callers:
 *     ??$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801F6C20 (--$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CE67C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@.c)
 */

MPCClickerProcessor *__fastcall MPCClickerProcessor::MPCClickerProcessor(MPCClickerProcessor *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>((__int64)this);
  *(_QWORD *)this = &MPCClickerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCClickerProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_BYTE *)this + 3664) = 0;
  *(_QWORD *)((char *)this + 3668) = 0LL;
  *(_QWORD *)((char *)this + 3676) = 0LL;
  *(_QWORD *)((char *)this + 3684) = 0LL;
  *(_QWORD *)((char *)this + 3692) = 0LL;
  *((_BYTE *)this + 3700) = 0;
  return this;
}
