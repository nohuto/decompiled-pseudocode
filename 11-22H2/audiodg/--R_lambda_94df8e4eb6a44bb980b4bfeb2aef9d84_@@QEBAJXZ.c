/*
 * XREFs of ??R_lambda_94df8e4eb6a44bb980b4bfeb2aef9d84_@@QEBAJXZ @ 0x140081654
 * Callers:
 *     ??$Do@V_lambda_94df8e4eb6a44bb980b4bfeb2aef9d84_@@V_lambda_7791ff3cd8f3839e4c2c3626364f4546_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_94df8e4eb6a44bb980b4bfeb2aef9d84_@@AEBV_lambda_7791ff3cd8f3839e4c2c3626364f4546_@@@Z @ 0x14007DBB4 (--$Do@V_lambda_94df8e4eb6a44bb980b4bfeb2aef9d84_@@V_lambda_7791ff3cd8f3839e4c2c3626364f4546_@@@-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_94df8e4eb6a44bb980b4bfeb2aef9d84_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[5];
  v3 = **v2;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_f0a9a686_2b1f_546a_8339_58c01533ec25, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a1[1]);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v6);
  return (unsigned int)v4;
}
