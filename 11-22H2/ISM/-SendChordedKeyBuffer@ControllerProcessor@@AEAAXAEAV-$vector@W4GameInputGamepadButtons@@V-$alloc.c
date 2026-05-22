/*
 * XREFs of ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x1801A55D4
 * Callers:
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x1801A42A8 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801A361C (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ @ 0x1801A37FC (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendChordedKeyBuffer(ControllerProcessor *this, unsigned int **a2)
{
  unsigned int *v2; // rbx
  __int64 result; // rax
  unsigned int v6; // ebp
  int v7; // ecx

  v2 = *a2;
  result = 0LL;
  while ( v2 != a2[1] )
  {
    v6 = *v2;
    v7 = *v2 & 1;
    if ( v7 != (result & 1) )
    {
      if ( *((_DWORD *)this + 70) )
        ControllerProcessor::BuildAndSendKeyboardInputInfo(this, 0xCFu, v7);
      else
        ControllerProcessor::BuildAndSendMouseInputInfo(this);
    }
    result = v6;
    ++v2;
  }
  return result;
}
