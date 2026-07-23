/*
 * XREFs of XmImmediateEnter @ 0x140533400
 * Callers:
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 * Callees:
 *     XmGetCodeByte @ 0x1403B95F4 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x1403B9850 (XmGetWordImmediate.c)
 */

__int64 __fastcall XmImmediateEnter(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 108) = (unsigned __int16)XmGetWordImmediate(a1);
  *(_DWORD *)(a1 + 104) = XmGetCodeByte(a1) & 0x1F;
  result = 1LL;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  return result;
}
