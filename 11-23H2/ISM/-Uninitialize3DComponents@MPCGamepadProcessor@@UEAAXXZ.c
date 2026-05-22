/*
 * XREFs of ?Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801E5930
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800BE6A0 (--R-$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z.c)
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800C5610 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

void __fastcall MPCGamepadProcessor::Uninitialize3DComponents(MPCGamepadProcessor *this)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rdx
  _QWORD *v4; // rdi
  std::_Ref_count_base *v5; // rcx

  v1 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 530);
  *((_QWORD *)this + 530) = 0LL;
  if ( v1 )
    std::default_delete<MPCButtonHoldHelper>::operator()((__int64)this, v1);
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 531);
  *((_QWORD *)this + 531) = 0LL;
  if ( v3 )
    std::default_delete<MPCButtonHoldHelper>::operator()((__int64)this, v3);
  v4 = (_QWORD *)*((_QWORD *)this + 532);
  *((_QWORD *)this + 532) = 0LL;
  if ( v4 )
  {
    v5 = (std::_Ref_count_base *)v4[3];
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    operator delete(v4);
  }
  MPCInputProviderBase::ClearInputTargets((MPCGamepadProcessor *)((char *)this - 24));
  *((_BYTE *)this + 3547) = 0;
}
