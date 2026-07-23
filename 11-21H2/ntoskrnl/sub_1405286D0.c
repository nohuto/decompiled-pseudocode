/*
 * XREFs of sub_1405286D0 @ 0x1405286D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14045939A @ 0x14045939A (sub_14045939A.c)
 *     sub_14051A9F8 @ 0x14051A9F8 (sub_14051A9F8.c)
 *     sub_14051ABD8 @ 0x14051ABD8 (sub_14051ABD8.c)
 *     sub_14051AC2C @ 0x14051AC2C (sub_14051AC2C.c)
 *     sub_14052936C @ 0x14052936C (sub_14052936C.c)
 */

__int64 __fastcall sub_1405286D0(ULONG_PTR a1, int a2, int a3, _QWORD *a4, __int64 a5, __int64 a6, ULONG_PTR *a7)
{
  bool v10; // zf
  int v11; // ebx
  unsigned __int64 v12; // rsi
  int v13; // eax
  ULONG_PTR v15; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  char v19; // [rsp+70h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v10 = *(_DWORD *)(a1 + 8) == 0;
  v19 = 0;
  if ( v10 )
  {
    if ( (int)sub_14052936C(a3, (unsigned int)&v16, (unsigned int)&v19, (unsigned int)&v17, (__int64)&v18) >= 0 )
    {
      v12 = v16;
      v11 = sub_14051A9F8(a1, a4, v16, a5, a6, &v15);
      if ( v11 >= 0 )
      {
        if ( v19 )
          v13 = sub_14051AC2C(a1, a2, v18, v12, v15);
        else
          v13 = sub_14051ABD8(a1, a2, v17, v12 >> 12, v15);
        v11 = v13;
        if ( v13 < 0 )
          sub_14045939A(a1, v15);
        else
          *a7 = v15;
      }
    }
    else
    {
      return (unsigned int)-1073741583;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v11;
}
