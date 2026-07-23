/*
 * XREFs of sub_14099D244 @ 0x14099D244
 * Callers:
 *     sub_140800680 @ 0x140800680 (sub_140800680.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140800A38 @ 0x140800A38 (sub_140800A38.c)
 *     sub_140800BAC @ 0x140800BAC (sub_140800BAC.c)
 *     sub_140800E64 @ 0x140800E64 (sub_140800E64.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_140A1CB84 @ 0x140A1CB84 (sub_140A1CB84.c)
 *     sub_140A1CC1C @ 0x140A1CC1C (sub_140A1CC1C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14099D244(__int64 a1, void *a2, _QWORD *a3)
{
  PVOID v3; // rsi
  int v6; // ebx
  void *v7; // rdi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned int v15; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-25h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-21h] BYREF
  PVOID P; // [rsp+40h] [rbp-19h] BYREF
  PVOID v19; // [rsp+48h] [rbp-11h] BYREF
  void *v20; // [rsp+50h] [rbp-9h] BYREF
  PVOID v21; // [rsp+58h] [rbp-1h] BYREF
  _DWORD v22[2]; // [rsp+60h] [rbp+7h] BYREF
  __int128 v23; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v24; // [rsp+78h] [rbp+1Fh] BYREF

  P = 0LL;
  v17 = 0;
  v3 = 0LL;
  v16 = 0;
  v20 = 0LL;
  v19 = 0LL;
  v15 = 0;
  v21 = 0LL;
  v22[0] = 1;
  v24 = 0LL;
  v22[1] = 270532612;
  v23 = 0LL;
  v6 = sub_140A1CB84(a1, 0LL, v22, &v20);
  if ( v6 < 0 )
  {
    v7 = v20;
  }
  else
  {
    v6 = sub_140800E64((int)a2, 301989892, &v19, &v15);
    if ( v6 < 0 )
    {
      v7 = v20;
    }
    else
    {
      sub_140800E64((int)a2, 301989893, &v21, &v16);
      v7 = v20;
      v9 = sub_140803250(v20, 0x12000004u, v8, (__int64)v19, v15);
      v3 = v21;
      v6 = v9;
      if ( v9 >= 0 )
      {
        if ( !v21 || (v6 = sub_140803250(v7, 0x12000005u, v10, (__int64)v21, v16), v6 >= 0) )
        {
          v6 = sub_140800BAC((__int64)v7, (__int64)a2);
          if ( v6 >= 0 )
          {
            v23 = xmmword_14003C1F0;
            v6 = sub_140803250(v7, 0x14000006u, v11, (__int64)&v23, 0x10u);
            if ( v6 >= 0 )
            {
              if ( (int)sub_140800E64((int)a2, 385876087, &P, &v17) < 0
                || (v6 = sub_140803250(v7, 0x17000077u, v12, (__int64)P, v17), v6 >= 0) )
              {
                v6 = sub_140800A38((__int64)v7, 0, 0LL, (__int64)&v24);
                if ( v6 >= 0 )
                {
                  v6 = sub_140803250(a2, 0x23000003u, v13, (__int64)&v24, 0x10u);
                  if ( v6 >= 0 )
                  {
                    *a3 = v7;
                    v7 = 0LL;
                  }
                }
              }
              if ( P )
                ExFreePoolWithTag(P, 0);
            }
          }
        }
      }
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  if ( v7 )
  {
    if ( v6 < 0 )
      sub_140A1CC1C(v7);
    else
      sub_140812D00((__int64)v7);
  }
  return (unsigned int)v6;
}
