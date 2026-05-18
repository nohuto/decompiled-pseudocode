/*
 * XREFs of sub_180040DA0 @ 0x180040DA0
 * Callers:
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 *     sub_18009DA30 @ 0x18009DA30 (sub_18009DA30.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180040BEC @ 0x180040BEC (sub_180040BEC.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

_QWORD *__fastcall sub_180040DA0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rdx
  __int128 *v12; // rcx
  __int64 v13; // rax
  int v14; // ebx
  int v15; // r8d
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v18[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v19; // [rsp+38h] [rbp-10h]

  sub_180043668(a1);
  v6 = sub_180040BEC(a1, *a3);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 16);
    v17 = 0LL;
    if ( !v8 )
LABEL_14:
      sub_1800120F4();
    v9 = *(_DWORD *)(v8 + 8);
    do
    {
      if ( !v9 )
        goto LABEL_14;
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
    }
    while ( v10 != v9 );
    v11 = *(_QWORD *)(v7 + 8);
    v12 = &v17;
    v13 = *(_QWORD *)(v7 + 16);
    v14 = 1;
    *(_QWORD *)&v17 = v11;
    v15 = 0;
    *((_QWORD *)&v17 + 1) = v13;
  }
  else
  {
    v19 = 0LL;
    v12 = (__int128 *)v18;
    v11 = 0LL;
    v15 = 2;
    v14 = 0;
  }
  a2[1] = *((_QWORD *)v12 + 1);
  *a2 = v11;
  *(_QWORD *)v12 = 0LL;
  *((_QWORD *)v12 + 1) = 0LL;
  if ( v15 )
    sub_180010910((__int64)v18);
  if ( v14 )
    sub_180010910((__int64)&v17);
  return a2;
}
