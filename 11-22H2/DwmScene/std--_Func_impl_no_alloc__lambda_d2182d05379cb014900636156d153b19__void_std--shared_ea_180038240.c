/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d2182d05379cb014900636156d153b19__void_std::shared_ptr_Spectre::Engine::Component__const_&_::_Do_call @ 0x180038240
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_d2182d05379cb014900636156d153b19__void_std::shared_ptr_Spectre::Engine::Component__const___::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r10
  _QWORD *v3; // rax
  void (__fastcall *v4)(__int64, _QWORD *); // r8
  __int64 v5; // r9
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v9; // [rsp+50h] [rbp+8h]

  v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v7,
         a2);
  v3 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v8,
         (_QWORD *)(v2 + 8));
  v4(v5, v3);
  v6 = (std::_Ref_count_base *)v9[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
