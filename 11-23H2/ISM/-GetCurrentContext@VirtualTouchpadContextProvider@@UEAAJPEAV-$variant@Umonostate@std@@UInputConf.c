/*
 * XREFs of ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801BBF30
 * Callers:
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18014F7B0 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 * Callees:
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800921F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?_Tidy@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ @ 0x1801162AC (-_Tidy@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ.c)
 *     ??$?4AEAUVirtualTouchpadContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x1801BBAB4 (--$-4AEAUVirtualTouchpadContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessag.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@Z @ 0x1801BC5D0 (-_Clear_and_reserve_geometric@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualTouchpadContextProvider::GetCurrentContext(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rbx
  const void *v6; // rbp
  __int64 v7; // rsi
  signed __int64 v9; // rsi
  char *v10; // rbx
  void *v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 88);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
  v13 = v4;
  v5 = a1 + 128;
  v6 = *(const void **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)v5 == v7 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
    return 2147943568LL;
  }
  else
  {
    *(_OWORD *)v11 = 0LL;
    v12 = 0LL;
    if ( v11 != (void **)v5 )
    {
      v9 = v7 - (_QWORD)v6;
      if ( 0xAAAAAAAAAAAAAAABuLL * (v9 >> 3) )
        std::vector<VirtualTouchpadRect>::_Clear_and_reserve_geometric(v11);
      v10 = (char *)v11[0];
      memmove_0(v11[0], v6, v9);
      v11[1] = &v10[v9];
    }
    std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::operator=<VirtualTouchpadContextMessage &,0>(
      a2,
      (__int64)v11);
    std::vector<VirtualTouchpadRect>::_Tidy((__int64)v11);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
}
