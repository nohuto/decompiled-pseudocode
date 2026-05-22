/*
 * XREFs of ?Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801EDD50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800CED9C (--R-$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z.c)
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800D5498 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

void __fastcall MPCSixDofProcessor::Uninitialize3DComponents(MPCSixDofProcessor *this)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rdx
  _QWORD *v9; // rdi
  std::_Ref_count_base *v10; // rcx
  _QWORD *v11; // rdi
  std::_Ref_count_base *v12; // rcx

  v1 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 509);
  *((_QWORD *)this + 509) = 0LL;
  if ( v1 )
    std::default_delete<MPCButtonHoldHelper>::operator()((__int64)this, v1);
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 510);
  *((_QWORD *)this + 510) = 0LL;
  if ( v3 )
    std::default_delete<MPCButtonHoldHelper>::operator()((__int64)this, v3);
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 511);
  *((_QWORD *)this + 511) = 0LL;
  if ( v4 )
    std::default_delete<MPCButtonHoldHelper>::operator()((__int64)this, v4);
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 512);
  *((_QWORD *)this + 512) = 0LL;
  if ( v5 )
    std::default_delete<MPCButtonHoldHelper>::operator()((__int64)this, v5);
  v6 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 513);
  *((_QWORD *)this + 513) = 0LL;
  if ( v6 )
    std::default_delete<MPCButtonHoldHelper>::operator()((__int64)this, v6);
  v7 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 514);
  *((_QWORD *)this + 514) = 0LL;
  if ( v7 )
    std::default_delete<MPCButtonHoldHelper>::operator()((__int64)this, v7);
  v8 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 515);
  *((_QWORD *)this + 515) = 0LL;
  if ( v8 )
    std::default_delete<MPCButtonHoldHelper>::operator()((__int64)this, v8);
  v9 = (_QWORD *)*((_QWORD *)this + 516);
  *((_QWORD *)this + 516) = 0LL;
  if ( v9 )
  {
    v10 = (std::_Ref_count_base *)v9[3];
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    operator delete(v9);
  }
  v11 = (_QWORD *)*((_QWORD *)this + 517);
  *((_QWORD *)this + 517) = 0LL;
  if ( v11 )
  {
    v12 = (std::_Ref_count_base *)v11[3];
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    operator delete(v11);
  }
  MPCInputProviderBase::ClearInputTargets((MPCSixDofProcessor *)((char *)this - 24));
  *((_BYTE *)this + 3547) = 0;
}
