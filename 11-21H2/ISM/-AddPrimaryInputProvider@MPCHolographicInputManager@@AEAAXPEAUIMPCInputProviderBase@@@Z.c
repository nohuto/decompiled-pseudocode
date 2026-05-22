/*
 * XREFs of ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800348D0
 * Callers:
 *     ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180034810 (-AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x1800A0CE0 (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800A0E5C (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180034AA0 (--$_Emplace_reallocate@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIM.c)
 *     ?MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KIK@Z @ 0x180034BCC (-MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KIK@Z.c)
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x180034E08 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800908D0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::AddPrimaryInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // r14
  _QWORD *v6; // rcx
  __int64 *v7; // rdx
  int v8; // eax
  MPCManager *v9; // rbx
  unsigned int v10; // ebp
  __int64 v11; // r15
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int64 v14; // rbx
  unsigned int v15; // edi
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  ISMTracing *v18; // rcx
  int v19; // eax
  unsigned int v20; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMPCInputProviderBase *v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = 1;
  v5 = (_QWORD *)((char *)this + 3600);
  v6 = (_QWORD *)*((_QWORD *)this + 450);
  if ( v6 != (_QWORD *)v5[1] && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 328LL))(*v6) == 1 )
    v4 = 2;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a2 + 320LL))(a2, v4);
  v22 = a2;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = (__int64 *)*((_QWORD *)this + 451);
  if ( v7 == *((__int64 **)this + 452) )
  {
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
      v5,
      v7,
      &v22);
  }
  else
  {
    *v7 = 0LL;
    if ( v7 != (__int64 *)&v22 )
    {
      *v7 = (__int64)a2;
      v22 = 0LL;
    }
    v5[1] += 8LL;
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v22);
  MPCHolographicInputManager::UpdateDoubleClickValues(this);
  v8 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2);
  if ( v8 != 0x20000 && *((_QWORD *)this + 418) )
    *((_DWORD *)this + 840) = v8;
  v9 = MPCManager::s_instance;
  v10 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  v11 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 96LL))(a2);
  v12 = **((_QWORD **)v9 + 9);
  v22 = (struct IMPCInputProviderBase *)v12;
  while ( !*(_BYTE *)(v12 + 25) )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v12 + 40) + 32LL))(
            *(_QWORD *)(v12 + 40),
            v11,
            v10);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x124,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v19,
        v20);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v22);
    v12 = (__int64)v22;
  }
  v13 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  v14 = (__int64)(v5[1] - *v5) >> 3;
  v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
  v17 = (_DWORD *)wil::details::static_lazy<ISMTracing>::get(
                    v16,
                    _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( v17 )
  {
    if ( *v17 )
    {
      wil::details::static_lazy<ISMTracing>::get(
        (__int64)v17,
        _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCHolographicInputManager_SetProviderPrimary_(v18, v15, v14 - 1, v13, *((_DWORD *)this + 840));
    }
  }
}
