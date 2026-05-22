/*
 * XREFs of ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x18019E3A0
 * Callers:
 *     ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18019E980 (-GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 * Callees:
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x1800FA2C4 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1800FA300 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     ?_Buy_raw@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x18019EFB4 (-_Buy_raw@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x18019EFFC (-_Clear_and_reserve_geometric@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect.c)
 */

__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::operator=<DisplayOcclusionContextMessage &,0>(
        __int64 a1,
        __int64 a2)
{
  _BYTE *v3; // rbp
  char *v4; // rbx
  signed __int64 v5; // rsi
  _BYTE *v6; // r15
  __int64 v7; // rbx
  _BYTE *v8; // rsi
  char *v9; // rbp
  char *v10; // r14
  signed __int64 v11; // rsi
  void *v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]

  if ( *(_BYTE *)(a1 + 24) == 2 )
  {
    if ( a1 != a2 )
    {
      v3 = *(_BYTE **)a2;
      v4 = *(char **)a1;
      v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
      if ( 0x2E8BA2E8BA2E8BA3LL * (v5 >> 4) > (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL
                                                               * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4)) )
      {
        std::vector<DisplayOcclusionRect>::_Clear_and_reserve_geometric(a1);
        v4 = *(char **)a1;
      }
      memmove_0(v4, v3, v5);
      *(_QWORD *)(a1 + 8) = &v4[v5];
    }
  }
  else
  {
    v6 = *(_BYTE **)a2;
    v7 = 0LL;
    v8 = *(_BYTE **)(a2 + 8);
    v9 = 0LL;
    v10 = 0LL;
    v14 = 0LL;
    *(_OWORD *)v13 = 0LL;
    if ( v6 != v8 )
    {
      v11 = v8 - v6;
      std::vector<DisplayOcclusionRect>::_Buy_raw(v13, 0x2E8BA2E8BA2E8BA3LL * (v11 >> 4));
      v9 = (char *)v13[0];
      memmove_0(v13[0], v6, v11);
      v7 = v14;
      v10 = &v9[16 * (v11 >> 4)];
    }
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a1);
    v14 = 0LL;
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)(a1 + 16) = v7;
    *(_OWORD *)v13 = 0LL;
    *(_BYTE *)(a1 + 24) = 2;
    std::vector<DisplayOcclusionRect>::_Tidy((__int64)v13);
  }
  return a1;
}
