/*
 * XREFs of sub_14055D2EC @ 0x14055D2EC
 * Callers:
 *     sub_14055CC5C @ 0x14055CC5C (sub_14055CC5C.c)
 * Callees:
 *     sub_1405550FC @ 0x1405550FC (sub_1405550FC.c)
 *     sub_14055D470 @ 0x14055D470 (sub_14055D470.c)
 *     sub_14055D50C @ 0x14055D50C (sub_14055D50C.c)
 *     sub_14055D868 @ 0x14055D868 (sub_14055D868.c)
 *     sub_14055DC8C @ 0x14055DC8C (sub_14055DC8C.c)
 *     sub_14055DEF4 @ 0x14055DEF4 (sub_14055DEF4.c)
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 *     sub_1405932F8 @ 0x1405932F8 (sub_1405932F8.c)
 */

__int64 __fastcall sub_14055D2EC(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+38h] [rbp-31h]
  __int64 v13; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v15[5]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v16; // [rsp+90h] [rbp+27h]

  v16 = 0LL;
  v13 = 0LL;
  a8 = 0;
  if ( !qword_140D018E8 )
    return 3221225507LL;
  v10 = *(_QWORD *)(qword_140D00A80 + 8);
  v11 = *(_QWORD *)(v10 + 48);
  v15[1] = 0LL;
  LODWORD(v16) = v16 | 3;
  v14[0] = v11;
  v14[1] = v10 + 56;
  v15[2] = v14;
  v15[4] = &qword_140D018E8;
  v15[0] = sub_140552F60;
  v15[3] = v10;
  sub_1405550FC(a1, a2, a3, a4, a5, a6, a7, v12, 0);
  result = sub_1405932F8(v15);
  if ( (int)result >= 0 )
  {
    result = sub_14055DC8C(v15);
    if ( (int)result >= 0 )
    {
      if ( !(unsigned __int8)sub_14055D50C(a7, a6, &v13, &a8)
        || (result = sub_14055DEF4(v15, a6, v13, v13 + a8), (int)result >= 0) )
      {
        result = sub_14055D868(v15);
        if ( (int)result >= 0 )
        {
          result = sub_140593218(v15, *(_QWORD *)(a7 + 184), 2944LL);
          if ( (int)result >= 0 )
          {
            result = sub_140593218(v15, a7, 2288LL);
            if ( (int)result >= 0 )
            {
              result = sub_140593218(v15, v13, a8);
              if ( (int)result >= 0 )
                return sub_14055D470(v15, *(_QWORD *)(qword_140D00A80 + 1416));
            }
          }
        }
      }
    }
  }
  return result;
}
