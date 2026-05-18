/*
 * XREFs of sub_1800A70F0 @ 0x1800A70F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001380C @ 0x18001380C (sub_18001380C.c)
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A70F0(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int64 v5; // rdi
  __int64 v7; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+28h] [rbp-48h]
  unsigned __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  int v10; // [rsp+38h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-30h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-10h] BYREF

  v12 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
      if ( v4 == v3 )
      {
        v5 = *(_QWORD *)(a1 + 56);
        v12 = *(_OWORD *)(a1 + 56);
        goto LABEL_6;
      }
    }
  }
  v5 = v12;
LABEL_6:
  v7 = 0x3F80000000000000LL;
  v8 = 0;
  sub_18001380C(v5, &v7);
  v9 = 0x3F80000000000000LL;
  v10 = 0;
  *(_QWORD *)&v11 = 0LL;
  DWORD2(v11) = 0;
  sub_1800417D8(v5, (unsigned __int64 *)&v11, &v9);
  v11 = 0LL;
  v13[0] = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  v13[1] = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  sub_180010910((__int64)v13);
  sub_180010910((__int64)&v11);
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 124) = 0LL;
  *(_QWORD *)(a1 + 132) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 116) = 1065353216LL;
  *(_QWORD *)(a1 + 140) = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  return sub_180010910((__int64)&v12);
}
