/*
 * XREFs of ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801C44CC
 * Callers:
 *     ??_GMPCGamepadProcessor@@UEAAPEAXI@Z @ 0x1801C4830 (--_GMPCGamepadProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800A6AB4 (--R-$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::~MPCGamepadProcessor(MPCGamepadProcessor *this)
{
  _QWORD *v1; // rdi
  std::_Ref_count_base *v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rdx
  void (__fastcall ***v5)(_QWORD, __int64); // rdx
  void *v6; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 536);
  if ( v1 )
  {
    v3 = (std::_Ref_count_base *)v1[3];
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    operator delete(v1);
  }
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 535);
  if ( v4 )
    std::default_delete<MPCButtonHoldHelper>::operator()((__int64)this, v4);
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 534);
  if ( v5 )
    std::default_delete<MPCButtonHoldHelper>::operator()((__int64)this, v5);
  v6 = (void *)*((_QWORD *)this + 462);
  if ( v6 )
    operator delete(v6);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 461);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 460);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 459);
  *((_DWORD *)this + 917) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase((MPCGamepadProcessor *)((char *)this + 8));
}
