/*
 * XREFs of sub_140583778 @ 0x140583778
 * Callers:
 *     sub_140969514 @ 0x140969514 (sub_140969514.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 */

__int64 __fastcall sub_140583778(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v6; // r8
  char v7; // bl
  __int64 *v8; // rdx
  __int64 v9; // r11
  __int64 *v10; // r10
  bool v11; // zf
  bool i; // zf
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1 >> 18;
  v4 = (a2 + a1 + 0x3FFFF) >> 18;
  if ( v4 <= 0x8000 || !a3 && (v4 = 0x8000LL, v3 < 0x8000) )
  {
    v14[0] = 0x8000LL;
    v6 = v4 - v3;
    v14[1] = qword_140C50850;
    if ( a3 )
    {
      if ( v3 < v14[0] )
      {
        if ( v6 > 1 )
        {
          if ( v14[0] - v3 >= v6 )
          {
            v7 = v4 - 1;
            v8 = &qword_140C4F040[(a1 >> 24) + 770];
            v9 = *v8;
            v10 = &qword_140C4F040[((v4 - 1) >> 6) + 770];
            if ( v8 == v10 )
            {
              v11 = (v9 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << v3)) == 0;
LABEL_18:
              if ( v11 )
                return 0LL;
            }
            else
            {
              for ( i = (v9 & (-1LL << v3)) == 0; i; i = *v8 == 0 )
              {
                if ( ++v8 == v10 )
                {
                  v11 = ((0xFFFFFFFFFFFFFFFFuLL >> ~v7) & *v8) == 0;
                  goto LABEL_18;
                }
              }
            }
          }
        }
        else if ( v6 == 1 && !_bittest64(qword_140C50850, v3) )
        {
          return 0LL;
        }
      }
    }
    else
    {
      RtlSetBitsEx((__int64)v14, v3, v6);
    }
  }
  return 1LL;
}
