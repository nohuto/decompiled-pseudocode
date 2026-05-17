/*
 * XREFs of RtlImageNtHeaderEx_ExceptionFilter @ 0x18010BD30
 * Callers:
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlImageNtHeaderEx_ExceptionFilter(char a1)
{
  return (a1 & 2) == 0;
}
