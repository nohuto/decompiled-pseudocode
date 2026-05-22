/*
 * XREFs of ?_Tidy@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ @ 0x18004E9AC
 * Callers:
 *     ?RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180034034 (-RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@P.c)
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003415C (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x180044A54 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18004BD44 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800A6C78 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV-$function@$$A6AX_.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x1800A6E04 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAX@st.c)
 *     ??1?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@QEAA@XZ @ 0x1800A6F5C (--1-$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@QEAA@XZ.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@0@Z @ 0x1800A7764 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@.c)
 *     ??1?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAA@XZ @ 0x1800F7C34 (--1-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
