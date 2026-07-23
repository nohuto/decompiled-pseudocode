/*
 * XREFs of sub_1406FAE2C @ 0x1406FAE2C
 * Callers:
 *     sub_1406FAD90 @ 0x1406FAD90 (sub_1406FAD90.c)
 * Callees:
 *     sub_1402182F8 @ 0x1402182F8 (sub_1402182F8.c)
 *     sub_140258680 @ 0x140258680 (sub_140258680.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 */

__int64 __fastcall sub_1406FAE2C(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  bool v9; // zf

  v2 = *a1;
  v5 = 0LL;
  while ( v2 )
  {
    v7 = sub_140258680(v2);
    v9 = *a2 == 0;
    *a1 = v7;
    if ( v9 )
      *a2 = sub_1402182F8((*(_QWORD *)(v8 + 40) >> 43) & 0x3FF);
    sub_140268408(v8);
    v2 = *a1;
    ++v5;
  }
  return v5;
}
