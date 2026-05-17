/*
 * XREFs of RtlHashUnicodeString @ 0x18004FB90
 * Callers:
 *     RtlpFindUnicodeStringInSection @ 0x180045FD0 (RtlpFindUnicodeStringInSection.c)
 *     LdrpHashUnicodeString @ 0x18004FB5C (LdrpHashUnicodeString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHashUnicodeString(unsigned __int16 *a1, char a2, unsigned int a3, int *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // r10d
  int v7; // r11d
  unsigned __int16 *v8; // rbx
  int v9; // r9d
  unsigned __int64 v10; // r8
  int v12; // eax

  v4 = qword_1801776F8;
  v5 = 0;
  v7 = 0;
  if ( a1 && a4 && (v8 = (unsigned __int16 *)*((_QWORD *)a1 + 1), *a4 = 0, v9 = *a1 >> 1, a3 <= 1) )
  {
    if ( v9 )
    {
      if ( a2 )
      {
        do
        {
          v10 = *v8;
          --v9;
          ++v8;
          if ( (unsigned int)v10 >= 0x61 )
          {
            if ( (unsigned int)v10 > 0x7A )
            {
              if ( v4 && (unsigned __int16)v10 >= 0xC0u )
                LOWORD(v10) = *(_WORD *)(v4
                                       + 2
                                       * ((v10 & 0xF)
                                        + *(unsigned __int16 *)(v4
                                                              + 2LL
                                                              * (((unsigned __int8)v10 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v4 + 2 * (v10 >> 8))))))
                            + v10;
            }
            else
            {
              LOWORD(v10) = v10 - 32;
            }
          }
          v7 = (unsigned __int16)v10 + 65599 * v7;
        }
        while ( v9 );
      }
      else
      {
        do
        {
          v12 = *v8++;
          v7 = v12 + 65599 * v7;
          --v9;
        }
        while ( v9 );
      }
    }
    *a4 = v7;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
