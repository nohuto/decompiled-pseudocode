/*
 * XREFs of sub_180025B30 @ 0x180025B30
 * Callers:
 *     sub_180025C20 @ 0x180025C20 (sub_180025C20.c)
 *     sub_1800E4DDB @ 0x1800E4DDB (sub_1800E4DDB.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180025B30(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = a1[12];
  if ( v2 )
    result = sub_180010530(v2);
  v4 = a1[10];
  if ( v4 )
    result = sub_180010530(v4);
  v5 = a1[8];
  if ( v5 )
    result = sub_180010530(v5);
  v6 = a1[5];
  if ( v6 )
    result = sub_180010530(v6);
  v7 = a1[3];
  if ( v7 )
    result = sub_180010530(v7);
  v8 = a1[1];
  if ( v8 )
    return sub_180010530(v8);
  return result;
}
