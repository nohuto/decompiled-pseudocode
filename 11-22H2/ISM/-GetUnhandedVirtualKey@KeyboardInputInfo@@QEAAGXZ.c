/*
 * XREFs of ?GetUnhandedVirtualKey@KeyboardInputInfo@@QEAAGXZ @ 0x1801BF340
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801BF530 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801DE4B0 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KeyboardInputInfo::GetUnhandedVirtualKey(KeyboardInputInfo *this)
{
  if ( (unsigned __int16)(*((_WORD *)this + 30) - 160) > 5u )
    return *((_WORD *)this + 30);
  else
    return (*((unsigned __int16 *)this + 30) - 160) / 2 + 16;
}
