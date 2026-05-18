/*
 * XREFs of sub_18007EDF4 @ 0x18007EDF4
 * Callers:
 *     sub_180061A10 @ 0x180061A10 (sub_180061A10.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_18007F898 @ 0x18007F898 (sub_18007F898.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180026640 @ 0x180026640 (sub_180026640.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18007A618 @ 0x18007A618 (sub_18007A618.c)
 *     sub_18007ED30 @ 0x18007ED30 (sub_18007ED30.c)
 *     sub_18007ED70 @ 0x18007ED70 (sub_18007ED70.c)
 */

_QWORD *__fastcall sub_18007EDF4(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  _QWORD *result; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v16[5]; // [rsp+40h] [rbp-28h] BYREF
  float v17; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp+10h] BYREF

  v18 = a2;
  v6 = 2 * (a3 + 11LL);
  if ( !*(_QWORD *)(a1 + 16 * (a3 + 11LL)) )
  {
    v7 = (__int64 *)sub_18002850C(*(_QWORD *)(a1 + 32));
    v8 = sub_180026640(v7, v16);
    v9 = *v8;
    v10 = v8[1];
    *v8 = 0LL;
    v8[1] = 0LL;
    v11 = *(_QWORD *)(a1 + 8 * v6);
    *(_QWORD *)(a1 + 8 * v6) = v9;
    v15[0] = v11;
    v15[1] = *(_QWORD *)(a1 + 8 * v6 + 8);
    *(_QWORD *)(a1 + 8 * v6 + 8) = v10;
    sub_180010910((__int64)v15);
    sub_180010910((__int64)v16);
    v12 = (__int64 *)sub_18007ED30(a1, &v17, a3);
    sub_18007ED70((int *)&v18, *v12);
    sub_18007A618(*(__int64 **)(a1 + 8 * v6), (unsigned int)v18, HIDWORD(v18), 1u, 0, *(_QWORD *)(a1 + 32));
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v13 = *(_QWORD *)(a1 + 8 * v6 + 8);
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = *(_QWORD *)(a1 + 8 * v6 + 8);
  }
  *a2 = *(_QWORD *)(a1 + 8 * v6);
  result = a2;
  a2[1] = v13;
  return result;
}
