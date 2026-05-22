/*
 * XREFs of ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x1801C9EBC
 * Callers:
 *     ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801CA510 (-GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputCon.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180033488 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1801242C8 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     ??0?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801CA224 (--0-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA@AEBV01@@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x1801CAB8C (-_Clear_and_reserve_geometric@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect.c)
 */

__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::operator=<DisplayOcclusionContextMessage &,0>(
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

  if ( *(_BYTE *)(a1 + 24) == 2 )
  {
    if ( a1 != a2 )
    {
      v3 = *(const void **)a2;
      v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
      if ( 0x2E8BA2E8BA2E8BA3LL * (v4 >> 4) > (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL
                                                               * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4)) )
        std::vector<DisplayOcclusionRect>::_Clear_and_reserve_geometric(a1);
      v5 = *(char **)a1;
      memmove_0(*(void **)a1, v3, v4);
      *(_QWORD *)(a1 + 8) = &v5[v4];
    }
  }
  else
  {
    std::vector<DisplayOcclusionRect>::vector<DisplayOcclusionRect>(&v9);
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a1);
    v6 = v11;
    v7 = v9;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 16) = v6;
    v11 = 0LL;
    v10 = 0LL;
    v9 = 0LL;
    *(_BYTE *)(a1 + 24) = 2;
    std::vector<DisplayOcclusionRect>::_Tidy((__int64)&v9);
  }
  return a1;
}
