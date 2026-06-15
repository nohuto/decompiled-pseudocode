/*
 * XREFs of ??R_lambda_8ef619453896d5e01f26f7f9c9aeedcd_@@QEBAJXZ @ 0x14007441C
 * Callers:
 *     ??$Do@V_lambda_8ef619453896d5e01f26f7f9c9aeedcd_@@V_lambda_b604df33f0504b685457b96bcf3a28c5_@@@?$InvalidationChecker@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEBV_lambda_8ef619453896d5e01f26f7f9c9aeedcd_@@AEBV_lambda_b604df33f0504b685457b96bcf3a28c5_@@@Z @ 0x140070E70 (--$Do@V_lambda_8ef619453896d5e01f26f7f9c9aeedcd_@@V_lambda_b604df33f0504b685457b96bcf3a28c5_@@@-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400295BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_8ef619453896d5e01f26f7f9c9aeedcd_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[5];
  v3 = **v2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_7eeb51c3_d70e_548a_85c2_3cf71b4a124c, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a1[1]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  return (unsigned int)v4;
}
