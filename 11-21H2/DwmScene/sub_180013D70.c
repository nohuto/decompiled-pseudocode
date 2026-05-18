/*
 * XREFs of sub_180013D70 @ 0x180013D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180049D1C @ 0x180049D1C (sub_180049D1C.c)
 */

__int64 __fastcall sub_180013D70(__int64 a1, int a2)
{
  int v2; // edx
  __int64 v3; // rdx

  if ( !a2 )
  {
    v3 = 0LL;
    goto LABEL_7;
  }
  v2 = a2 - 1;
  if ( !v2 )
  {
    v3 = 1LL;
    goto LABEL_7;
  }
  if ( v2 == 1 )
  {
    v3 = 3LL;
LABEL_7:
    sub_180049D1C(*(_QWORD *)(a1 + 16), v3);
  }
  return 0LL;
}
