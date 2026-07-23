/*
 * XREFs of sub_1406DF748 @ 0x1406DF748
 * Callers:
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 * Callees:
 *     sub_1406DF7A0 @ 0x1406DF7A0 (sub_1406DF7A0.c)
 */

__int64 __fastcall sub_1406DF748(_DWORD *a1, __int64 *a2)
{
  unsigned int v2; // eax
  __int64 v4; // rax

  *a2 = 0LL;
  v2 = 0;
  if ( !a1 || !a1[3] )
    goto LABEL_9;
  do
  {
    if ( !*a1 )
      break;
    a1 += 5;
    ++v2;
  }
  while ( a1[3] );
  if ( !v2 )
  {
LABEL_9:
    v4 = 0LL;
    goto LABEL_7;
  }
  v4 = sub_1406DF7A0(v2);
  if ( v4 )
  {
LABEL_7:
    *a2 = v4;
    return 0LL;
  }
  return 3221225626LL;
}
