/*
 * XREFs of sub_1800509F8 @ 0x1800509F8
 * Callers:
 *     sub_180053850 @ 0x180053850 (sub_180053850.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

_QWORD *__fastcall sub_1800509F8(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-10h] BYREF

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a3 + 6;
    v6 = a1 + 6;
    do
    {
      v7 = *(v6 - 5);
      if ( v7 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
        v7 = *(v6 - 5);
      }
      v18[0] = *v3;
      *v3 = *(v6 - 6);
      v8 = *(v5 - 5);
      *(v5 - 5) = v7;
      v18[1] = v8;
      sub_180010910((__int64)v18);
      *((_BYTE *)v5 - 32) = *((_BYTE *)v6 - 32);
      *((_DWORD *)v5 - 7) = *((_DWORD *)v6 - 7);
      v9 = *(v6 - 2);
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        v9 = *(v6 - 2);
      }
      v19[0] = *(v5 - 3);
      *(v5 - 3) = *(v6 - 3);
      v10 = *(v5 - 2);
      *(v5 - 2) = v9;
      v19[1] = v10;
      sub_180010910((__int64)v19);
      v11 = *v6;
      if ( *v6 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
        v11 = *v6;
      }
      v20[0] = *(v5 - 1);
      *(v5 - 1) = *(v6 - 1);
      v12 = *v5;
      *v5 = v11;
      v20[1] = v12;
      sub_180010910((__int64)v20);
      v13 = v6[2];
      if ( v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v13 = v6[2];
      }
      v21[0] = v5[1];
      v5[1] = v6[1];
      v14 = v5[2];
      v5[2] = v13;
      v21[1] = v14;
      sub_180010910((__int64)v21);
      v15 = v6[4];
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        v15 = v6[4];
      }
      v22[0] = v5[3];
      v5[3] = v6[3];
      v16 = v5[4];
      v5[4] = v15;
      v22[1] = v16;
      sub_180010910((__int64)v22);
      v6 += 11;
      v3 += 11;
      v5 += 11;
    }
    while ( v6 - 6 != a2 );
  }
  return v3;
}
