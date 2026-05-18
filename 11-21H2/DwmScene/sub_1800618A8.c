/*
 * XREFs of sub_1800618A8 @ 0x1800618A8
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_18009CC54 @ 0x18009CC54 (sub_18009CC54.c)
 *     sub_1800A8184 @ 0x1800A8184 (sub_1800A8184.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_1800606D0 @ 0x1800606D0 (sub_1800606D0.c)
 *     sub_180065750 @ 0x180065750 (sub_180065750.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800618A8(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 *v13; // rax
  __int64 v15; // [rsp+28h] [rbp-41h] BYREF
  __int64 v16; // [rsp+30h] [rbp-39h]
  _QWORD v17[2]; // [rsp+38h] [rbp-31h] BYREF
  __int64 v18[4]; // [rsp+48h] [rbp-21h] BYREF
  char v19[8]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v20; // [rsp+70h] [rbp+7h]
  __int64 v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+80h] [rbp+17h]
  _QWORD v23[2]; // [rsp+88h] [rbp+1Fh] BYREF

  v19[0] = 1;
  v20 = a2;
  v21 = a3;
  v22 = a5;
  v9 = a4[1];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = a4[1];
  }
  v10 = *a4;
  v15 = 0LL;
  v23[0] = v10;
  v16 = 0LL;
  v23[1] = v9;
  sub_180010910((__int64)&v15);
  v11 = a1[14];
  if ( v11 == a1[15] )
  {
    sub_1800606D0(a1 + 13, v11, (__int64)v19);
  }
  else
  {
    *(_BYTE *)v11 = 1;
    *(_QWORD *)(v11 + 8) = a2;
    *(_QWORD *)(v11 + 16) = a3;
    *(_QWORD *)(v11 + 24) = a5;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 40) = 0LL;
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    *(_QWORD *)(v11 + 32) = v10;
    *(_QWORD *)(v11 + 40) = v9;
    a1[14] += 48LL;
  }
  v12 = -1431655765 * ((a1[14] - a1[13]) >> 4) - 1;
  v15 = COERCE_UNSIGNED_INT((float)(int)v12);
  v16 = 0LL;
  v13 = sub_18001875C(v18, (__int64)&qword_1801F5078);
  v17[0] = v15;
  v17[1] = v16;
  sub_180065750(a1, v13, v17, v12);
  sub_180010910((__int64)v23);
  sub_180010910((__int64)a4);
  return v12;
}
