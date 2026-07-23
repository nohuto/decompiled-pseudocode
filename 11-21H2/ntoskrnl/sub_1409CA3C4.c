/*
 * XREFs of sub_1409CA3C4 @ 0x1409CA3C4
 * Callers:
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall sub_1409CA3C4(unsigned int a1, char a2, char a3, __int64 a4, _BYTE *a5)
{
  _BYTE *result; // rax
  int v6; // r9d

  if ( *(_BYTE *)(a4 + 118) == 2 )
  {
    result = (_BYTE *)((unsigned __int64)a1 >> 1);
    v6 = ((unsigned __int8)result[a4 + 88] >> (4 * (a1 & 1))) & 0xF;
    if ( v6 )
    {
      if ( a2 && (v6 & 1) != 0 || a3 && (v6 & 4) != 0 )
      {
        result = a5;
        *a5 = 1;
      }
      else if ( a2 && (v6 & 2) != 0 || a3 && (v6 & 8) != 0 )
      {
        result = a5;
        *a5 = 0;
      }
    }
  }
  return result;
}
