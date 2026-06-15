/*
 * XREFs of ??R_lambda_55ffd9a6dada497864f0060e7c2442fc_@@QEBAJXZ @ 0x140081360
 * Callers:
 *     ??$Do@V_lambda_55ffd9a6dada497864f0060e7c2442fc_@@V_lambda_01f654561f6914b7d349bbf6578065e4_@@@?$InvalidationChecker@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEBV_lambda_55ffd9a6dada497864f0060e7c2442fc_@@AEBV_lambda_01f654561f6914b7d349bbf6578065e4_@@@Z @ 0x14007D7C4 (--$Do@V_lambda_55ffd9a6dada497864f0060e7c2442fc_@@V_lambda_01f654561f6914b7d349bbf6578065e4_@@@-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_55ffd9a6dada497864f0060e7c2442fc_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[5];
  v3 = **v2;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_902972bf_a984_5443_b1c5_2f04a99e1fca, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a1[1]);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v6);
  return (unsigned int)v4;
}
