/*
 * XREFs of ??$?4AEAUVirtualTouchpadContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x1801C9354
 * Callers:
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801C97D0 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180033488 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ?_Tidy@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ @ 0x18012431C (-_Tidy@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ.c)
 *     ??0?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801C9558 (--0-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@Z @ 0x1801C9E38 (-_Clear_and_reserve_geometric@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@.c)
 */

__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::operator=<VirtualTouchpadContextMessage &,0>(
        __int64 a1,
        __int64 a2)
{
  const void *v3; // rbp
  signed __int64 v4; // rsi
  char *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 24) == 3 )
  {
    if ( a1 != a2 )
    {
      v3 = *(const void **)a2;
      v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
      if ( 0xAAAAAAAAAAAAAAABuLL * (v4 >> 3) > 0xAAAAAAAAAAAAAAABuLL
                                             * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3) )
        std::vector<VirtualTouchpadRect>::_Clear_and_reserve_geometric(a1);
      v5 = *(char **)a1;
      memmove_0(*(void **)a1, v3, v4);
      *(_QWORD *)(a1 + 8) = &v5[v4];
    }
  }
  else
  {
    std::vector<VirtualTouchpadRect>::vector<VirtualTouchpadRect>(&v9);
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a1);
    v6 = v11;
    v7 = v9;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 16) = v6;
    v11 = 0LL;
    v10 = 0LL;
    v9 = 0LL;
    *(_BYTE *)(a1 + 24) = 3;
    std::vector<VirtualTouchpadRect>::_Tidy((__int64)&v9);
  }
  return a1;
}
