/*
 * XREFs of ?CheckAndActivateWindowResizeHighlight@CTouchProcessor@@AEAAX_KPEAUCPointerCaptureInfo@@@Z @ 0x1C01BFADC
 * Callers:
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C01D54BC (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01D30A4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     EditionTouchResizeAction @ 0x1C023E150 (EditionTouchResizeAction.c)
 *     IsTouchResizeActionSupported @ 0x1C023E2E4 (IsTouchResizeActionSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CheckAndActivateWindowResizeHighlight(
        struct _KTHREAD **this,
        unsigned __int64 a2,
        struct CPointerCaptureInfo *a3)
{
  int v6; // ebx
  CTouchProcessor *v7; // rcx
  unsigned int v8; // r14d
  const struct CPointerMsgData *MsgData; // rax
  const struct CPointerMsgData *v10; // rbx
  const struct CPointerInputFrame *v11; // rax
  __int64 v12; // r8
  int v13; // ebx
  HWND WindowHandle; // rax

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v6 = *((_DWORD *)a3 + 32);
  if ( (unsigned int)(v6 - 10) <= 7 && *(_DWORD *)a3 == 1 )
  {
    if ( *((_DWORD *)a3 + 25) )
    {
      if ( (int)IsTouchResizeActionSupported() >= 0 )
      {
        v8 = v6 - 9;
        MsgData = CTouchProcessor::GetMsgData(v7, a2);
        v10 = MsgData;
        if ( MsgData )
        {
          if ( (*((_DWORD *)MsgData + 9) & 0x10) != 0 )
          {
            v11 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)this, *((_DWORD *)MsgData + 7));
            if ( v11 )
            {
              v12 = *((_QWORD *)v11 + 30);
              v13 = *(_DWORD *)(480LL * *((unsigned int *)v10 + 8) + v12 + 168);
              CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v11, v12);
              if ( v13 == 2 )
              {
                WindowHandle = CInputDest::GetWindowHandle((struct CPointerCaptureInfo *)((char *)a3 + 8));
                EditionTouchResizeAction(WindowHandle, v8, 0LL);
                *((_DWORD *)a3 + 33) |= 1u;
              }
            }
          }
        }
      }
    }
  }
}
