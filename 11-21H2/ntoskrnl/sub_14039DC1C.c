/*
 * XREFs of sub_14039DC1C @ 0x14039DC1C
 * Callers:
 *     sub_14039DB6C @ 0x14039DB6C (sub_14039DB6C.c)
 *     sub_14054CD1C @ 0x14054CD1C (sub_14054CD1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14039DC1C(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  if ( (dword_140D0688C & 0x2000) == 0 )
    return a1;
  result = 0LL;
  if ( a1 )
  {
    v3 = a1;
    do
    {
      if ( (*a2 & 0xC00LL) != 0 )
        LODWORD(result) = (*a2 & 0x3FF) + result;
      result = (unsigned int)(result + 1);
      ++a2;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
