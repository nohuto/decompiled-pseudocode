/*
 * XREFs of ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801CA344
 * Callers:
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x1801CA664 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x1801CA8BC (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x1801CAA00 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180033488 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180033AE0 (-BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1801242C8 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x1801CAB8C (-_Clear_and_reserve_geometric@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DisplayOcclusionContextProvider::Broadcast(DisplayOcclusionContextProvider *this)
{
  __int64 v2; // rdi
  char *v3; // rdx
  char *v4; // rbx
  const void *v5; // rbx
  signed __int64 v6; // rsi
  const void *v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  void *v11[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  _QWORD v13[3]; // [rsp+38h] [rbp-28h] BYREF
  char v14; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *(_OWORD *)v11 = 0LL;
  v2 = 0LL;
  v12 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  if ( v11 != (void **)((char *)this + 88) )
  {
    v5 = (const void *)*((_QWORD *)this + 11);
    v6 = *((_QWORD *)this + 12) - (_QWORD)v5;
    if ( 0x2E8BA2E8BA2E8BA3LL * (v6 >> 4) )
    {
      std::vector<DisplayOcclusionRect>::_Clear_and_reserve_geometric(v11);
      v2 = v12;
    }
    v7 = v5;
    v4 = (char *)v11[0];
    memmove_0(v11[0], v7, v6);
    v3 = &v4[v6];
  }
  v12 = 0LL;
  v11[1] = 0LL;
  v11[0] = 0LL;
  v13[0] = v4;
  v13[1] = v3;
  v13[2] = v2;
  v14 = 2;
  v8 = SystemContextProvider::BroadcastMessageToObservers((__int64)this, (__int64)v13);
  v9 = v8;
  if ( v8 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\displayocclusioncontextprovider.cpp",
      (const char *)(unsigned int)v8);
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v13);
  std::vector<DisplayOcclusionRect>::_Tidy((__int64)v11);
  return v9;
}
