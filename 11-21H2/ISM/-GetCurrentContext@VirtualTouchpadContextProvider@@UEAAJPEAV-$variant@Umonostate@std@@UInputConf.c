/*
 * XREFs of ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18019DCC0
 * Callers:
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x180135170 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 * Callees:
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007B458 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_Tidy@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ @ 0x1800FA354 (-_Tidy@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ.c)
 *     ??$?4AEAUVirtualTouchpadContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x18019D8B4 (--$-4AEAUVirtualTouchpadContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessag.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@Z @ 0x18019E310 (-_Clear_and_reserve_geometric@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualTouchpadContextProvider::GetCurrentContext(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  void **v5; // rax
  _BYTE *v6; // rbx
  _BYTE *v7; // rsi
  unsigned int v8; // edi
  signed __int64 v9; // rsi
  const void *v10; // rdx
  char *v11; // rbx
  void *v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 88);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
  v15 = v4;
  v5 = (void **)(a1 + 128);
  v6 = *(_BYTE **)(a1 + 128);
  v7 = *(_BYTE **)(a1 + 136);
  if ( v6 == v7 )
  {
    v8 = -2147023728;
  }
  else
  {
    *(_OWORD *)v13 = 0LL;
    v8 = 0;
    v14 = 0LL;
    if ( v13 != v5 )
    {
      v9 = v7 - v6;
      if ( 0xAAAAAAAAAAAAAAABuLL * (v9 >> 3) )
        std::vector<VirtualTouchpadRect>::_Clear_and_reserve_geometric(v13);
      v10 = v6;
      v11 = (char *)v13[0];
      memmove_0(v13[0], v10, v9);
      v13[1] = &v11[v9];
    }
    std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::operator=<VirtualTouchpadContextMessage &,0>(
      a2,
      (__int64)v13);
    std::vector<VirtualTouchpadRect>::_Tidy((__int64)v13);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
  return v8;
}
