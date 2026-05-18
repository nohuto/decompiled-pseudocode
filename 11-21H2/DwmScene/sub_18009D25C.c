/*
 * XREFs of sub_18009D25C @ 0x18009D25C
 * Callers:
 *     sub_18009E1E0 @ 0x18009E1E0 (sub_18009E1E0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180065394 @ 0x180065394 (sub_180065394.c)
 *     sub_18006558C @ 0x18006558C (sub_18006558C.c)
 *     sub_18006566C @ 0x18006566C (sub_18006566C.c)
 *     sub_180065750 @ 0x180065750 (sub_180065750.c)
 *     sub_18009DECC @ 0x18009DECC (sub_18009DECC.c)
 *     sub_18009E008 @ 0x18009E008 (sub_18009E008.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009D25C(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  int *v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rax
  int *v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // xmm1_4
  unsigned int v19; // xmm2_4
  __int64 *v20; // rax
  __int128 v21; // [rsp+20h] [rbp-29h] BYREF
  __int64 v22[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp+7h] BYREF
  __int128 v25; // [rsp+60h] [rbp+17h] BYREF
  __int128 v26; // [rsp+70h] [rbp+27h] BYREF
  __int64 v27[4]; // [rsp+80h] [rbp+37h] BYREF

  if ( *(_DWORD *)(a1 + 1960) )
  {
    v9 = *(_QWORD *)(a1 + 1920);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = *(_QWORD *)(a1 + 1920);
    }
    v24[0] = *(_QWORD *)(a1 + 1912);
    v24[1] = v9;
    if ( sub_1800122B0(v24)
      || ((v12 = *(_QWORD *)(v10 + 136)) == 0 || (v13 = *(int **)(v12 + 128)) == 0LL ? (v14 = 0) : (v14 = *v13),
          v14 != *(_DWORD *)(a1 + 1940)
       || (!v12 || (v15 = *(_QWORD *)(v12 + 128)) == 0 ? (v16 = 0) : (v16 = *(_DWORD *)(v15 + 16)), v16 != v11)) )
    {
      sub_18009DECC(a1, v11);
    }
    v17 = *(_QWORD *)(a1 + 1920);
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      v17 = *(_QWORD *)(a1 + 1920);
    }
    v23[0] = *(_QWORD *)(a1 + 1912);
    v23[1] = v17;
    sub_18006558C(a1, v23);
    v25 = 0LL;
    sub_180065394(a1, (__int64 *)&v25);
    sub_18006566C(a1, *(_DWORD *)(a1 + 1928), 0);
    sub_18006566C(a1, *(_DWORD *)(a1 + 1932), 1);
    sub_18006566C(a1, *(_DWORD *)(a1 + 1936), 1);
    *(_BYTE *)(a1 + 465) |= 1u;
    v18 = *(_DWORD *)(a1 + 404);
    v19 = *(_DWORD *)(a1 + 408);
    LODWORD(v21) = *(_DWORD *)(a1 + 400);
    DWORD1(v21) = v18;
    *((_QWORD *)&v21 + 1) = v19;
    v20 = sub_18001875C(v27, (__int64)&qword_1801F5678);
    v26 = v21;
    sub_180065750(a1, (__int64)v20, &v26, -1);
    return sub_180010910((__int64)v24);
  }
  else
  {
    v2 = (_QWORD *)(a1 + 1832);
    if ( sub_1800122B0((_QWORD *)(a1 + 1832))
      || ((v3 = *(_QWORD *)(*v2 + 112LL)) == 0 || (v4 = *(int **)(v3 + 128)) == 0LL ? (v5 = 0) : (v5 = *v4),
          v5 != *(_DWORD *)(a1 + 1940)) )
    {
      sub_18009E008(a1);
    }
    v26 = 0LL;
    *(_QWORD *)&v25 = *(_QWORD *)(a1 + 1912);
    *(_QWORD *)(a1 + 1912) = 0LL;
    *((_QWORD *)&v25 + 1) = *(_QWORD *)(a1 + 1920);
    *(_QWORD *)(a1 + 1920) = 0LL;
    sub_180010910((__int64)&v25);
    sub_180010910((__int64)&v26);
    v6 = *(_QWORD *)(a1 + 1920);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = *(_QWORD *)(a1 + 1920);
    }
    *(_QWORD *)&v21 = *(_QWORD *)(a1 + 1912);
    *((_QWORD *)&v21 + 1) = v6;
    sub_18006558C(a1, (__int64 *)&v21);
    v7 = v2[1];
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = v2[1];
    }
    v22[0] = *v2;
    v22[1] = v7;
    sub_180065394(a1, v22);
    sub_18006566C(a1, *(_DWORD *)(a1 + 1928), 1);
    sub_18006566C(a1, *(_DWORD *)(a1 + 1932), 0);
    result = sub_18006566C(a1, *(_DWORD *)(a1 + 1936), 0);
    *(_BYTE *)(a1 + 465) &= ~1u;
  }
  return result;
}
