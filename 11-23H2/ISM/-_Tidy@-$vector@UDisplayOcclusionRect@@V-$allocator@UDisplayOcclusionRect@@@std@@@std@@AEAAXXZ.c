/*
 * XREFs of ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x180116258
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18001C2E0 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x1800318E4 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ??1DisplayOcclusionContextMessage@@QEAA@XZ @ 0x1801160D0 (--1DisplayOcclusionContextMessage@@QEAA@XZ.c)
 *     ??_GOcclusionRectListProxy@@UEAAPEAXI@Z @ 0x180149800 (--_GOcclusionRectListProxy@@UEAAPEAXI@Z.c)
 *     ??_G?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x18014C240 (--_G-$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z.c)
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x1801BC654 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessa.c)
 *     ??_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z @ 0x1801BCA80 (--_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801BCADC (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 *     ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801BCCA0 (-GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DisplayOcclusionRect>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
