/*
 * XREFs of ?AddSlaveToken@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAHAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@std@@@Z @ 0x1800DFFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_67085dfa66b26479f227a386c4cd5720__void_::_Func_impl_no_alloc__lambda_67085dfa66b26479f227a386c4cd5720__void___lambda_67085dfa66b26479f227a386c4cd5720__0_ @ 0x1800DFC58 (std--_Func_impl_no_alloc__lambda_67085dfa66b26479f227a386c4cd5720__void_--_Func_impl_no_alloc__l.c)
 *     std::_Test_callable__lambda_67085dfa66b26479f227a386c4cd5720___ @ 0x1800DFC84 (std--_Test_callable__lambda_67085dfa66b26479f227a386c4cd5720___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Utils::Internal::SimpleCancellationToken::AddSlaveToken(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v3)(__int64, _QWORD *); // rdi
  __int64 v5; // [rsp+20h] [rbp-58h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-50h]
  _QWORD v7[7]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+68h] [rbp-10h]

  v3 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 48LL);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v5, a2);
  v8 = 0LL;
  if ( std::_Test_callable__lambda_67085dfa66b26479f227a386c4cd5720___() )
    v8 = std::_Func_impl_no_alloc__lambda_67085dfa66b26479f227a386c4cd5720__void_::_Func_impl_no_alloc__lambda_67085dfa66b26479f227a386c4cd5720__void___lambda_67085dfa66b26479f227a386c4cd5720__0_(
           v7,
           &v5);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return v3(a1, v7);
}
