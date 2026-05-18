/*
 * XREFs of sub_18008AE80 @ 0x18008AE80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

char __fastcall sub_18008AE80(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  sub_180011020(a1 + 12, a2);
  sub_180011020(a1 + 14, a3);
  sub_180011020(a1 + 16, a4);
  sub_180011020(a1 + 18, a5);
  sub_180011020(a1 + 20, a6);
  v10 = a2[1];
  if ( v10 )
    sub_180010530(v10);
  v11 = a3[1];
  if ( v11 )
    sub_180010530(v11);
  v12 = a4[1];
  if ( v12 )
    sub_180010530(v12);
  v13 = a5[1];
  if ( v13 )
    sub_180010530(v13);
  v14 = a6[1];
  if ( v14 )
    sub_180010530(v14);
  return 1;
}
