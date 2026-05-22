/*
 * XREFs of ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x1801C96A4
 * Callers:
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801C9970 (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x1801C9B04 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801C9C7C (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180033488 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180033AE0 (-BroadcastMessageToObservers@SystemContextProvider@@IEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ?_Tidy@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ @ 0x18012431C (-_Tidy@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@Z @ 0x1801C9E38 (-_Clear_and_reserve_geometric@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualTouchpadContextProvider::Broadcast(VirtualTouchpadContextProvider *this)
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
  v14 = 3;
  v8 = SystemContextProvider::BroadcastMessageToObservers((__int64)this, (__int64)v13);
  v9 = v8;
  if ( v8 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\virtualtouchpadcontextprovider.cpp",
      (const char *)(unsigned int)v8);
  std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy((__int64)v13);
  std::vector<VirtualTouchpadRect>::_Tidy((__int64)v11);
  return v9;
}
