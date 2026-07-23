/*
 * XREFs of sub_1406A1EE0 @ 0x1406A1EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406A1F70 @ 0x1406A1F70 (sub_1406A1F70.c)
 */

__int64 __fastcall sub_1406A1EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r10
  __int64 v8; // r8

  v6 = 0LL;
  v8 = 0LL;
  if ( a2 != 1 )
    v6 = a2;
  LOBYTE(v8) = a2 == 1;
  return sub_1406A1F70(a1, v6, v8, a3, a4, a5, a6);
}
