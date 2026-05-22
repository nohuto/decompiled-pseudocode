/*
 * XREFs of ?ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800FA9BC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call @ 0x1800FB5E0 (std--_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOA_ea_1800FB5E0.c)
 * Callees:
 *     ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x180002ED8 (-CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInput.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800FE1F4 (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 */

void __fastcall Win32kInterop::ProcessLowLevelKeyboardInputMessage(
        Win32kInterop *this,
        const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *a2)
{
  KeyboardOverriderDispatcher *v4; // rcx
  _DWORD v5[92]; // [rsp+20h] [rbp-188h] BYREF

  memset_0(v5, 0, sizeof(v5));
  v5[0] = 4;
  v5[6] = 368;
  if ( Win32kInterop::CreateKeyboardInputInfo(this, a2, (struct KeyboardInputInfo *)v5) )
  {
    v4 = (KeyboardOverriderDispatcher *)*((_QWORD *)this + 5);
    if ( v4 )
      KeyboardOverriderDispatcher::AddMessage(v4, a2, (struct KeyboardInputInfo *)v5);
  }
}
