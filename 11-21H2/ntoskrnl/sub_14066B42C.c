/*
 * XREFs of sub_14066B42C @ 0x14066B42C
 * Callers:
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     sub_1409F8FB8 @ 0x1409F8FB8 (sub_1409F8FB8.c)
 * Callees:
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 */

__int64 __fastcall sub_14066B42C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r10
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r9

  v3 = a3;
  if ( a2 )
  {
    v6 = *a3 + 4;
    if ( (v6 ^ (unsigned __int64)*a3) < 0x400 )
    {
      v5 = a2 + 16;
      goto LABEL_4;
    }
    v4 = *a3 + 8;
  }
  else
  {
    v4 = 4LL;
  }
  v5 = sub_140733340(a1, v4);
LABEL_4:
  *v3 = v6;
  return v5;
}
