/*
 * XREFs of ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C003C9D0
 * Callers:
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C003CA14 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C00415CC (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 * Callees:
 *     ?Now@EventTime@CMouseProcessor@@SA?AU12@XZ @ 0x1C003C6D4 (-Now@EventTime@CMouseProcessor@@SA-AU12@XZ.c)
 */

void __fastcall CMouseProcessor::MouseMoveTimes::EnsureMoveTime(LARGE_INTEGER *this)
{
  LARGE_INTEGER *v2; // rax
  LARGE_INTEGER v3[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !this[1].QuadPart )
  {
    this->QuadPart = 0LL;
LABEL_3:
    v2 = CMouseProcessor::EventTime::Now(v3);
    *(_OWORD *)&this->LowPart = *(_OWORD *)&v2->LowPart;
    this[2] = v2[2];
    return;
  }
  if ( !this->QuadPart )
    goto LABEL_3;
}
