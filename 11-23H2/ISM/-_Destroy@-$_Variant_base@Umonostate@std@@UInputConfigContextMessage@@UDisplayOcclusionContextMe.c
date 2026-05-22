/*
 * XREFs of ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x1800318E4
 * Callers:
 *     ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180031CF0 (-GetCurrentContext@InputConfigContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180031E1C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x1800390D8 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ??1?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAA@XZ @ 0x1801160C4 (--1-$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtu.c)
 *     ?GetCurrentContext@KernelContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180116370 (-GetCurrentContext@KernelContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigContext.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x18014404C (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18014F7B0 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x1801A3920 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ??$?4AEAUVirtualTouchpadContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x1801BBAB4 (--$-4AEAUVirtualTouchpadContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessag.c)
 *     ?Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ @ 0x1801BBE04 (-Broadcast@VirtualTouchpadContextProvider@@AEAAJXZ.c)
 *     ??$?4AEAUDisplayOcclusionContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUDisplayOcclusionContextMessage@@@Z @ 0x1801BC654 (--$-4AEAUDisplayOcclusionContextMessage@@$0A@@-$variant@Umonostate@std@@UInputConfigContextMessa.c)
 *     ?Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ @ 0x1801BCADC (-Broadcast@DisplayOcclusionContextProvider@@AEAAJXZ.c)
 *     ?Initialize@GazeProcessor@@IEAAJXZ @ 0x1801D93B4 (-Initialize@GazeProcessor@@IEAAJXZ.c)
 *     ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801D9690 (-OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
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
