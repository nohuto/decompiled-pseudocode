/*
 * XREFs of sub_180043208 @ 0x180043208
 * Callers:
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180043208(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  char v5; // si
  __int64 v6; // rbx
  __int64 v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 v10; // xmm1_8
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h]

  sub_180043668(a1);
  v4 = a2[1];
  v5 = 1;
  if ( v4 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
    v4 = a2[1];
  }
  v6 = *a2;
  v13 = *a2;
  v14 = v4;
  while ( sub_1800122C0(&v13) )
  {
    if ( v6 == a1 )
      goto LABEL_14;
    sub_180043668(v6);
    v15 = 0LL;
    v7 = *(_QWORD *)(v6 + 64);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      while ( v8 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8);
        if ( v9 == v8 )
        {
          v15 = *(_OWORD *)(v6 + 56);
          break;
        }
      }
    }
    v17 = *((_QWORD *)&v15 + 1);
    v10 = v15;
    v15 = 0LL;
    v6 = v10;
    v16 = v13;
    v13 = v10;
    v11 = v17;
    v17 = v14;
    v14 = v11;
    sub_180010910((__int64)&v16);
    sub_180010910((__int64)&v15);
  }
  v5 = 0;
LABEL_14:
  sub_180010910((__int64)&v13);
  sub_180010910((__int64)a2);
  return v5;
}
