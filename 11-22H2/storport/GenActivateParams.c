/*
 * XREFs of GenActivateParams @ 0x1C007CD40
 * Callers:
 *     <none>
 * Callees:
 *     TcglibReverseBytes @ 0x1C0079CB8 (TcglibReverseBytes.c)
 *     GenNamedValueBytes @ 0x1C0080908 (GenNamedValueBytes.c)
 *     GenNamedValueInt @ 0x1C0080970 (GenNamedValueInt.c)
 *     GenNamedValueListBegin @ 0x1C00809D8 (GenNamedValueListBegin.c)
 *     GenNamedValueListEnd @ 0x1C0080A18 (GenNamedValueListEnd.c)
 *     GenShortInteger @ 0x1C0080B80 (GenShortInteger.c)
 *     GenTinyInteger @ 0x1C0080D78 (GenTinyInteger.c)
 */

__int64 __fastcall GenActivateParams(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 result; // rax
  unsigned int i; // edi
  char v9[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)v9 = 0x80200000000LL;
  TcglibReverseBytes(v9, 8u);
  result = GenNamedValueBytes(a3, 393216LL, v9);
  if ( (int)result >= 0 )
  {
    result = GenNamedValueInt(a3, 393217LL, *a4);
    if ( (int)result >= 0 )
    {
      result = GenNamedValueListBegin(a3, 393218LL);
      if ( (int)result >= 0 )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 36); ++i )
        {
          if ( *(unsigned int *)(a1 + 40) >= 0x40uLL )
            result = GenShortInteger(a3);
          else
            result = GenTinyInteger(a3);
          if ( (int)result < 0 )
            return result;
        }
        return GenNamedValueListEnd(a3);
      }
    }
  }
  return result;
}
