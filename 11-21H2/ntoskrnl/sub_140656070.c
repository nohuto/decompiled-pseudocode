/*
 * XREFs of sub_140656070 @ 0x140656070
 * Callers:
 *     sub_140656050 @ 0x140656050 (sub_140656050.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_140656070(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  char result; // al

  if ( !a1 || !*(_QWORD *)a1 || !a2 )
    return 0;
  v4 = 0x1C200 % a2;
  LOBYTE(v4) = 3;
  sub_14042A5E0(a1, v4);
  LOBYTE(v5) = 3;
  sub_14042A5E0(a1, v5);
  LOBYTE(v6) = 1;
  sub_14042A5E0(a1, v6);
  sub_14042A5E0(a1, 0LL);
  LOBYTE(v7) = 3;
  sub_14042A5E0(a1, v7);
  result = 1;
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
