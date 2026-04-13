/*
 * XREFs of ??R_lambda_a3129267fbe909d45eab289e5bdfe880_@@QEBAJXZ @ 0x1800C7948
 * Callers:
 *     ??$Do@V_lambda_a3129267fbe909d45eab289e5bdfe880_@@V_lambda_2fb5f425aac08b9a8e2fd4d2691a4bf7_@@@?$InvalidationChecker@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBV_lambda_a3129267fbe909d45eab289e5bdfe880_@@AEBV_lambda_2fb5f425aac08b9a8e2fd4d2691a4bf7_@@@Z @ 0x1800C53A8 (--$Do@V_lambda_a3129267fbe909d45eab289e5bdfe880_@@V_lambda_2fb5f425aac08b9a8e2fd4d2691a4bf7_@@@-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_a3129267fbe909d45eab289e5bdfe880_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[9];
  v3 = **v2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_092b849b_60b1_52be_a44a_6fe8e933cbe4, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a1[1]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  return (unsigned int)v4;
}
