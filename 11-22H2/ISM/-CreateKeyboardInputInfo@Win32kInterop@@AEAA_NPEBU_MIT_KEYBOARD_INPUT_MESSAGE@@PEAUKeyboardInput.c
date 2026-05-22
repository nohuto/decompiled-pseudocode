/*
 * XREFs of ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x180003348
 * Callers:
 *     ?ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x180003280 (-ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 *     ?ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x180109448 (-ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSA.c)
 * Callees:
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800033B8 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x18010782C (-CreateKeyboardInputInfo@Win32kInterop@@SA-AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@.c)
 */

bool __fastcall Win32kInterop::CreateKeyboardInputInfo(
        Win32kInterop *this,
        const struct _MIT_KEYBOARD_INPUT_MESSAGE *a2,
        struct KeyboardInputInfo *a3)
{
  unsigned int *v3; // rax
  bool result; // al
  _OWORD *KeyboardInputInfo; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _BYTE v11[368]; // [rsp+20h] [rbp-188h] BYREF

  v3 = (unsigned int *)((char *)a2 + 344);
  if ( *(_QWORD *)a2 )
    v3 = (unsigned int *)a2;
  result = Win32kInterop::IsDeviceAttached(this, *v3, 1);
  if ( result )
  {
    KeyboardInputInfo = (_OWORD *)Win32kInterop::CreateKeyboardInputInfo(v11, a2);
    v8 = 2LL;
    do
    {
      *(_OWORD *)a3 = *KeyboardInputInfo;
      *((_OWORD *)a3 + 1) = KeyboardInputInfo[1];
      *((_OWORD *)a3 + 2) = KeyboardInputInfo[2];
      *((_OWORD *)a3 + 3) = KeyboardInputInfo[3];
      *((_OWORD *)a3 + 4) = KeyboardInputInfo[4];
      *((_OWORD *)a3 + 5) = KeyboardInputInfo[5];
      *((_OWORD *)a3 + 6) = KeyboardInputInfo[6];
      a3 = (struct KeyboardInputInfo *)((char *)a3 + 128);
      v9 = KeyboardInputInfo[7];
      KeyboardInputInfo += 8;
      *((_OWORD *)a3 - 1) = v9;
      --v8;
    }
    while ( v8 );
    *(_OWORD *)a3 = *KeyboardInputInfo;
    *((_OWORD *)a3 + 1) = KeyboardInputInfo[1];
    *((_OWORD *)a3 + 2) = KeyboardInputInfo[2];
    *((_OWORD *)a3 + 3) = KeyboardInputInfo[3];
    *((_OWORD *)a3 + 4) = KeyboardInputInfo[4];
    *((_OWORD *)a3 + 5) = KeyboardInputInfo[5];
    v10 = KeyboardInputInfo[6];
    result = 1;
    *((_OWORD *)a3 + 6) = v10;
  }
  return result;
}
