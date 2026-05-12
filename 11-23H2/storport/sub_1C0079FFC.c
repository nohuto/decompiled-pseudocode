/*
 * XREFs of sub_1C0079FFC @ 0x1C0079FFC
 * Callers:
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     sub_1C005B184 @ 0x1C005B184 (sub_1C005B184.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 *     sub_1C007DF34 @ 0x1C007DF34 (sub_1C007DF34.c)
 */

__int64 __fastcall sub_1C0079FFC(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  if ( a3 )
  {
    result = sub_1C007DF34(a1, &v7);
    if ( (int)result >= 0 )
    {
      if ( (v7 & 7) == 7 )
      {
        memset_0(a2, 0, 0x1860uLL);
        *(_QWORD *)a2 = a1;
        a2[6] = -60928;
        return sub_1C007DA18(a2, a3);
      }
      else
      {
        return 3221225659LL;
      }
    }
  }
  else
  {
    memset_0(a2, 0, 0x1860uLL);
    result = 0LL;
    *(_QWORD *)a2 = a1;
    a2[6] = -60928;
  }
  return result;
}
