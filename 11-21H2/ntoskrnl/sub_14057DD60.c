/*
 * XREFs of sub_14057DD60 @ 0x14057DD60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057EA2C @ 0x14057EA2C (sub_14057EA2C.c)
 */

__int64 __fastcall sub_14057DD60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v5; // ebp
  unsigned int v6; // ebx

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(unsigned __int8 *)(v2 + 1);
  if ( !*(_BYTE *)(v2 + 1) || v5 == 4 )
    sub_14042A5E0(a1, a2);
  sub_14042A5E0(*(_QWORD *)(a1 + 8), a2);
  v6 = sub_14042A5E0(a1, a2);
  sub_14057EA2C(*(_QWORD *)(a1 + 8), a1, a2, v5, v6);
  return v6;
}
