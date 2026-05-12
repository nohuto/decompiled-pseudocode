/*
 * XREFs of GenSetTPerPropertiesParams @ 0x1C007E1E0
 * Callers:
 *     <none>
 * Callees:
 *     GenDataBytes @ 0x1C00806B8 (GenDataBytes.c)
 *     GenNamedValueListBegin @ 0x1C00809D8 (GenNamedValueListBegin.c)
 *     GenNamedValueListEnd @ 0x1C0080A18 (GenNamedValueListEnd.c)
 *     GenShortInteger @ 0x1C0080B80 (GenShortInteger.c)
 *     GenTinyInteger @ 0x1C0080D78 (GenTinyInteger.c)
 */

__int64 __fastcall GenSetTPerPropertiesParams(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  result = GenNamedValueListBegin(a3, 0LL);
  if ( (int)result >= 0 )
  {
    v7 = *(unsigned int *)(a3 + 12);
    if ( (unsigned int)(v7 + 1) > *(_DWORD *)(a3 + 8) )
      return 3221225507LL;
    *(_BYTE *)(v7 + *(_QWORD *)a3) = -14;
    ++*(_DWORD *)(a3 + 12);
    result = GenDataBytes(a3, "MaxComPacketSize", 16LL);
    if ( (int)result >= 0 )
    {
      result = *a4 >= 0x40uLL ? GenShortInteger(a3) : GenTinyInteger(a3);
      if ( (int)result >= 0 )
      {
        v8 = *(unsigned int *)(a3 + 12);
        if ( (unsigned int)(v8 + 1) > *(_DWORD *)(a3 + 8) )
          return 3221225507LL;
        *(_BYTE *)(v8 + *(_QWORD *)a3) = -13;
        v9 = (unsigned int)++*(_DWORD *)(a3 + 12);
        if ( (unsigned int)(v9 + 1) > *(_DWORD *)(a3 + 8) )
          return 3221225507LL;
        *(_BYTE *)(v9 + *(_QWORD *)a3) = -14;
        ++*(_DWORD *)(a3 + 12);
        result = GenDataBytes(a3, "MaxResponseComPacketSize", 24LL);
        if ( (int)result >= 0 )
        {
          result = *a4 >= 0x40uLL ? GenShortInteger(a3) : GenTinyInteger(a3);
          if ( (int)result >= 0 )
          {
            v10 = *(unsigned int *)(a3 + 12);
            if ( (unsigned int)(v10 + 1) > *(_DWORD *)(a3 + 8) )
              return 3221225507LL;
            *(_BYTE *)(v10 + *(_QWORD *)a3) = -13;
            v11 = (unsigned int)++*(_DWORD *)(a3 + 12);
            if ( (unsigned int)(v11 + 1) > *(_DWORD *)(a3 + 8) )
              return 3221225507LL;
            *(_BYTE *)(v11 + *(_QWORD *)a3) = -14;
            ++*(_DWORD *)(a3 + 12);
            result = GenDataBytes(a3, "MaxPacketSize", 13LL);
            if ( (int)result >= 0 )
            {
              result = (unsigned __int64)*a4 - 20 >= 0x40 ? GenShortInteger(a3) : GenTinyInteger(a3);
              if ( (int)result >= 0 )
              {
                v12 = *(unsigned int *)(a3 + 12);
                if ( (unsigned int)(v12 + 1) > *(_DWORD *)(a3 + 8) )
                  return 3221225507LL;
                *(_BYTE *)(v12 + *(_QWORD *)a3) = -13;
                v13 = (unsigned int)++*(_DWORD *)(a3 + 12);
                if ( (unsigned int)(v13 + 1) > *(_DWORD *)(a3 + 8) )
                  return 3221225507LL;
                *(_BYTE *)(v13 + *(_QWORD *)a3) = -14;
                ++*(_DWORD *)(a3 + 12);
                result = GenDataBytes(a3, "MaxIndTokenSize", 15LL);
                if ( (int)result >= 0 )
                {
                  result = (unsigned __int64)*a4 - 56 >= 0x40 ? GenShortInteger(a3) : GenTinyInteger(a3);
                  if ( (int)result >= 0 )
                  {
                    v14 = *(unsigned int *)(a3 + 12);
                    if ( (unsigned int)(v14 + 1) > *(_DWORD *)(a3 + 8) )
                      return 3221225507LL;
                    *(_BYTE *)(v14 + *(_QWORD *)a3) = -13;
                    ++*(_DWORD *)(a3 + 12);
                    return GenNamedValueListEnd(a3);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
