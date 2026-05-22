/*
 * XREFs of ??0MPCInputProviderBase@@QEAA@XZ @ 0x1800514D4
 * Callers:
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x18003C118 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BDF80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E2E48 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderB.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x180051630 (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 */

MPCInputProviderBase *__fastcall MPCInputProviderBase::MPCInputProviderBase(MPCInputProviderBase *this)
{
  _QWORD *v2; // rax
  MPCInputProviderBase *result; // rax

  *(_QWORD *)this = &MPCInputProviderBase::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCInputProviderBase::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  memset_0((char *)this + 56, 0, 0x1A0uLL);
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v2[1] = 0LL;
  *((_QWORD *)this + 59) = v2;
  *v2 = (char *)this + 472;
  *(_OWORD *)((char *)this + 520) = 0LL;
  *((_DWORD *)this + 129) = 1;
  *(_OWORD *)((char *)this + 536) = 0LL;
  *((_BYTE *)this + 552) = 0;
  RayStabilizer::CalculateMaximumSize((MPCInputProviderBase *)((char *)this + 472));
  memset_0((char *)this + 560, 0, 0xBC0uLL);
  *((_DWORD *)this + 146) = 3008;
  result = this;
  *((_DWORD *)this + 892) = 0;
  *((_WORD *)this + 1786) = 0;
  *(_OWORD *)((char *)this + 3576) = 0LL;
  *(_OWORD *)((char *)this + 3592) = 0LL;
  *(_OWORD *)((char *)this + 3608) = 0LL;
  *((_DWORD *)this + 894) = 1106247680;
  *((_BYTE *)this + 3580) = 0;
  *((_QWORD *)this + 448) = 0LL;
  *((_DWORD *)this + 898) = 0;
  *((_QWORD *)this + 450) = 0LL;
  *((_QWORD *)this + 451) = 0LL;
  *((_QWORD *)this + 452) = 0LL;
  *((_QWORD *)this + 453) = 0LL;
  *((_QWORD *)this + 454) = 0LL;
  *((_QWORD *)this + 455) = 0LL;
  *((_BYTE *)this + 3648) = 0;
  *((_DWORD *)this + 913) = 1;
  return result;
}
