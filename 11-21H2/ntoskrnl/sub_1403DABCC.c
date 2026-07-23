/*
 * XREFs of sub_1403DABCC @ 0x1403DABCC
 * Callers:
 *     sub_1403A5440 @ 0x1403A5440 (sub_1403A5440.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DABCC(int a1, unsigned __int16 a2, int a3)
{
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx

  if ( byte_140C54B60 )
  {
    result = (unsigned int)a2 + a1;
    if ( (int)result > 3 )
      a1 = 3 - a2;
    if ( a1 )
    {
      v4 = a1 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 == 1 )
            dword_140C54B64 = a3;
        }
        else
        {
          result = a2;
          *(_WORD *)((char *)&dword_140C54B64 + a2) = a3;
          HIBYTE(dword_140C54B64) = BYTE2(a3);
        }
      }
      else
      {
        result = a2;
        *(_WORD *)((char *)&dword_140C54B64 + a2) = a3;
      }
    }
    else
    {
      result = a2;
      *((_BYTE *)&dword_140C54B64 + a2) = a3;
    }
    dword_140C54B64 &= 0xFFFFFFFC;
  }
  return result;
}
