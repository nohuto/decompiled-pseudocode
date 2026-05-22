/*
 * XREFs of ?_Reset_move@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x18004D310
 * Callers:
 *     ??$?4V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@std@@$0A@@?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAAAEAV01@$$QEAV?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@1@@Z @ 0x18003ECA4 (--$-4V-$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU-$_Ph@$00.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18003F364 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003F47C (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x1800453B8 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@YAPEAV?$function@$$A6AX_N@Z@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800B9858 (--$_Uninitialized_move@PEAV-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      v6 = *(_QWORD *)(a2 + 56);
      if ( v6 )
      {
        LOBYTE(v5) = v6 != a2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
