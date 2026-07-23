/*
 * XREFs of sub_1407FF024 @ 0x1407FF024
 * Callers:
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407FF024(_BYTE *a1, char a2, int a3, char a4, unsigned int a5)
{
  __int64 result; // rax
  int v6; // r8d

  result = a5;
  v6 = a5 & a3;
  if ( a4 )
  {
    if ( v6 && (dword_140C227CC & a5) == 0 )
    {
      dword_140C227CC |= a5;
LABEL_8:
      *a1 |= a2;
    }
  }
  else if ( !v6 && (dword_140C227CC & a5) != 0 )
  {
    result = ~a5;
    dword_140C227CC &= result;
    goto LABEL_8;
  }
  return result;
}
