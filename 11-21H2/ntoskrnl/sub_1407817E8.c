/*
 * XREFs of sub_1407817E8 @ 0x1407817E8
 * Callers:
 *     sub_1406D4FE0 @ 0x1406D4FE0 (sub_1406D4FE0.c)
 *     sub_1406E5E80 @ 0x1406E5E80 (sub_1406E5E80.c)
 *     sub_140781790 @ 0x140781790 (sub_140781790.c)
 *     sub_140784C2C @ 0x140784C2C (sub_140784C2C.c)
 *     sub_140789084 @ 0x140789084 (sub_140789084.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407817E8(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 >= 6 )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 248);
  return v3;
}
