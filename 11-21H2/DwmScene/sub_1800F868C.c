/*
 * XREFs of sub_1800F868C @ 0x1800F868C
 * Callers:
 *     sub_1800FA818 @ 0x1800FA818 (sub_1800FA818.c)
 *     sub_18010D09A @ 0x18010D09A (sub_18010D09A.c)
 *     ?dtor$0@?0???0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA_0 @ 0x18010D48C (-dtor$0@-0---0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA_0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800FA818 @ 0x1800FA818 (sub_1800FA818.c)
 */

__int64 __fastcall sub_1800F868C(char **a1)
{
  char *v1; // rdx
  __int64 *v3; // rbx
  __int64 *v4; // rsi
  unsigned __int64 v5; // rdx

  v1 = *a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *(__int64 **)v1;
  if ( *(_QWORD *)v1 )
  {
    do
    {
      v4 = (__int64 *)*v3;
      sub_1800FA818(v3 + 6);
      v5 = v3[5];
      if ( v5 >= 8 )
        sub_180010884((char *)v3[2], 2 * v5 + 2);
      v3[4] = 0LL;
      v3[5] = 7LL;
      *((_WORD *)v3 + 8) = 0;
      sub_180010884((char *)v3, 0xB0uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return sub_180010884(*a1, 0xB0uLL);
}
