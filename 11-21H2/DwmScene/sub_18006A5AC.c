/*
 * XREFs of sub_18006A5AC @ 0x18006A5AC
 * Callers:
 *     sub_18006DFB0 @ 0x18006DFB0 (sub_18006DFB0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_18006AE34 @ 0x18006AE34 (sub_18006AE34.c)
 *     sub_180070344 @ 0x180070344 (sub_180070344.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18006A5AC(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  char v15; // bl
  __int128 v17; // [rsp+30h] [rbp-29h] BYREF
  __int128 v18; // [rsp+40h] [rbp-19h] BYREF
  __int128 v19; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v21[8]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v22; // [rsp+78h] [rbp+1Fh]
  _BYTE v23[48]; // [rsp+80h] [rbp+27h] BYREF

  sub_18002C73C(a1 + 16);
  v8 = *a4;
  v17 = 0LL;
  v9 = *(_QWORD *)(v8 + 64);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 8);
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
      if ( v11 == v10 )
      {
        v17 = *(_OWORD *)(v8 + 56);
        break;
      }
    }
  }
  v19 = 0LL;
  if ( *((_QWORD *)&v17 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL));
  v19 = v17;
  v18 = 0LL;
  v12 = a3[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = a3[1];
  }
  *(_QWORD *)&v18 = *a3;
  *((_QWORD *)&v18 + 1) = v12;
  sub_180070344(a1, v20, &v18, &v19, 0);
  if ( sub_1800122C0(v20) )
  {
    v13 = (__int64 *)sub_18006AE34(v20[0], v23);
    v14 = *v13;
    v15 = 5;
  }
  else
  {
    v22 = 0LL;
    v13 = (__int64 *)v21;
    v14 = 0LL;
    v15 = 6;
  }
  *a2 = v14;
  a2[1] = v13[1];
  *v13 = 0LL;
  v13[1] = 0LL;
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    sub_180010910((__int64)v21);
  }
  if ( (v15 & 1) != 0 )
    sub_180010910((__int64)v23);
  sub_180010910((__int64)v20);
  sub_180010910((__int64)&v17);
  sub_180010910((__int64)a3);
  sub_180010910((__int64)a4);
  return a2;
}
