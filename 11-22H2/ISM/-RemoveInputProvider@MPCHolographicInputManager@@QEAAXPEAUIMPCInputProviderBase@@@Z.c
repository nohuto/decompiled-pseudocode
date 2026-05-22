/*
 * XREFs of ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800C8FBC
 * Callers:
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800D6EA0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IMPCInputProviderBase_________lambda_a8bd3f77500581b3abf4cbfc08695dab___ @ 0x1800C5804 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--W_ea_1800C5804.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x1800C94CC (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?clear@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800C9F34 (-clear@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1800C9F60 (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 */

void __fastcall MPCHolographicInputManager::RemoveInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  __int64 **v2; // rbp
  char *v3; // r12
  __int64 **i; // rsi
  struct IMPCInputProviderBase *v7; // rbx
  struct IMPCInputProviderBase *v8; // rdx
  __int64 *v9; // r8
  __int64 *v10; // rdx
  const char *v11; // r9
  __int64 v12; // r15
  __int64 (__fastcall *v13)(__int64, _QWORD); // rbx
  unsigned int v14; // eax
  int v15; // eax
  int v16[2]; // [rsp+20h] [rbp-38h] BYREF
  struct IMPCInputProviderBase *v17; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 *v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = (__int64 **)*((_QWORD *)this + 414);
  v3 = (char *)this + 3304;
  for ( i = (__int64 **)*((_QWORD *)this + 413); i != v2; ++i )
  {
    v19 = *i;
    v7 = (struct IMPCInputProviderBase *)v19;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v19);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v19);
    if ( a2 == v7 )
      break;
  }
  if ( i != *((__int64 ***)this + 414) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 256LL))(a2) )
    {
      if ( ((*((_QWORD *)this + 451) - *((_QWORD *)this + 450)) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v8 = (struct IMPCInputProviderBase *)*((_QWORD *)this + 418);
        if ( v8 )
          MPCHolographicInputManager::SetProviderPrimary(this, v8);
        else
          std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::clear((char *)this + 3600);
      }
      else
      {
        v9 = (__int64 *)*((_QWORD *)this + 451);
        v10 = (__int64 *)*((_QWORD *)this + 450);
        *(_QWORD *)v16 = this;
        v17 = a2;
        std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IMPCInputProviderBase_________lambda_a8bd3f77500581b3abf4cbfc08695dab___(
          &v19,
          v10,
          v9,
          (__int64)v16);
        if ( v19 == *((__int64 **)this + 451) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xF5,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
            v11);
        std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase((char *)this + 3600, &v19, v19);
      }
    }
    v12 = *((_QWORD *)this + 422);
    if ( v12 )
    {
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 104LL);
      v14 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
      v15 = v13(v12, v14);
      if ( v15 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFD,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v15,
          v16[0]);
    }
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(v3, &v19, i);
  }
  if ( a2 == *((struct IMPCInputProviderBase **)this + 418) )
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 418);
}
