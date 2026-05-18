/*
 * XREFs of sub_180045CF0 @ 0x180045CF0
 * Callers:
 *     sub_180045E9C @ 0x180045E9C (sub_180045E9C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180044338 @ 0x180044338 (sub_180044338.c)
 */

_QWORD *__fastcall sub_180045CF0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r11
  _QWORD *v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // rax
  __int128 *v16; // rcx
  int v17; // ebx
  int v18; // edx
  __int64 v19; // rax
  __int128 v21; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v22[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v23; // [rsp+38h] [rbp-10h]
  __int64 v24; // [rsp+60h] [rbp+18h] BYREF

  v24 = a3;
  v4 = sub_180044338((__int64)&v24);
  v7 = v6[18];
  v8 = 2 * (v6[21] & v4);
  v9 = v6[16];
  v10 = *(_QWORD *)(v7 + 8 * v8 + 8);
  if ( v10 == v9 )
    goto LABEL_15;
  v11 = *(_QWORD *)(v7 + 8 * v8);
  while ( v5 != *(_QWORD *)(v10 + 16) )
  {
    if ( v10 == v11 )
      goto LABEL_15;
    v10 = *(_QWORD *)(v10 + 8);
  }
  if ( !v10 || v10 == v9 )
  {
LABEL_15:
    v23 = 0LL;
    v16 = (__int128 *)v22;
    v15 = 0LL;
    v18 = 0;
    v17 = 1;
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 32);
    v21 = 0LL;
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 + 8);
      while ( v13 )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13);
        if ( v14 == v13 )
        {
          v21 = *(_OWORD *)(v10 + 24);
          break;
        }
      }
    }
    v15 = v21;
    v16 = &v21;
    v17 = 0;
    v18 = 2;
  }
  *(_QWORD *)v16 = 0LL;
  *a2 = v15;
  v19 = *((_QWORD *)v16 + 1);
  *((_QWORD *)v16 + 1) = 0LL;
  a2[1] = v19;
  if ( v18 )
    sub_180010910((__int64)&v21);
  if ( v17 )
    sub_180010910((__int64)v22);
  return a2;
}
