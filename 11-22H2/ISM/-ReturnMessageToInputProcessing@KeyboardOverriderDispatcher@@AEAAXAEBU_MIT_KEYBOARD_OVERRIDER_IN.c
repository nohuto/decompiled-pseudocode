/*
 * XREFs of ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x18010D77C
 * Callers:
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x18010CD14 (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 *     ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x18010D048 (-DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ.c)
 *     ?InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z @ 0x18010D150 (-InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z.c)
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x18010D530 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

void __fastcall KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        KeyboardOverriderDispatcher *this,
        const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // [rsp+20h] [rbp-19h]
  int v7; // [rsp+30h] [rbp-9h]
  __int128 v8; // [rsp+40h] [rbp+7h] BYREF
  int v9; // [rsp+50h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+2Fh]
  __int128 v11; // [rsp+70h] [rbp+37h]

  LOWORD(v6) = *((_WORD *)a2 + 176);
  DWORD1(v6) = *((_DWORD *)a2 + 89);
  WORD4(v6) = *((_WORD *)a2 + 180);
  HIDWORD(v6) = *((_DWORD *)a2 + 91);
  LOWORD(v7) = *((_WORD *)a2 + 4);
  memset_0(&v8, 0, 0x40uLL);
  v9 = v7;
  v4 = *(_QWORD *)a2;
  v8 = v6;
  v5 = *((_OWORD *)a2 + 21);
  v10 = v4;
  v11 = v5;
  NtMITSynthesizeKeyboardInput(4LL, &v8, (char *)this + 448);
}
