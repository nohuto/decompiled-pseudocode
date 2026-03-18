/*
 * XREFs of XmByteImmediate @ 0x140532BC0
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     XmGetImmediateSourceValue @ 0x1403B9514 (XmGetImmediateSourceValue.c)
 */

__int64 __fastcall XmByteImmediate(__int64 a1)
{
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, 0);
  return 1LL;
}
