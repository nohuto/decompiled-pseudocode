/*
 * XREFs of sub_14081C568 @ 0x14081C568
 * Callers:
 *     sub_1402E1010 @ 0x1402E1010 (sub_1402E1010.c)
 *     sub_14081C500 @ 0x14081C500 (sub_14081C500.c)
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14081C568(_DWORD *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // edx
  _DWORD *v5; // r9

  result = a2;
  v4 = 0;
  if ( (_WORD)result )
  {
    v5 = (_DWORD *)(a3 + 4);
    while ( *(_BYTE *)a1 != 42 && *a1 != 1061109567 )
    {
      *v5++ = *a1++;
      if ( ++v4 >= (unsigned int)result )
        goto LABEL_3;
    }
  }
  *(_DWORD *)(a3 + 4) = 42;
  result = 1LL;
LABEL_3:
  *(_WORD *)a3 = result;
  return result;
}
