/*
 * XREFs of sub_1407A9220 @ 0x1407A9220
 * Callers:
 *     sub_140667A4C @ 0x140667A4C (sub_140667A4C.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 *     sub_1407AC930 @ 0x1407AC930 (sub_1407AC930.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 * Callees:
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A6A34 @ 0x1407A6A34 (sub_1407A6A34.c)
 *     sub_1407A711C @ 0x1407A711C (sub_1407A711C.c)
 *     sub_1407A723C @ 0x1407A723C (sub_1407A723C.c)
 *     sub_1407A72A0 @ 0x1407A72A0 (sub_1407A72A0.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 *     sub_1407A96A0 @ 0x1407A96A0 (sub_1407A96A0.c)
 *     sub_1407A9720 @ 0x1407A9720 (sub_1407A9720.c)
 *     sub_1407A98B0 @ 0x1407A98B0 (sub_1407A98B0.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 */

__int64 __fastcall sub_1407A9220(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r10
  __int64 result; // rax
  _DWORD *v7; // r12
  __int64 v8; // r14
  __int64 v10; // r15
  int v11; // r13d
  __int64 v12; // rsi
  int v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // esi
  int v30; // ebp
  __int64 v31; // rdi
  __int64 v32; // r8
  int v33; // r13d
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  ULONG_PTR v46; // rsi
  ULONG_PTR v47; // rdi
  int v48; // ebp
  __int64 v49; // rcx
  __int64 v50; // [rsp+20h] [rbp-38h]

  v5 = a5;
  result = 0LL;
  *(_DWORD *)(a5 + 4) = 0;
  v7 = (_DWORD *)(a5 + 4);
  v8 = a4;
  v10 = a1;
  if ( a2 < 0 )
  {
    if ( a4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a5 + 8) = 0;
      result = *(_QWORD *)(a3 + 136);
      a1 = *(unsigned int *)(result + 8);
      *(_DWORD *)(a5 + 16) = a1;
      *v7 |= 0x80000000;
    }
    v29 = a4 & 0x40000000;
    if ( (a4 & 0x40000000) != 0 )
    {
      result = sub_1407A723C(a1, a3, (_DWORD *)(a5 + 8 + (((__int64)a4 >> 63) & 0xC)), v7);
      v5 = a5;
    }
    v30 = v8 & 0x20000000;
    if ( (v8 & 0x20000000) != 0 )
    {
      v31 = v8 >> 63;
      v32 = ((v8 >> 63) & 0xC) + 24;
      if ( !v29 )
        v32 = ((v8 >> 63) & 0xC) + 8;
      result = sub_1407A72A0(v10, a3, (_DWORD *)(v5 + v32), v7);
    }
    else
    {
      v31 = v8 >> 63;
    }
    v33 = v8 & 0x10000000;
    if ( (v8 & 0x10000000) != 0 )
    {
      v34 = v31 & 0xC;
      v35 = v34 + 24;
      if ( !v29 )
        v35 = v34 + 8;
      v36 = v35 + 20;
      if ( !v30 )
        v36 = v35;
      result = sub_1407A711C(v10, a3, (_DWORD *)(v5 + v36), v7);
    }
    else
    {
      v34 = v31 & 0xC;
    }
    v37 = v34 + 8;
    v38 = v8 & 0x8000000;
    if ( (v8 & 0x8000000) != 0 )
    {
      v39 = v34 + 24;
      if ( !v29 )
        v39 = v34 + 8;
      v40 = v39 + 20;
      if ( !v30 )
        v40 = v39;
      v41 = v40 + 16;
      if ( !v33 )
        v41 = v40;
      result = sub_1407A9720(v10, a3, a5 + v41, v7);
      v38 = v8 & 0x8000000;
      v37 = v34 + 8;
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      v42 = v37 + 16;
      if ( !v29 )
        v42 = v37;
      v43 = v42 + 20;
      if ( !v30 )
        v43 = v42;
      v44 = v43 + 16;
      if ( !v33 )
        v44 = v43;
      v45 = v44 + 24;
      if ( !v38 )
        v45 = v44;
      v28 = v45 + a5;
      return sub_1407A96A0(v10, a3, v28, v7);
    }
  }
  else
  {
    if ( a4 < 0 && *(_QWORD *)(a3 + 136) )
    {
      *(_DWORD *)(a5 + 8) = 0;
      result = *(_QWORD *)(a3 + 136);
      *(_QWORD *)(a5 + 24) = *(_QWORD *)(result + 8);
      *v7 |= 0x80000000;
    }
    v11 = a4 & 0x40000000;
    if ( (a4 & 0x40000000) != 0 )
    {
      v12 = *(_QWORD *)(a3 + 144);
      result = a5 + (((__int64)a4 >> 63) & 0x18) + 8;
      v50 = result;
      if ( v12 )
      {
        v46 = *(_QWORD *)(v12 + 16);
        sub_1407A7F84(v46);
        v47 = *(_QWORD *)(*(_QWORD *)(a3 + 144) + 16LL);
        sub_1407A6A34(v47);
        v48 = *(_DWORD *)(v47 + 48);
        sub_1407B0F40(v47);
        sub_1407A5A54(v46, 1);
        v49 = *(_QWORD *)(a3 + 144);
        *(_OWORD *)v50 = 0LL;
        *(_OWORD *)(v50 + 16) = 0LL;
        *(_QWORD *)(v50 + 16) = *(_QWORD *)(v49 + 40);
        result = *(_QWORD *)(v49 + 48);
        *(_QWORD *)(v50 + 24) = result;
        if ( (v48 & 1) != 0 )
          *(_DWORD *)v50 = 0x40000;
        *v7 |= 0x40000000u;
        v5 = a5;
      }
    }
    v13 = v8 & 0x20000000;
    if ( (v8 & 0x20000000) != 0 )
    {
      v14 = ((v8 >> 63) & 0x18) + 40;
      if ( !v11 )
        v14 = ((v8 >> 63) & 0x18) + 8;
      if ( *(_QWORD *)(a3 + 56) == v10 || *(_QWORD *)(a3 + 64) == v10 )
        v15 = *(_QWORD *)(a3 + 128);
      else
        v15 = *(_QWORD *)(a3 + 120);
      *(_QWORD *)(v14 + v5) = v15;
      if ( *(_QWORD *)(a3 + 56) == v10 || *(_QWORD *)(a3 + 64) == v10 )
        v16 = *(_DWORD *)(a3 + 72);
      else
        v16 = *(_DWORD *)(a3 + 44);
      *(_DWORD *)(v14 + v5 + 16) = v16;
      if ( (*(_DWORD *)(v10 + 416) & 6) == 4 )
        v17 = *(_QWORD *)(a3 + 104);
      else
        v17 = *(_QWORD *)(a3 + 112);
      *(_QWORD *)(v14 + v5 + 8) = v17;
      *(_DWORD *)(v14 + v5 + 20) = *(_DWORD *)(a3 + 264);
      result = *(unsigned int *)(a3 + 272);
      *(_DWORD *)(v14 + v5 + 24) = result;
      if ( a5 != -4 && *(_QWORD *)(v14 + v5) )
        *v7 |= 0x20000000u;
    }
    v18 = v8 & 0x10000000;
    if ( (v8 & 0x10000000) != 0 )
    {
      v19 = ((v8 >> 63) & 0x18) + 40;
      if ( !v11 )
        v19 = ((v8 >> 63) & 0x18) + 8;
      if ( v13 )
        v19 += 32LL;
      result = sub_1407A98B0(v10, a3, v19 + v5);
    }
    v20 = v8 & 0x8000000;
    if ( (v8 & 0x8000000) != 0 )
    {
      v21 = v8 >> 63;
      v22 = ((v8 >> 63) & 0x18) + 40;
      if ( !v11 )
        v22 = ((v8 >> 63) & 0x18) + 8;
      if ( v13 )
        v22 += 32LL;
      v23 = v22 + 24;
      if ( !v18 )
        v23 = v22;
      result = sub_1407A9720(v10, a3, a5 + v23, v7);
      v20 = v8 & 0x8000000;
    }
    else
    {
      v21 = v8 >> 63;
    }
    if ( (v8 & 0x2000000) != 0 )
    {
      v24 = v21 & 0x18;
      v25 = v24 + 40;
      if ( !v11 )
        v25 = v24 + 8;
      if ( v13 )
        v25 += 32LL;
      v26 = v25 + 24;
      if ( !v18 )
        v26 = v25;
      v27 = v26 + 24;
      if ( !v20 )
        v27 = v26;
      v28 = v27 + a5;
      return sub_1407A96A0(v10, a3, v28, v7);
    }
  }
  return result;
}
