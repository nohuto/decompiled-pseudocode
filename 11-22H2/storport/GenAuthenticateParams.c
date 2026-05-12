/*
 * XREFs of GenAuthenticateParams @ 0x1C007E170
 * Callers:
 *     <none>
 * Callees:
 *     TcglibReverseBytes @ 0x1C0079CB8 (TcglibReverseBytes.c)
 *     GenDataBytes @ 0x1C00806B8 (GenDataBytes.c)
 *     GenNamedValueBytes @ 0x1C0080908 (GenNamedValueBytes.c)
 */

__int64 __fastcall GenAuthenticateParams(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = *a4;
  TcglibReverseBytes((char *)&v7, 8u);
  result = GenDataBytes(a3, &v7, 8LL);
  if ( (int)result >= 0 )
    return GenNamedValueBytes(a3, 0LL, a4[1] + 4);
  return result;
}
