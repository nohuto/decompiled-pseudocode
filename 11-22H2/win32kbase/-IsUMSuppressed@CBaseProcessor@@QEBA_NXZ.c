/*
 * XREFs of ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C00E5CDE
 * Callers:
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C00E5EBA (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MouseP.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9484 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FA328 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1C01FC8F4 (-IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ.c)
 */

char __fastcall CBaseProcessor::IsUMSuppressed(CBaseProcessor *this)
{
  bool IsInputThreadDesktopActive; // al
  char v3; // dl

  IsInputThreadDesktopActive = CMasterInputThread::IsInputThreadDesktopActive(this);
  v3 = 0;
  if ( IsInputThreadDesktopActive )
    return (*((_DWORD *)this + 2) & 4) != 0;
  return v3;
}
