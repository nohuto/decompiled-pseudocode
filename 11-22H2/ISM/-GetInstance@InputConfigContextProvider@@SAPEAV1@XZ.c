/*
 * XREFs of ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x180035638
 * Callers:
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x18003360C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180035300 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180038C00 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800B1860 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 *     ?Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ @ 0x180152AE8 (-Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18015DA90 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x1801B1900 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?Initialize@GazeProcessor@@IEAAJXZ @ 0x1801E6C24 (-Initialize@GazeProcessor@@IEAAJXZ.c)
 * Callees:
 *     wil::init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___ @ 0x180032F14 (wil--init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___.c)
 *     atexit @ 0x180056E08 (atexit.c)
 *     _Init_thread_footer @ 0x180057938 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800579A0 (_Init_thread_header.c)
 */

struct InputConfigContextProvider *InputConfigContextProvider::GetInstance(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  v0 = 16LL;
  v1 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_180278710 > *(_DWORD *)(v1 + 16) )
  {
    Init_thread_header(&dword_180278710);
    if ( dword_180278710 == -1 )
    {
      atexit(InputConfigContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_180278710);
    }
  }
  wil::init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___(v1, v0);
  return qword_180278620;
}
