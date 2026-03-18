/*
 * XREFs of ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C00CBD00
 * Callers:
 *     xxxAddFullScreen @ 0x1C00C9EF4 (xxxAddFullScreen.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 */

void __fastcall RemoveSemiMaximizedState(struct tagWND *a1)
{
  *((_DWORD *)a1 + 80) &= 0xF3FFFFFF;
  SetOrClrWF(0, a1, 0xD910u, 1);
}
