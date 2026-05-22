/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x18006DB30
 * Callers:
 *     ?RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1800677B0 (-RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x180067818 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180072EC4 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 *     ?OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800746D0 (-OnStreamEnded@ShellGesturesProcessor@@UEAAJPEAVInputContext@@PEAUContextualProcessorResponse@@@.c)
 *     ?StopProcess@InputProcessManager@@QEAAXXZ @ 0x180076E14 (-StopProcess@InputProcessManager@@QEAAXXZ.c)
 *     ?FindFrame@PointerInputMediator@@CA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@I@Z @ 0x18010B97C (-FindFrame@PointerInputMediator@@CA-AV-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPo.c)
 *     ?SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180163B88 (-SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Interna.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

int __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3)
{
  FARPROC ProcAddress; // rax
  int v7; // [rsp+20h] [rbp-40h] BYREF
  __int16 *v8; // [rsp+28h] [rbp-38h]
  void *v9; // [rsp+30h] [rbp-30h]
  char v10; // [rsp+38h] [rbp-28h]
  const char *v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+4Ch] [rbp-14h]
  char v14; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+8h]
  HMODULE phModule; // [rsp+70h] [rbp+10h] BYREF

  phModule = 0LL;
  LODWORD(ProcAddress) = GetModuleHandleExA(2u, "ntdll.dll", &phModule);
  if ( (_DWORD)ProcAddress )
  {
    if ( phModule )
    {
      ProcAddress = GetProcAddress(phModule, "MicrosoftTelemetryAssertTriggeredUM");
      if ( ProcAddress )
      {
        v7 = 11;
        v8 = &_ImageBase;
        v9 = retaddr;
        v11 = "IXPTelAssert";
        v14 = 1;
        v10 = 1;
        v12 = a2;
        v13 = a3;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(int *))ProcAddress)(&v7);
      }
    }
  }
  return (int)ProcAddress;
}
