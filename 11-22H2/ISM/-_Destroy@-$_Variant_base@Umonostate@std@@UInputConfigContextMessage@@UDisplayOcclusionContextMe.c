/*
 * XREFs of ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x180033488
 * Callers:
 *     ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1800334E0 (-GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x18003360C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180035300 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ??1?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAA@XZ @ 0x180124134 (--1-$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtu.c)
 *     ?GetCurrentContext@KernelContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801243E0 (-GetCurrentContext@KernelContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigContext.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18015233C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18015DA90 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x1801B1900 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ??$?4AEAUVirtualTouchpadContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x1801C9354 (--$-4AEAUVirtualTouchpadContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessag.c)
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x1801C96A4 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x1801C9EBC (--$-4AEAUDisplayOcclusionContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessa.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801CA344 (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 *     ?Initialize@GazeProcessor@@IEAAJXZ @ 0x1801E6C24 (-Initialize@GazeProcessor@@IEAAJXZ.c)
 *     ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801E6F00 (-OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(
        __int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)(*(char *)(a1 + 24) + 1);
  if ( *(char *)(a1 + 24) != -1 )
  {
    result = (unsigned int)*(char *)(a1 + 24);
    if ( *(_BYTE *)(a1 + 24) )
    {
      result = (unsigned int)(result - 1);
      if ( (_DWORD)result )
      {
        result = (unsigned int)(result - 1);
        if ( (_DWORD)result )
        {
          if ( (_DWORD)result == 1 )
            return std::vector<VirtualTouchpadRect>::_Tidy(a1);
        }
        else
        {
          return std::vector<DisplayOcclusionRect>::_Tidy(a1);
        }
      }
    }
  }
  return result;
}
