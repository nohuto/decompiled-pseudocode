/*
 * XREFs of CmpValidateComponents @ 0x14068FC38
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     CmpGetComponentNameAtIndex @ 0x140690A1C (CmpGetComponentNameAtIndex.c)
 */

__int64 __fastcall CmpValidateComponents(unsigned int a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // edx

  v2 = 0LL;
  v3 = a2;
  v4 = a1;
  v5 = 0LL;
  if ( a1 )
  {
    while ( *(_WORD *)CmpGetComponentNameAtIndex(v3, v5, v2, v4) <= 0x200u )
    {
      v5 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v5 >= (unsigned int)v4 )
        return (unsigned int)v2;
    }
    LODWORD(v2) = -1073741811;
  }
  return (unsigned int)v2;
}
