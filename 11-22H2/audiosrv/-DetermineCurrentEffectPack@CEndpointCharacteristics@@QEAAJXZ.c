/*
 * XREFs of ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180023BF4
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 *     std::_Func_impl_no_alloc__lambda_9e3f88ecf53f091403cb1093f63a2b71__long_CEndpointCharacteristics___::_Do_call @ 0x18010E6D0 (std--_Func_impl_no_alloc__lambda_9e3f88ecf53f091403cb1093f63a2b71__long_CEndpointCh_ea_18010E6D0.c)
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014EBF0 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     _lambda_cffaa754e23da3c99fec38207043a1d7_::operator() @ 0x180023CA4 (_lambda_cffaa754e23da3c99fec38207043a1d7_--operator().c)
 *     _lambda_3cbffa9c2ba16e4ccaddde6c52d0aa22_::operator() @ 0x180025080 (_lambda_3cbffa9c2ba16e4ccaddde6c52d0aa22_--operator().c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::DetermineCurrentEffectPack(CEndpointCharacteristics *this)
{
  unsigned int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-60h] BYREF
  __int128 v4; // [rsp+28h] [rbp-58h] BYREF
  GUID *v5; // [rsp+38h] [rbp-48h]
  __int128 v6; // [rsp+40h] [rbp-40h] BYREF
  int *v7; // [rsp+50h] [rbp-30h]
  char v8; // [rsp+58h] [rbp-28h]
  GUID v9; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  v9 = GUID_00000000_0000_0000_0000_000000000000;
  *(_QWORD *)&v4 = this;
  *((_QWORD *)&v4 + 1) = &v9;
  v6 = v4;
  v7 = (int *)&v3;
  v8 = 1;
  *(_QWORD *)&v4 = this;
  *((_QWORD *)&v4 + 1) = &v3;
  v5 = &v9;
  v1 = lambda_cffaa754e23da3c99fec38207043a1d7_::operator()(&v4);
  v3 = v1;
  v8 = 0;
  lambda_3cbffa9c2ba16e4ccaddde6c52d0aa22_::operator()(&v6);
  return v1;
}
