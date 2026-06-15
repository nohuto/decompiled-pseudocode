/*
 * XREFs of ??$ChainedAposSupportInterface@UIApoAcousticEchoCancellation@@@CCompositeSystemEffect@@AEAA_NXZ @ 0x1800467BC
 * Callers:
 *     ?QueryInterface@CCompositeSystemEffect@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002E7A0 (-QueryInterface@CCompositeSystemEffect@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CCompositeSystemEffect::ChainedAposSupportInterface<IApoAcousticEchoCancellation>(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx
  char v4; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v5[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+68h] [rbp-20h]

  v4 = 0;
  v1 = *a1;
  v5[0] = &std::_Func_impl_no_alloc<_lambda_0710d3cdf540c4cb20e3a91ad1e2b396_,long,IAudioProcessingObject *,_GUID,unsigned int>::`vftable';
  v5[1] = &v4;
  v6 = v5;
  (*(void (__fastcall **)(__int64 *, _QWORD *))(v1 + 40))(a1, v5);
  if ( v6 )
  {
    v2 = v5;
    LOBYTE(v2) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v2);
  }
  return v4;
}
