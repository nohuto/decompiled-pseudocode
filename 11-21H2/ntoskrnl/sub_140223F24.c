/*
 * XREFs of sub_140223F24 @ 0x140223F24
 * Callers:
 *     PsGetJobProperty @ 0x140223EC0 (PsGetJobProperty.c)
 * Callees:
 *     sub_140223F8C @ 0x140223F8C (sub_140223F8C.c)
 */

__int64 __fastcall sub_140223F24(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ecx
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF

  v8 = 0LL;
  v7 = a2;
  v5 = -1073741275;
  if ( a1 )
  {
    while ( 1 )
    {
      v5 = sub_140223F8C(a1 + 1472, a2, &v8);
      if ( v5 >= 0 )
        break;
      a1 = *(_QWORD *)(a1 + 1264);
      if ( !a1 )
        return (unsigned int)v5;
      a2 = v7;
    }
    *a3 = v8;
  }
  return (unsigned int)v5;
}
