/*
 * XREFs of ?ChToByte@CRegParser@ATL@@KAEG@Z @ 0x140091320
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140090CA8 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ATL::CRegParser::ChToByte(unsigned __int16 a1)
{
  if ( a1 > 0x61u )
  {
    if ( a1 != 98 && a1 != 99 && a1 != 100 && (unsigned int)a1 - 101 >= 2 )
      return 0;
  }
  else if ( a1 != 97 )
  {
    if ( a1 > 0x38u )
    {
      if ( a1 == 57 )
        return a1 - 48;
      if ( a1 == 65 || a1 == 66 || a1 == 67 || a1 == 68 || (unsigned int)a1 - 69 <= 1 )
        return a1 - 55;
    }
    else if ( a1 == 56
           || a1 == 48
           || a1 == 49
           || a1 == 50
           || a1 == 51
           || a1 == 52
           || a1 == 53
           || (unsigned int)a1 - 54 <= 1 )
    {
      return a1 - 48;
    }
    return 0;
  }
  return a1 - 87;
}
