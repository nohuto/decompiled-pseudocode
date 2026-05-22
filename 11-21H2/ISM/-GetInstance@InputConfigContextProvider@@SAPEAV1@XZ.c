/*
 * XREFs of ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x180040EF8
 * Callers:
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180029E7C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180040C48 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800880B0 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 *     ?Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ @ 0x18012A118 (-Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x180135170 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180184820 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?Initialize@GazeProcessor@@IEAAJXZ @ 0x1801BB084 (-Initialize@GazeProcessor@@IEAAJXZ.c)
 * Callees:
 *     wil::init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___ @ 0x180040F64 (wil--init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     _Init_thread_footer @ 0x18004AD68 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004ADD0 (_Init_thread_header.c)
 */

struct InputConfigContextProvider *InputConfigContextProvider::GetInstance(void)
{
  if ( dword_180243220 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_180243220);
    if ( dword_180243220 == -1 )
    {
      atexit(InputConfigContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_180243220);
    }
  }
  wil::init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___();
  return qword_180243130;
}
