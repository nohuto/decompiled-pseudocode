/*
 * XREFs of sub_140996CE0 @ 0x140996CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140996CE0(int a1, char a2, unsigned int a3)
{
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = a1 - 1;
  if ( !v4 )
    sub_1409971BC(a3);
  v5 = v4 - 1;
  if ( !v5 )
  {
    sub_140A48330(0);
    if ( !dword_140D05260 )
    {
LABEL_7:
      byte_140C22288 = a2;
      sub_1407EED48();
    }
LABEL_8:
    sub_140A47CF8(v7, v6);
    return 0LL;
  }
  if ( v5 == 1 )
  {
    sub_140A48330(1);
    if ( dword_140D05260 )
      goto LABEL_7;
    goto LABEL_8;
  }
  return 0LL;
}
