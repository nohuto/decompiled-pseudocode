/*
 * XREFs of sub_140845D74 @ 0x140845D74
 * Callers:
 *     sub_1406E7CD4 @ 0x1406E7CD4 (sub_1406E7CD4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_140845E14 @ 0x140845E14 (sub_140845E14.c)
 */

__int64 __fastcall sub_140845D74(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  char v7; // bl
  __int64 v8; // rdi
  unsigned int v10; // [rsp+70h] [rbp+18h] BYREF

  v10 = a3;
  v3 = 0;
  v6 = *(_QWORD *)(a1 + 48);
  v7 = 1;
  if ( a3 )
    v3 = sub_14077198C(*(__int64 *)&qword_140D00AC0, v6, 1, a2, 0LL, (__int64)&stru_140012918, 7, (__int64)&v10, 4u, 0);
  else
    sub_14077198C(*(__int64 *)&qword_140D00AC0, v6, 1, 0LL, 0LL, (__int64)&stru_140012918, 0, 0LL, 0, 0);
  sub_140845E14(a1, v10);
  v8 = *(_QWORD *)(a1 + 720);
  if ( v10 != 2 || !(unsigned __int8)sub_14042A5E0(*(_QWORD *)v8, 0LL) )
    v7 = 0;
  *(_BYTE *)(v8 + 16) = v7 | *(_BYTE *)(v8 + 16) & 0xFE;
  return v3;
}
