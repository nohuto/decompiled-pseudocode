/*
 * XREFs of RtlImageNtHeaderEx_ExceptionFilter @ 0x18010BB60
 * Callers:
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlImageNtHeaderEx_ExceptionFilter(char a1)
{
  return ((unsigned __int8)~a1 >> 1) & 1;
}
