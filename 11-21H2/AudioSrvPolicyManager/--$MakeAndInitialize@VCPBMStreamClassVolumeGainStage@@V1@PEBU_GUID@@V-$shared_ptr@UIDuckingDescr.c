/*
 * XREFs of ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18000EA60
 * Callers:
 *     _lambda_1638cd6ed2d4615662b3f222b9161cb6_::operator() @ 0x18000F6B8 (_lambda_1638cd6ed2d4615662b3f222b9161cb6_--operator().c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x180037B9C (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ @ 0x180008AC0 (--1-$shared_ptr@UIDuckingDescriptor@@@std@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
        _QWORD *a1,
        _OWORD **a2,
        __int64 *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _OWORD *v11; // rsi
  signed __int32 v12; // eax
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]

  *a1 = 0LL;
  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
    return 2147942414LL;
  *(_QWORD *)v6 = &CGainStage::`vftable';
  v6[9] = 1;
  v6[13] = 1;
  *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CGainStage>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v7 = &CPBMStreamClassVolumeGainStage::`vftable';
  *((_QWORD *)v7 + 7) = 0LL;
  *((_QWORD *)v7 + 8) = 0LL;
  v9 = *a3;
  v14 = *a3;
  v15 = a3[1];
  v10 = v15;
  *a3 = 0LL;
  a3[1] = 0LL;
  v11 = *a2;
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  v13[0] = *((_QWORD *)v7 + 7);
  *((_QWORD *)v7 + 7) = v9;
  v13[1] = *((_QWORD *)v7 + 8);
  *((_QWORD *)v7 + 8) = v10;
  std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)v13);
  *((_OWORD *)v7 + 1) = *v11;
  *((_BYTE *)v7 + 32) = 0;
  *((_QWORD *)v7 + 5) = 0LL;
  std::shared_ptr<IDuckingDescriptor>::~shared_ptr<IDuckingDescriptor>((__int64)&v14);
  do
    v12 = v7[13];
  while ( v12 != 0x7FFFFFFF && v12 != _InterlockedCompareExchange(v7 + 13, v12 + 1, v12) );
  *a1 = v7;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(
    v7,
    0x7FFFFFFFLL);
  return 0LL;
}
