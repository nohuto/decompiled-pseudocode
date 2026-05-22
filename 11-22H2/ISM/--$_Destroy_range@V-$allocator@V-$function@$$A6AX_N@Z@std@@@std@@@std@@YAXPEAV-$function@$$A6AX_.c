/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800B9658
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&__::_1_::catch$0 @ 0x1800B97A4 (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void___cdecl(bool)__.c)
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@YAPEAV?$function@$$A6AX_N@Z@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800B9858 (--$_Uninitialized_move@PEAV-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@.c)
 *     ??1?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x1800B996C (--1-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@X.c)
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800B99FC (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 *     ?_Change_array@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@2@@std@@AEAAXQEAV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@2@_K1@Z @ 0x1800B9FD4 (-_Change_array@-$vector@V-$function@$$A6AXAEAV-$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Micro.c)
 *     _std::vector_std::function_void___cdecl(Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&)__std::allocator_std::function_void___cdecl(Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&)_____::_Emplace_reallocate_std::function_void___cdecl(Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&)__const_&__::_1_::catch$2 @ 0x180149E94 (_std--vector_std--function_void___cdecl(Microsoft--WRL--ComPtr_BamoInputSystemInter_ea_180149E94.c)
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@2@@std@@YAPEAV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@0@@Z @ 0x180149ED4 (--$_Uninitialized_move@PEAV-$function@$$A6AXAEAV-$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Mic.c)
 *     ??1InputSystemInternalClientConnection@@UEAA@XZ @ 0x180149FC4 (--1InputSystemInternalClientConnection@@UEAA@XZ.c)
 *     ?SetBootstrapProxy@InputSystemInternalClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18014A370 (-SetBootstrapProxy@InputSystemInternalClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004D390 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::function<void (bool)>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v3, a2);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
