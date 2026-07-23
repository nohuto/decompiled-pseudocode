/*
 * XREFs of sub_1405284B0 @ 0x1405284B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14045939A @ 0x14045939A (sub_14045939A.c)
 *     sub_14051A9F8 @ 0x14051A9F8 (sub_14051A9F8.c)
 *     sub_14051AA64 @ 0x14051AA64 (sub_14051AA64.c)
 *     sub_14051AC2C @ 0x14051AC2C (sub_14051AC2C.c)
 *     sub_14052936C @ 0x14052936C (sub_14052936C.c)
 */

__int64 __fastcall sub_1405284B0(ULONG_PTR a1, int a2, int a3)
{
  int v3; // edi
  int v5; // ecx
  int v6; // r14d
  int v7; // ebx
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  _QWORD *v10; // rbx
  int v11; // eax
  __int64 i; // rbx
  unsigned __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR v15; // [rsp+38h] [rbp-18h] BYREF
  _QWORD *v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h] BYREF
  char v18; // [rsp+90h] [rbp+40h] BYREF
  int v19; // [rsp+98h] [rbp+48h]
  ULONG_PTR v20; // [rsp+A8h] [rbp+58h] BYREF

  v19 = a2;
  v3 = 0;
  v5 = *(_DWORD *)(a1 + 8);
  v17 = 0LL;
  v6 = 0;
  v15 = 0LL;
  v18 = 0;
  v14 = 0LL;
  v16 = 0LL;
  if ( v5 )
  {
    if ( v5 != 1 )
      return (unsigned int)-1073741585;
    return (unsigned int)v3;
  }
  if ( (int)sub_14052936C(a3, (unsigned int)&v14, (unsigned int)&v18, (unsigned int)&v16, (__int64)&v15) < 0 )
    return (unsigned int)-1073741583;
  v7 = v15;
  v8 = (__int64)v16;
  v9 = v14 >> 12;
  v20 = v15;
  if ( v18 )
  {
    v3 = sub_14051A9F8(a1, &v20, v14, 0LL, 0LL, &v17);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v6 = 1;
    v11 = sub_14051AC2C(a1, v19, v7, v14, v20);
    goto LABEL_14;
  }
  if ( (int)v9 <= 0 )
  {
LABEL_11:
    v11 = sub_14051AA64(a1, v19, v8, v9);
LABEL_14:
    v3 = v11;
    if ( v11 >= 0 )
      return (unsigned int)v3;
    goto LABEL_15;
  }
  v10 = v16;
  while ( 1 )
  {
    v20 = *v10 << 12;
    v3 = sub_14051A9F8(a1, &v20, 4096LL, 0LL, 0LL, &v17);
    if ( v3 < 0 )
      break;
    ++v6;
    ++v10;
    if ( v6 >= (int)v9 )
      goto LABEL_11;
  }
LABEL_15:
  if ( v6 > 0 )
  {
    if ( v18 )
    {
      sub_14045939A(a1, v20);
    }
    else
    {
      for ( i = v6; i >= 0; --i )
      {
        v20 = *(_QWORD *)(v8 + 8 * i) << 12;
        sub_14045939A(a1, v20);
      }
    }
  }
  return (unsigned int)v3;
}
