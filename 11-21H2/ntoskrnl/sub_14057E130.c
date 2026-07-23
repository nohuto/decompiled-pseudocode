/*
 * XREFs of sub_14057E130 @ 0x14057E130
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057E91C @ 0x14057E91C (sub_14057E91C.c)
 */

__int64 __fastcall sub_14057E130(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, char a6, __int64 *a7)
{
  int v8; // ebp
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebx

  v8 = a1;
  v9 = sub_14042A5E0(a1, a2);
  LODWORD(v10) = 0;
  v11 = v9;
  if ( v9 >= 0 )
    v10 = *a7;
  sub_14057E91C(v8, v10, a4, a5, a6, v9);
  return v11;
}
