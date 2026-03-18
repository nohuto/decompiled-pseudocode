/*
 * XREFs of _strtoui64_0 @ 0x1C0001A79
 * Callers:
 *     DebugExpr @ 0x1C004D850 (DebugExpr.c)
 *     DebugInPort @ 0x1C004DA30 (DebugInPort.c)
 *     DebugOutPort @ 0x1C004DD00 (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C004DE30 (DebugRunMethod.c)
 *     IsNumber @ 0x1C004E1F4 (IsNumber.c)
 *     ConvertToInteger @ 0x1C0059A74 (ConvertToInteger.c)
 *     DbgParseOneArg @ 0x1C0059EE4 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
