/*
 * XREFs of ?ClearBackBuffer@RenderDevice@Engine@Spectre@@UEAAXUColor@Math@Utils@3@I@Z @ 0x180026000
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetOutput@RenderDevice@Engine@Spectre@@QEBA?AV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@I@Z @ 0x180026618 (-GetOutput@RenderDevice@Engine@Spectre@@QEBA-AV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::RenderDevice::ClearBackBuffer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64, __int64); // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, __int64, __int64); // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+48h] [rbp-20h]
  _BYTE v14[8]; // [rsp+50h] [rbp-18h] BYREF
  std::_Ref_count_base *v15; // [rsp+58h] [rbp-10h]

  Spectre::Engine::RenderDevice::GetOutput(a1, &v12);
  v4 = *(_QWORD *)(a1 + 272);
  v5 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 88LL);
  v6 = v12;
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 32LL))(v12, v14);
  v5(v4, v7, a2);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  v8 = *(_QWORD *)(a1 + 272);
  v9 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 104LL);
  v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 40LL))(v6, v14);
  LOBYTE(v11) = 1;
  v9(v8, v10, v11);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
}
