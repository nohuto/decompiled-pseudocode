/*
 * XREFs of sub_1800135B0 @ 0x1800135B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800448C0 @ 0x1800448C0 (sub_1800448C0.c)
 */

__int64 __fastcall sub_1800135B0(__int64 a1, int a2)
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
    sub_1800448C0(*(_QWORD *)(a1 + 16), v3);
  }
  return 0LL;
}
