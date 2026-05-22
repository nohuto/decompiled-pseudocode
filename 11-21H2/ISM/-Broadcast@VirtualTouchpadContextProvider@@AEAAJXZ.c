/*
 * XREFs of ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x18019DB98
 * Callers:
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18019DE54 (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x18019DFE4 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x18019E158 (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 * Callees:
 *     ?BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180029E20 (-BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x1800FA2C4 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?_Tidy@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ @ 0x1800FA354 (-_Tidy@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@Z @ 0x18019E310 (-_Clear_and_reserve_geometric@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualTouchpadContextProvider::Broadcast(VirtualTouchpadContextProvider *this)
{
  __int64 v2; // rsi
  char *v3; // rbx
  char *v4; // rdx
  const void *v5; // rbx
  signed __int64 v6; // rdi
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
  if ( v11 != (void **)((char *)this + 128) )
  {
    v5 = (const void *)*((_QWORD *)this + 16);
    v6 = *((_QWORD *)this + 17) - (_QWORD)v5;
    if ( 0xAAAAAAAAAAAAAAABuLL * (v6 >> 3) )
    {
      std::vector<VirtualTouchpadRect>::_Clear_and_reserve_geometric(v11);
      v2 = v12;
    }
    v7 = v5;
    v3 = (char *)v11[0];
    memmove_0(v11[0], v7, v6);
    v4 = &v3[v6];
  }
  v13[0] = v3;
  v13[1] = v4;
  v13[2] = v2;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  v14 = 3;
  v8 = SystemContextProvider::BroadcastMessageToObservers((__int64)this, (__int64)v13);
  v9 = v8;
  if ( v8 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\virtualtouchpadcontextprovider.cpp",
      (const char *)(unsigned int)v8);
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v13);
  std::vector<VirtualTouchpadRect>::_Tidy((__int64)v11);
  return v9;
}
