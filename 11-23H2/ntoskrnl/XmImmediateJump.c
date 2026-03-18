/*
 * XREFs of XmImmediateJump @ 0x140532F00
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     XmGetLongImmediate @ 0x140399CD8 (XmGetLongImmediate.c)
 *     XmGetWordImmediate @ 0x1403B9670 (XmGetWordImmediate.c)
 */

__int64 __fastcall XmImmediateJump(__int64 a1)
{
  int LongImmediate; // eax

  if ( *(_BYTE *)(a1 + 138) )
    LongImmediate = XmGetLongImmediate(a1);
  else
    LongImmediate = (unsigned __int16)XmGetWordImmediate(a1);
  *(_DWORD *)(a1 + 104) = LongImmediate;
  *(_WORD *)(a1 + 82) = XmGetWordImmediate(a1);
  return 1LL;
}
