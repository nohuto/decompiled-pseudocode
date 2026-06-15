/*
 * XREFs of ??R_lambda_1b9955d17458c359845ab36b6c965754_@@QEBAJXZ @ 0x14008104C
 * Callers:
 *     ??$Do@V_lambda_1b9955d17458c359845ab36b6c965754_@@V_lambda_fdd3247f1e4a88361f0e19a4b3c49020_@@@?$InvalidationChecker@V?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_1b9955d17458c359845ab36b6c965754_@@AEBV_lambda_fdd3247f1e4a88361f0e19a4b3c49020_@@@Z @ 0x14007D020 (--$Do@V_lambda_1b9955d17458c359845ab36b6c965754_@@V_lambda_fdd3247f1e4a88361f0e19a4b3c49020_@@@-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_1b9955d17458c359845ab36b6c965754_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[5];
  v3 = **v2;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_af4c50bf_f8e2_5d7e_a04c_d1dae1b23c36, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a1[1]);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v6);
  return (unsigned int)v4;
}
