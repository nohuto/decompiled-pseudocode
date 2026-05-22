/*
 * XREFs of ?GetCurrentContext@DisplayOcclusionContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18019E980
 * Callers:
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x180135170 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 * Callees:
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1800FA300 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x18019E3A0 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessa.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x18019EFFC (-_Clear_and_reserve_geometric@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DisplayOcclusionContextProvider::GetCurrentContext(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  void *v4; // rbx
  __int64 v5; // rdi
  signed __int64 v7; // rdi
  const void *v8; // rdx
  char *v9; // rbx
  void *v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v3 = a1 + 88;
  v4 = *(void **)v3;
  v5 = *(_QWORD *)(v3 + 8);
  if ( *(_QWORD *)v3 == v5 )
    return 2147943568LL;
  *(_OWORD *)v10 = 0LL;
  v11 = 0LL;
  if ( v10 != (void **)v3 )
  {
    v7 = v5 - (_QWORD)v4;
    if ( 0x2E8BA2E8BA2E8BA3LL * (v7 >> 4) )
      std::vector<DisplayOcclusionRect>::_Clear_and_reserve_geometric(v10);
    v8 = v4;
    v9 = (char *)v10[0];
    memmove_0(v10[0], v8, v7);
    v10[1] = &v9[v7];
  }
  std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::operator=<DisplayOcclusionContextMessage &,0>(
    a2,
    (__int64)v10);
  std::vector<DisplayOcclusionRect>::_Tidy((__int64)v10);
  return 0LL;
}
