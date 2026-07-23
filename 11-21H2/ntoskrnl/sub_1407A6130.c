/*
 * XREFs of sub_1407A6130 @ 0x1407A6130
 * Callers:
 *     sub_1407A5F60 @ 0x1407A5F60 (sub_1407A5F60.c)
 * Callees:
 *     sub_1402F5E5C @ 0x1402F5E5C (sub_1402F5E5C.c)
 */

__int64 __fastcall sub_1407A6130(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rdi
  __int64 v9; // rbx
  int *v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  int *v13; // rdx
  __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // r14
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx

  *(_QWORD *)(a3 + 64) = *(_QWORD *)(a2 + 64) - *(_QWORD *)(a1 + 64);
  v6 = a2 - a1;
  *(_QWORD *)(a3 + 72) = *(_QWORD *)(a2 + 72) - *(_QWORD *)(a1 + 72);
  v9 = 3LL;
  *(_QWORD *)(a3 + 80) = *(_QWORD *)(a2 + 80) - *(_QWORD *)(a1 + 80);
  v10 = (int *)(a1 + 104);
  *(_QWORD *)(a3 + 88) = *(_QWORD *)(a2 + 88) - *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a3 + 96) = *(_QWORD *)(a2 + 96) - *(_QWORD *)(a1 + 96);
  v11 = a3 - a1;
  do
  {
    sub_1402F5E5C((__int64)v10 + v11, v10, (unsigned int *)((char *)v10 + v6));
    v10 = (int *)(v12 + 8);
    --v9;
  }
  while ( v9 );
  v13 = (int *)(a1 + 384);
  v14 = 5LL;
  do
  {
    result = sub_1402F5E5C((__int64)v13 + v11, v13, (unsigned int *)((char *)v13 + v6));
    v13 = (int *)(v16 + 8);
    --v14;
  }
  while ( v14 );
  v17 = a2 + 152;
  v18 = 4LL;
  *(_DWORD *)(a3 + 128) = *(_DWORD *)(a2 + 128) - *(_DWORD *)(a1 + 128);
  v19 = 0LL;
  *(_DWORD *)(a3 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a3 + 136) = *(_DWORD *)(a2 + 136) - *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a3 + 424) = *(_DWORD *)(a2 + 424) - *(_DWORD *)(a1 + 424);
  v20 = *(_DWORD *)(a2 + 428) - *(_DWORD *)(a1 + 428);
  v21 = a1 - a2;
  *(_DWORD *)(a3 + 428) = v20;
  v22 = a3 - a2;
  *(_OWORD *)(a3 + 272) = *(_OWORD *)(a2 + 272);
  *(_OWORD *)(a3 + 288) = *(_OWORD *)(a2 + 288);
  *(_OWORD *)(a3 + 304) = *(_OWORD *)(a2 + 304);
  *(_OWORD *)(a3 + 320) = *(_OWORD *)(a2 + 320);
  *(_OWORD *)(a3 + 336) = *(_OWORD *)(a2 + 336);
  *(_OWORD *)(a3 + 352) = *(_OWORD *)(a2 + 352);
  *(_OWORD *)(a3 + 368) = *(_OWORD *)(a2 + 368);
  do
  {
    v23 = *(_QWORD *)(v17 - 152) - *(_QWORD *)(v17 + v21 - 152);
    *(_QWORD *)(v17 + v22 - 152) = v23;
    v17 += 16LL;
    v24 = v23 + v19;
    v25 = *(_QWORD *)(v17 - 24) - *(_QWORD *)(v21 + v17 - 24);
    *(_QWORD *)(v22 + v17 - 24) = v25;
    v26 = v25 + v24;
    *(_QWORD *)(v22 + v17 + 40) = *(_QWORD *)(v17 + 40) - *(_QWORD *)(v21 + v17 + 40);
    v27 = *(_QWORD *)(v17 - 160) - *(_QWORD *)(v17 + v21 - 160);
    *(_QWORD *)(v17 + v22 - 160) = v27;
    v28 = v27 + v26;
    v29 = *(_QWORD *)(v17 - 16) - *(_QWORD *)(v21 + v17 - 16);
    *(_QWORD *)(v22 + v17 - 16) = v29;
    v19 = v29 + v28;
    *(_QWORD *)(v22 + v17 + 48) = *(_QWORD *)(v17 + 48) - *(_QWORD *)(v21 + v17 + 48);
    --v18;
  }
  while ( v18 );
  *a4 = !v19
     && !*(_QWORD *)(a3 + 64)
     && !*(_QWORD *)(a3 + 72)
     && !*(_QWORD *)(a3 + 80)
     && (*(_DWORD *)(a3 + 108) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 116) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 124) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 388) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 396) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 404) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 412) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 420) & 0x7FFFFFFF) == 0
     && !*(_DWORD *)(a3 + 128)
     && !*(_DWORD *)(a3 + 132)
     && !*(_DWORD *)(a3 + 136);
  return result;
}
