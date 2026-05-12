/*
 * XREFs of sub_1C007EA10 @ 0x1C007EA10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0080EE8 @ 0x1C0080EE8 (sub_1C0080EE8.c)
 *     sub_1C0081208 @ 0x1C0081208 (sub_1C0081208.c)
 *     sub_1C0081248 @ 0x1C0081248 (sub_1C0081248.c)
 *     sub_1C00813B0 @ 0x1C00813B0 (sub_1C00813B0.c)
 *     sub_1C00815A8 @ 0x1C00815A8 (sub_1C00815A8.c)
 */

__int64 __fastcall sub_1C007EA10(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
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

  result = sub_1C0081208(a3, 0LL);
  if ( (int)result >= 0 )
  {
    v7 = *(unsigned int *)(a3 + 12);
    if ( (unsigned int)(v7 + 1) > *(_DWORD *)(a3 + 8) )
      return 3221225507LL;
    *(_BYTE *)(v7 + *(_QWORD *)a3) = -14;
    ++*(_DWORD *)(a3 + 12);
    result = sub_1C0080EE8(a3, "MaxComPacketSize", 16LL);
    if ( (int)result >= 0 )
    {
      result = *a4 >= 0x40uLL ? sub_1C00813B0(a3) : sub_1C00815A8(a3);
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
        result = sub_1C0080EE8(a3, "MaxResponseComPacketSize", 24LL);
        if ( (int)result >= 0 )
        {
          result = *a4 >= 0x40uLL ? sub_1C00813B0(a3) : sub_1C00815A8(a3);
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
            result = sub_1C0080EE8(a3, "MaxPacketSize", 13LL);
            if ( (int)result >= 0 )
            {
              result = (unsigned __int64)*a4 - 20 >= 0x40 ? sub_1C00813B0(a3) : sub_1C00815A8(a3);
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
                result = sub_1C0080EE8(a3, "MaxIndTokenSize", 15LL);
                if ( (int)result >= 0 )
                {
                  result = (unsigned __int64)*a4 - 56 >= 0x40 ? sub_1C00813B0(a3) : sub_1C00815A8(a3);
                  if ( (int)result >= 0 )
                  {
                    v14 = *(unsigned int *)(a3 + 12);
                    if ( (unsigned int)(v14 + 1) > *(_DWORD *)(a3 + 8) )
                      return 3221225507LL;
                    *(_BYTE *)(v14 + *(_QWORD *)a3) = -13;
                    ++*(_DWORD *)(a3 + 12);
                    return sub_1C0081248(a3);
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
