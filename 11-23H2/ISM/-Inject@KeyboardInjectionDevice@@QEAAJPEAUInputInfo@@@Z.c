/*
 * XREFs of ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1801968BC
 * Callers:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801957B8 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180196F10 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180198408 (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 * Callees:
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardInjectionDevice::Inject(KeyboardInjectionDevice *this, struct InputInfo *a2)
{
  __int128 v5; // [rsp+20h] [rbp-68h]
  _BYTE v6[2]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v7; // [rsp+32h] [rbp-56h]
  __int16 v8; // [rsp+34h] [rbp-54h]
  __int128 v9; // [rsp+60h] [rbp-28h]

  if ( !*((_BYTE *)this + 1556) )
    return 2147549183LL;
  memset_0(v6, 0, 0x40uLL);
  v7 = *((_WORD *)a2 + 30);
  v8 = *((_WORD *)a2 + 47);
  *(_QWORD *)&v5 = *((_QWORD *)a2 + 4);
  DWORD2(v5) = *((_DWORD *)this + 2);
  v9 = v5;
  return (unsigned int)NtMITSynthesizeKeyboardInput(8LL, v6, 0LL) != 1 ? 0x8007000D : 0;
}
