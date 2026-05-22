/*
 * XREFs of ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800F8DAC
 * Callers:
 *     ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x180002ED8 (-CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInput.c)
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800FEA10 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     memcpy_s @ 0x180035778 (memcpy_s.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800957B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

unsigned __int16 *__fastcall Win32kInterop::CreateKeyboardInputInfo(unsigned __int16 *a1, __int64 a2)
{
  _DWORD *v4; // rax

  memset_0(a1, 0, 0x170uLL);
  *(_DWORD *)a1 = 4;
  v4 = (_DWORD *)(a2 + 344);
  *((_DWORD *)a1 + 6) = 368;
  if ( *(_QWORD *)a2 )
    v4 = (_DWORD *)a2;
  *((_DWORD *)a1 + 1) = *v4;
  *((_QWORD *)a1 + 4) = *(_QWORD *)(a2 + 336);
  a1[178] = *(_WORD *)(a2 + 332);
  *((_DWORD *)a1 + 2) = *(_DWORD *)(a2 + 312);
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 320);
  *((_BYTE *)a1 + 358) = *(_DWORD *)(a2 + 328) != 0;
  a1[28] = *(_WORD *)(a2 + 8);
  a1[29] = *(_WORD *)(a2 + 10);
  a1[30] = *(_WORD *)(a2 + 12);
  a1[47] = *(_WORD *)(a2 + 270);
  *((_DWORD *)a1 + 88) = *(_DWORD *)(a2 + 272);
  *((_BYTE *)a1 + 49) = 1;
  StringCchCopyW(a1 + 31, 0x10uLL, (size_t *)(a2 + 276));
  memcpy_s(a1 + 48, 0x100uLL, (const void *const)(a2 + 14), 0x100uLL);
  return a1;
}
