/*
 * XREFs of GenStartSessionParams @ 0x1C007E3E0
 * Callers:
 *     <none>
 * Callees:
 *     TcglibReverseBytes @ 0x1C0079CB8 (TcglibReverseBytes.c)
 *     GenDataBytes @ 0x1C00806B8 (GenDataBytes.c)
 *     GenShortInteger @ 0x1C0080B80 (GenShortInteger.c)
 *     GenTinyInteger @ 0x1C0080D78 (GenTinyInteger.c)
 */

__int64 __fastcall GenStartSessionParams(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *(unsigned int *)(a2 + 4) >= 0x40uLL )
    result = GenShortInteger(a3);
  else
    result = GenTinyInteger(a3);
  if ( (int)result >= 0 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    TcglibReverseBytes((char *)&v6, 8u);
    result = GenDataBytes(a3, &v6, 8LL);
    if ( (int)result >= 0 )
      return GenTinyInteger(a3);
  }
  return result;
}
