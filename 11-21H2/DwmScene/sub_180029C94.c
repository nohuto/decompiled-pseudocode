/*
 * XREFs of sub_180029C94 @ 0x180029C94
 * Callers:
 *     sub_180029C64 @ 0x180029C64 (sub_180029C64.c)
 *     sub_180029D70 @ 0x180029D70 (sub_180029D70.c)
 *     sub_180033018 @ 0x180033018 (sub_180033018.c)
 *     sub_180044E0C @ 0x180044E0C (sub_180044E0C.c)
 *     sub_180049030 @ 0x180049030 (sub_180049030.c)
 *     sub_18004DDDC @ 0x18004DDDC (sub_18004DDDC.c)
 *     sub_180055240 @ 0x180055240 (sub_180055240.c)
 *     sub_1800552F8 @ 0x1800552F8 (sub_1800552F8.c)
 *     sub_18005BD5C @ 0x18005BD5C (sub_18005BD5C.c)
 *     sub_18005CE30 @ 0x18005CE30 (sub_18005CE30.c)
 *     sub_180061488 @ 0x180061488 (sub_180061488.c)
 *     sub_180067140 @ 0x180067140 (sub_180067140.c)
 *     sub_1800679C0 @ 0x1800679C0 (sub_1800679C0.c)
 *     sub_180067D9C @ 0x180067D9C (sub_180067D9C.c)
 *     sub_18006C8B4 @ 0x18006C8B4 (sub_18006C8B4.c)
 *     sub_18007A04C @ 0x18007A04C (sub_18007A04C.c)
 *     sub_180091F10 @ 0x180091F10 (sub_180091F10.c)
 *     sub_1800945EC @ 0x1800945EC (sub_1800945EC.c)
 *     sub_180096AC8 @ 0x180096AC8 (sub_180096AC8.c)
 *     sub_18009ACB8 @ 0x18009ACB8 (sub_18009ACB8.c)
 *     sub_1800F190C @ 0x1800F190C (sub_1800F190C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029948 @ 0x180029948 (sub_180029948.c)
 */

__int64 __fastcall sub_180029C94(__int64 *a1)
{
  __int64 v2; // rcx
  char *v3; // rdi
  char *v4; // rbx

  v2 = *a1;
  v3 = *(char **)(v2 + 8);
  if ( !v3[25] )
  {
    do
    {
      sub_180029948((__int64)a1, (__int64)a1, *((char **)v3 + 2));
      v4 = v3;
      v3 = *(char **)v3;
      sub_180010910((__int64)(v4 + 40));
      sub_180010884(v4, 0x38uLL);
    }
    while ( !v3[25] );
    v2 = *a1;
  }
  return sub_180010884((char *)v2, 0x38uLL);
}
