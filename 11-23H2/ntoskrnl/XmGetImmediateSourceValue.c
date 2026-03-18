/*
 * XREFs of XmGetImmediateSourceValue @ 0x1403B9514
 * Callers:
 *     XmGroup3General @ 0x1403B8980 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403B8AD0 (XmAccumImmediate.c)
 *     XmMoveRegImmediate @ 0x1403B8C30 (XmMoveRegImmediate.c)
 *     XmGroup1Immediate @ 0x1403B9150 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x140532BC0 (XmByteImmediate.c)
 *     XmImulImmediate @ 0x140532F50 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x1405330A0 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x140533140 (XmPushImmediate.c)
 * Callees:
 *     XmGetLongImmediate @ 0x140399CD8 (XmGetLongImmediate.c)
 *     XmGetCodeByte @ 0x1403B9414 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x1403B9670 (XmGetWordImmediate.c)
 */

__int64 __fastcall XmGetImmediateSourceValue(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 120);
  if ( !v2 )
    return (unsigned __int8)XmGetCodeByte(a1);
  if ( v2 == 1 )
  {
    if ( a2 )
      return (unsigned __int16)XmGetCodeByte(a1);
    else
      return (unsigned __int16)XmGetWordImmediate(a1);
  }
  else if ( a2 )
  {
    return (unsigned int)XmGetCodeByte(a1);
  }
  else
  {
    return XmGetLongImmediate(a1);
  }
}
