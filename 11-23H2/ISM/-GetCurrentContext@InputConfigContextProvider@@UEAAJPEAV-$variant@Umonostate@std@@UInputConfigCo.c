/*
 * XREFs of ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180031CF0
 * Callers:
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180031E1C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003CC50 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18014F7B0 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 * Callees:
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x1800318E4 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall InputConfigContextProvider::GetCurrentContext(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 264);
  v4 = *(_QWORD *)(a1 + 256);
  if ( v4 == v2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
      (const char *)0x80070490LL);
    return 2147943568LL;
  }
  else
  {
    *(_QWORD *)&v6 = -1431655765 * (unsigned int)((v2 - v4) >> 3);
    *((_QWORD *)&v6 + 1) = *(_QWORD *)(a1 + 256);
    if ( *(_BYTE *)(a2 + 24) == 1 )
    {
      *(_OWORD *)a2 = v6;
    }
    else
    {
      std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a2);
      *(_OWORD *)a2 = v6;
      *(_BYTE *)(a2 + 24) = 1;
    }
    return 0LL;
  }
}
