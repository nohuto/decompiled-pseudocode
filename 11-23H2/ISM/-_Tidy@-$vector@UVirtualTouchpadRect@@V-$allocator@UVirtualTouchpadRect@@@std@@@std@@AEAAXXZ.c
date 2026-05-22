/*
 * XREFs of ?_Tidy@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ @ 0x1801162AC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18001C2E0 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x1800318E4 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ??1VirtualTouchpadContextMessage@@QEAA@XZ @ 0x180116158 (--1VirtualTouchpadContextMessage@@QEAA@XZ.c)
 *     ??_ETouchpadRectListProxy@@UEAAPEAXI@Z @ 0x18014AA10 (--_ETouchpadRectListProxy@@UEAAPEAXI@Z.c)
 *     ??_E?$ListPrincipal@UVirtualTouchpadRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x18014C2A0 (--_E-$ListPrincipal@UVirtualTouchpadRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z.c)
 *     ??$?4AEAUVirtualTouchpadContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x1801BBAB4 (--$-4AEAUVirtualTouchpadContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessag.c)
 *     ??1VirtualTouchpadContextProvider@@UEAA@XZ @ 0x1801BBD7C (--1VirtualTouchpadContextProvider@@UEAA@XZ.c)
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x1801BBE04 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801BBF30 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<VirtualTouchpadRect>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
