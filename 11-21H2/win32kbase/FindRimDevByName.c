/*
 * XREFs of FindRimDevByName @ 0x1C01F0198
 * Callers:
 *     RIMVirtCreateDev @ 0x1C017C948 (RIMVirtCreateDev.c)
 *     ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDA20 (-ivHandleKeyboardInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE030 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE470 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EEBD0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     <none>
 */

const UNICODE_STRING *__fastcall FindRimDevByName(PCUNICODE_STRING String1, __int64 a2)
{
  const UNICODE_STRING *i; // rbx

  for ( i = *(const UNICODE_STRING **)(a2 + 424); ; i = (const UNICODE_STRING *)i[2].Buffer )
  {
    if ( !i )
      return 0LL;
    if ( RtlEqualUnicodeString(String1, i + 13, 0) )
      break;
  }
  return i;
}
