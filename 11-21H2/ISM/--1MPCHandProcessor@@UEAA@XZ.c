/*
 * XREFs of ??1MPCHandProcessor@@UEAA@XZ @ 0x1800A6584
 * Callers:
 *     ??_GMPCHandProcessor@@UEAAPEAXI@Z @ 0x1800A6B40 (--_GMPCHandProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800A6AB4 (--R-$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z.c)
 */

void __fastcall MPCHandProcessor::~MPCHandProcessor(MPCHandProcessor *this)
{
  _QWORD *v2; // rdi
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // rdi
  std::_Ref_count_base *v5; // rcx

  *(_QWORD *)this = &MPCHandProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCHandProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( *((_QWORD *)this + 461) )
    std::default_delete<MPCButtonHoldHelper>::operator()();
  v2 = (_QWORD *)*((_QWORD *)this + 460);
  if ( v2 )
  {
    v3 = (std::_Ref_count_base *)v2[3];
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    operator delete(v2);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 459);
  if ( v4 )
  {
    v5 = (std::_Ref_count_base *)v4[3];
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    operator delete(v4);
  }
  *((_DWORD *)this + 915) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
}
