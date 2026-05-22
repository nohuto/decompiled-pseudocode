/*
 * XREFs of ?Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800C0510
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800BE6A0 (--R-$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z.c)
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800C5610 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

void __fastcall MPCHandProcessor::Uninitialize3DComponents(MPCHandProcessor *this)
{
  _QWORD *v1; // rdi
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // rdi
  std::_Ref_count_base *v5; // rcx
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rdx

  v1 = (_QWORD *)*((_QWORD *)this + 456);
  *((_QWORD *)this + 456) = 0LL;
  if ( v1 )
  {
    v3 = (std::_Ref_count_base *)v1[3];
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    operator delete(v1);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 457);
  *((_QWORD *)this + 457) = 0LL;
  if ( v4 )
  {
    v5 = (std::_Ref_count_base *)v4[3];
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    operator delete(v4);
  }
  v6 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 458);
  *((_QWORD *)this + 458) = 0LL;
  if ( v6 )
    std::default_delete<MPCButtonHoldHelper>::operator()((__int64)this, v6);
  MPCInputProviderBase::ClearInputTargets((MPCHandProcessor *)((char *)this - 24));
  *((_BYTE *)this + 3547) = 0;
}
