/*
 * XREFs of sub_1409D790C @ 0x1409D790C
 * Callers:
 *     sub_1409D4BC0 @ 0x1409D4BC0 (sub_1409D4BC0.c)
 *     sub_1409D7990 @ 0x1409D7990 (sub_1409D7990.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_1402382D0 @ 0x1402382D0 (sub_1402382D0.c)
 *     sub_1409D4850 @ 0x1409D4850 (sub_1409D4850.c)
 *     sub_1409D57BC @ 0x1409D57BC (sub_1409D57BC.c)
 *     sub_1409D6C58 @ 0x1409D6C58 (sub_1409D6C58.c)
 */

void __fastcall sub_1409D790C(__int64 a1)
{
  PPRIVILEGE_SET *v2; // rbx
  __int64 v3; // rsi
  int v4; // edx

  v2 = (PPRIVILEGE_SET *)(a1 + 176);
  v3 = 16LL;
  do
  {
    v4 = *((_DWORD *)v2 - 2);
    if ( v4 != -1 )
    {
      sub_1409D4850(*((_DWORD *)v2 - 1) & 3, v4);
      SeFreePrivileges(*v2);
    }
    v2 += 3;
    --v3;
  }
  while ( v3 );
  if ( *(_QWORD *)(a1 + 40) && *(_QWORD *)(a1 + 48) )
    sub_1409D6C58(a1 + 40);
  sub_1409D57BC(a1 + 40);
  sub_1402382D0(a1 + 104);
}
