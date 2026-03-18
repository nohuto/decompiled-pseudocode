/*
 * XREFs of ?ReflectState@tagWND@@QEAAX_NW4WindowPrivateStates@@@Z @ 0x1C020AD58
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall tagWND::ReflectState(__int64 a1, char a2, int a3)
{
  if ( a2 )
    *(_DWORD *)(a1 + 320) |= a3;
  else
    *(_DWORD *)(a1 + 320) &= ~a3;
}
