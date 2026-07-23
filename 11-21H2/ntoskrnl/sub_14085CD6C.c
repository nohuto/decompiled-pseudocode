/*
 * XREFs of sub_14085CD6C @ 0x14085CD6C
 * Callers:
 *     sub_1403DA240 @ 0x1403DA240 (sub_1403DA240.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14085CD6C(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)dword_140C1F8FC;
  if ( (dword_140C1F8FC & 4) != 0 )
  {
    *a1 = 2;
    *a2 = 2;
    return result;
  }
  if ( (dword_140C1F8FC & 8) != 0 )
  {
    *a1 = 2;
    *a2 = 3;
    return result;
  }
  if ( (dword_140C1F8FC & 0x40) != 0 )
  {
    *a1 = 2;
    *a2 = 6;
    return result;
  }
  if ( !byte_140C1F8F8 )
    goto LABEL_12;
  if ( (dword_140C1F8FC & 2) != 0 )
  {
    *a1 = 2;
    *a2 = 1;
    return result;
  }
  if ( (dword_140C1F8FC & 0x80u) != 0 )
  {
    *a1 = 2;
    *a2 = 7;
  }
  else
  {
LABEL_12:
    *a1 = 0;
    *a2 = 0;
  }
  return result;
}
