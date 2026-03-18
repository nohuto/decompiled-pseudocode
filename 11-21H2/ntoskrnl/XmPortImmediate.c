/*
 * XREFs of XmPortImmediate @ 0x140535530
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmGetCodeByte @ 0x1403A340C (XmGetCodeByte.c)
 *     XmSetDataType @ 0x1403A346C (XmSetDataType.c)
 */

__int64 __fastcall XmPortImmediate(__int64 a1)
{
  unsigned __int8 CodeByte; // al
  unsigned int v3; // r8d

  CodeByte = XmGetCodeByte(a1);
  *(_DWORD *)(a1 + 120) = 1;
  *(_DWORD *)(a1 + 108) = CodeByte;
  XmSetDataType(a1);
  return v3;
}
