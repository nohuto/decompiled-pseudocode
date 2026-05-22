/*
 * XREFs of ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x180039408
 * Callers:
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x180031E1C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x1800390D8 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003CC50 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x18009F310 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 *     ?Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ @ 0x1801447F8 (-Initialize@VirtualTouchpadControllerProxy@@QEAAJXZ.c)
 *     ?RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAVBamoSystemContextEndpointProxy@@@Z @ 0x18014F7B0 (-RegisterSystemContextEndpoint@SystemContextManager@@UEAAJPEAVBamoSystemContextManagerStub@@PEAV.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x1801A3920 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?Initialize@GazeProcessor@@IEAAJXZ @ 0x1801D93B4 (-Initialize@GazeProcessor@@IEAAJXZ.c)
 * Callees:
 *     wil::init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___ @ 0x180051ECC (wil--init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     _Init_thread_footer @ 0x180056BA8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180056C10 (_Init_thread_header.c)
 */

struct InputConfigContextProvider *InputConfigContextProvider::GetInstance(void)
{
  if ( dword_180269320 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_180269320);
    if ( dword_180269320 == -1 )
    {
      atexit(InputConfigContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_180269320);
    }
  }
  wil::init_once_failfast__lambda_008aa74523cf7437dacc2be58aae67bd___();
  return qword_180269240;
}
