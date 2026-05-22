/*
 * XREFs of ??0MPCMouseProcessor@@QEAA@XZ @ 0x180028540
 * Callers:
 *     ??$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18002890C (--$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x180028780 (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x1800288DC (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800B0B2C (-Reset@RayStabilizer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
MPCMouseProcessor *__fastcall MPCMouseProcessor::MPCMouseProcessor(MPCMouseProcessor *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  RayStabilizer *v5; // rcx

  v2 = (_QWORD *)((char *)this + 8);
  MPCInputProviderBase::MPCInputProviderBase((MPCMouseProcessor *)((char *)this + 16));
  *((_DWORD *)this + 919) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `IRawInputProvider'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMouseProcessorForwarding,MPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MPCMouseProcessor::`vftable'{for `IRawInputProvider'};
  *v2 = &MPCMouseProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMouseProcessorForwarding,MPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCMouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &MPCMouseProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_QWORD *)this + 460) = 0LL;
  *((_QWORD *)this + 461) = 0LL;
  *((_QWORD *)this + 462) = 0LL;
  *((_QWORD *)this + 463) = 0LL;
  *((_QWORD *)this + 464) = 0LL;
  memset_0((char *)this + 3720, 0, 0x60CuLL);
  *((_DWORD *)this + 932) = 1548;
  *((_WORD *)this + 2634) = 1;
  *((_QWORD *)this + 659) = 0LL;
  *((_QWORD *)this + 660) = 0LL;
  *((_QWORD *)this + 661) = 0LL;
  *((_QWORD *)this + 662) = 0LL;
  *((_QWORD *)this + 663) = 0LL;
  *((_QWORD *)this + 664) = 0LL;
  *((_QWORD *)this + 665) = 0LL;
  *((_QWORD *)this + 666) = 0LL;
  *((_DWORD *)this + 1334) = 0;
  *((_QWORD *)this + 668) = 0LL;
  *((_WORD *)this + 2676) = 0;
  *(_QWORD *)((char *)this + 5356) = 0LL;
  *(_QWORD *)((char *)this + 5364) = 0LL;
  *((_DWORD *)this + 1343) = 0;
  *((_QWORD *)this + 672) = 0LL;
  *((_QWORD *)this + 673) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 672) = v3;
  *((_WORD *)this + 2696) = 1;
  *(_QWORD *)((char *)this + 5396) = 0LL;
  *((_DWORD *)this + 1351) = 0;
  *((_QWORD *)this + 676) = 0LL;
  *((_QWORD *)this + 677) = 0LL;
  *((_WORD *)this + 2712) = 0;
  *((_QWORD *)this + 679) = 0LL;
  *((_QWORD *)this + 680) = 0LL;
  memset_0((char *)this + 5448, 0, 0xBC0uLL);
  *((_DWORD *)this + 1368) = 3008;
  *((_QWORD *)this + 1057) = 0LL;
  *((_QWORD *)this + 1058) = 0LL;
  *((_DWORD *)this + 2118) = 0;
  if ( *((_DWORD *)this + 133) != 1 )
  {
    *((_DWORD *)this + 133) = 1;
    RayStabilizer::CalculateMaximumSize((MPCMouseProcessor *)((char *)this + 488));
    RayStabilizer::Reset(v5);
  }
  return this;
}
