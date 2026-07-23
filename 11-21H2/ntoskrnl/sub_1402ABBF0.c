/*
 * XREFs of sub_1402ABBF0 @ 0x1402ABBF0
 * Callers:
 *     sub_14022A8D0 @ 0x14022A8D0 (sub_14022A8D0.c)
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 *     sub_140460192 @ 0x140460192 (sub_140460192.c)
 *     sub_14062F600 @ 0x14062F600 (sub_14062F600.c)
 *     sub_14062F694 @ 0x14062F694 (sub_14062F694.c)
 *     sub_140630ACC @ 0x140630ACC (sub_140630ACC.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     sub_14022A874 @ 0x14022A874 (sub_14022A874.c)
 *     sub_14022DB00 @ 0x14022DB00 (sub_14022DB00.c)
 *     sub_1402E1704 @ 0x1402E1704 (sub_1402E1704.c)
 *     sub_1402E1B84 @ 0x1402E1B84 (sub_1402E1B84.c)
 *     sub_1402E1BD0 @ 0x1402E1BD0 (sub_1402E1BD0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140633018 @ 0x140633018 (sub_140633018.c)
 */

__int64 __fastcall sub_1402ABBF0(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4, int a5)
{
  unsigned int v7; // r8d
  unsigned int v8; // edi
  unsigned int v9; // ebx
  signed __int64 *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  _QWORD *v14; // r12
  signed __int64 *v15; // r15
  signed __int64 v16; // rsi
  signed __int64 v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rsi
  unsigned __int32 v20; // r13d
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  ULONG_PTR v25; // r11
  __int64 v26; // r8
  unsigned __int128 v27; // rax
  __int64 v28; // rax
  unsigned __int32 v29; // eax
  __int64 v30; // rdx
  __int64 result; // rax
  int v32; // eax
  signed __int64 v33; // rax
  signed __int64 i; // rcx
  signed __int64 v35; // rtt
  int v36; // edi
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rdx
  signed __int64 v40; // rax
  signed __int64 v41; // rtt
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v43; // r8
  signed __int64 v44; // r9
  signed __int64 v45; // rcx
  __int64 v46; // r11
  signed __int64 v47; // r10
  unsigned __int32 v48; // eax
  ULONG_PTR v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // r10
  signed __int64 v54; // rax
  ULONG_PTR v55; // r11
  int v56; // r9d
  unsigned __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  unsigned __int64 v60; // r8
  signed __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  ULONG_PTR v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r9
  int v73; // r10d
  __int64 v74; // rcx
  __int64 v75; // r9
  __int64 v76; // rcx
  unsigned __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // r8
  signed __int32 v81[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v82; // [rsp+30h] [rbp-88h]
  unsigned int v83; // [rsp+34h] [rbp-84h]
  ULONG_PTR v84; // [rsp+38h] [rbp-80h]
  unsigned int v85; // [rsp+40h] [rbp-78h]
  __int64 v86; // [rsp+48h] [rbp-70h]
  signed __int64 v87; // [rsp+50h] [rbp-68h] BYREF
  __int64 v88; // [rsp+58h] [rbp-60h] BYREF
  int v89; // [rsp+60h] [rbp-58h]
  __int64 v90; // [rsp+68h] [rbp-50h]
  __int64 v91; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v92; // [rsp+78h] [rbp-40h]
  char v93; // [rsp+C0h] [rbp+8h] BYREF
  __int64 *v94; // [rsp+D8h] [rbp+20h]

  v94 = a4;
  if ( *(int *)(a1 + 16) < 0 || a2 > *(_DWORD *)(a1 + 8) )
  {
LABEL_66:
    sub_14022A874(a1);
    return 0LL;
  }
  v7 = *(_DWORD *)(a1 + 4);
  v8 = *(_DWORD *)a1;
  v9 = (a2 + 7) & 0xFFFFFFF8;
  v83 = v9;
  v82 = v7;
  v85 = v8;
  while ( 1 )
  {
    v10 = qword_140D088C0;
    v11 = *((unsigned int *)KeGetCurrentPrcb() + 9);
    v12 = *(_QWORD *)(a1 + 1096);
    v89 = v11;
    if ( v12 == qword_140D05008 )
    {
      if ( (unsigned int)v11 >= (unsigned int)dword_140D06884 )
      {
        v13 = 0LL;
      }
      else
      {
        _mm_lfence();
        v13 = qword_140D088C0[v11];
      }
      v14 = (_QWORD *)(*(_QWORD *)(v13 + 34472) + 320LL);
    }
    else
    {
      v14 = (_QWORD *)(*(_QWORD *)(v12 + 4144) + (v11 << 6));
    }
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) != 0 )
      v15 = (signed __int64 *)(a1 + 128);
    else
      v15 = (signed __int64 *)(*v14 + 8LL * v8);
    v93 = 0;
    _m_prefetchw(v15);
    v16 = *v15;
    if ( (*v15 & 0xF) != 0 )
    {
      do
      {
        v17 = _InterlockedCompareExchange64(v15, v16 - 1, v16);
        if ( v16 == v17 )
          break;
        v16 = v17;
      }
      while ( (v17 & 0xF) != 0 );
    }
    if ( !v16 )
    {
      LODWORD(v19) = 0;
      goto LABEL_44;
    }
    v18 = v16 & 0xF;
    if ( (v16 & 0xF) != 0 )
    {
      v19 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v18 == 1 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFu);
        _m_prefetchw(v15);
        v40 = *v15;
        while ( (v40 & 0xF) == 0 )
        {
          if ( v19 != (v40 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v41 = v40;
          v40 = _InterlockedCompareExchange64(v15, v40 + 15, v40);
          if ( v41 == v40 )
            goto LABEL_15;
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFF1);
      }
    }
    else
    {
      sub_1402E1BD0(a1, &v93);
      v19 = *v15 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v19 )
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 12));
      sub_1402E1B84(a1, &v93);
      v7 = v82;
    }
LABEL_15:
    if ( v19 )
    {
      v87 = 0LL;
      v88 = 0LL;
      _m_prefetchw((const void *)(v19 + 8));
      v20 = *(_DWORD *)(v19 + 8);
      if ( v20 <= v7 )
        break;
    }
LABEL_44:
    v36 = sub_1402E1704(a1, v19, (_DWORD)v15, v89, a5);
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v43 = PerformanceCounter.QuadPart
          - _InterlockedExchange64((volatile __int64 *)(a1 + 1256), PerformanceCounter.QuadPart);
      do
      {
        v44 = *(_QWORD *)(a1 + 1264);
        if ( v44 )
          v45 = (v44 + v43 + 2 * v44) / 4;
        else
          v45 = v43;
      }
      while ( v44 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1264), v45, v44) );
    }
    if ( v36 < 0 )
      goto LABEL_66;
    v8 = v85;
    v7 = v82;
  }
  while ( (*(_DWORD *)(a1 + 816) & 0x8000000) != 0 )
  {
    if ( (unsigned int)sub_140633018(a1, &v88, &v87, v10) )
      goto LABEL_83;
    v46 = 8LL * v8;
    v47 = *(_QWORD *)(v46 + v14[2]);
    if ( v87 == v47 && v20 != 72 )
    {
      v28 = v88;
      goto LABEL_28;
    }
    v48 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v20 + 24, v20);
    if ( v20 == v48 )
    {
      if ( (unsigned __int64)v48 + 24 > v82 )
      {
        *(_DWORD *)(v19 + 4) = v48;
        goto LABEL_44;
      }
      v37 = v47 == _InterlockedCompareExchange64((volatile signed __int64 *)(v14[2] + v46), v87, v47);
      *(_DWORD *)(v48 + v19 + 4) = 5308440;
      v20 = v48;
      *(_QWORD *)(v48 + v19 + 8) = v88;
      if ( v37 )
      {
        *(_QWORD *)(v48 + v19 + 16) = v87;
        *(_DWORD *)(v48 + v19) = -1072627710;
      }
      else
      {
        *(_DWORD *)(v48 + v19) = -1072627711;
        *(_QWORD *)(v48 + v19 + 16) = 0LL;
      }
    }
    else
    {
      v20 = v48;
    }
LABEL_83:
    v7 = v82;
LABEL_51:
    if ( v20 > v7 )
      goto LABEL_44;
  }
  v21 = *(_QWORD *)(a1 + 24);
  if ( v21 > 3 )
    goto LABEL_128;
  if ( (_DWORD)v21 == 1 )
  {
    v84 = qword_140C4E390;
    if ( *(_DWORD *)(qword_140C4E390 + 228) == 5 )
    {
      v22 = 10000000LL;
      v90 = 10000000LL;
      if ( Address )
      {
        if ( (*(_DWORD *)(qword_140C4E390 + 224) & 0x10000) != 0 )
          v23 = *(_QWORD *)(qword_140C4E390 + 72)
              + (unsigned int)(*(_DWORD *)(qword_140C4E390 + 80) * HIDWORD(KeGetPcr()[1].LockArray));
        else
          v23 = *(_QWORD *)(qword_140C4E390 + 72);
        v24 = sub_14042A5E0(v23, qword_140C4E390);
        v25 = v84;
        v26 = MEMORY[0xFFFFF780000003B8];
        v27 = (unsigned __int64)v24 * (unsigned __int128)*((unsigned __int64 *)Address + 1);
        goto LABEL_25;
      }
      if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
      {
        v65 = sub_140303720(qword_140C4E390);
        v67 = sub_14042A5E0(v65, v66);
        v55 = v84;
        v61 = v67;
        v62 = *(_QWORD *)(v84 + 208);
      }
      else
      {
        v49 = qword_140C4E390;
        do
        {
          v86 = *(_QWORD *)(v49 + 208);
          do
          {
            v50 = *(_QWORD *)(v49 + 200);
            v51 = sub_140303720(v49);
            v53 = sub_14042A5E0(v51, v52);
            _InterlockedOr(v81, 0);
            v54 = *(_QWORD *)(v49 + 200);
          }
          while ( v50 != v54 );
        }
        while ( v86 != *(_QWORD *)(v49 + 208) );
        v55 = v84;
        v22 = v90;
        v56 = *(_DWORD *)(v84 + 220);
        v57 = v50 ^ v53;
        if ( _bittest64((const __int64 *)&v57, (unsigned __int8)(v56 - 1)) )
        {
          if ( v56 == 64 )
            v58 = -1LL;
          else
            v58 = (1LL << v56) - 1;
          v59 = 0LL;
          if ( v56 != 64 )
            v59 = 1LL << v56;
          v60 = v50 & v58;
          v61 = v53 | v50 ^ v60;
          if ( v53 < v60 )
            v61 += v59;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v84 + 200), v61, v54);
          v9 = v83;
          v62 = v86;
        }
        else
        {
          if ( v56 == 64 )
            v63 = -1LL;
          else
            v63 = (1LL << v56) - 1;
          v62 = v86;
          v64 = v50 & ~v63;
          v9 = v83;
          v61 = v53 | v64;
        }
      }
      v28 = sub_1403A572C(v62 + v61, *(_QWORD *)(v55 + 192), 10000000LL);
    }
    else
    {
      v37 = *(_DWORD *)(qword_140C4E390 + 220) == 64;
      v22 = *(_QWORD *)(qword_140C4E390 + 192);
      v90 = v22;
      if ( v37 )
      {
        v38 = sub_140303720(qword_140C4E390);
        *(_QWORD *)&v27 = sub_14042A5E0(v38, v39);
        v25 = v84;
        *((_QWORD *)&v27 + 1) = v27;
        v26 = *(_QWORD *)(v84 + 208);
      }
      else
      {
        v68 = qword_140C4E390;
        do
        {
          v86 = *(_QWORD *)(v68 + 208);
          do
          {
            v69 = *(_QWORD *)(v68 + 200);
            v70 = sub_140303720(v68);
            v72 = sub_14042A5E0(v70, v71);
            v92 = v72;
            _InterlockedOr(v81, 0);
            *(_QWORD *)&v27 = *(_QWORD *)(v68 + 200);
          }
          while ( v69 != (_QWORD)v27 );
          v26 = v86;
        }
        while ( v86 != *(_QWORD *)(v68 + 208) );
        v25 = v84;
        v22 = v90;
        v73 = *(_DWORD *)(v84 + 220);
        v74 = v69 ^ v72;
        if ( _bittest64(&v74, (unsigned __int8)(v73 - 1)) )
        {
          if ( v73 == 64 )
            v75 = -1LL;
          else
            v75 = (1LL << v73) - 1;
          v76 = 0LL;
          if ( v73 != 64 )
            v76 = 1LL << v73;
          v77 = v69 & v75;
          *((_QWORD *)&v27 + 1) = v92 | v69 ^ v77;
          if ( v92 < v77 )
            *((_QWORD *)&v27 + 1) += v76;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v84 + 200), *((signed __int64 *)&v27 + 1), v27);
          v9 = v83;
        }
        else
        {
          if ( v73 == 64 )
            v78 = -1LL;
          else
            v78 = (1LL << v73) - 1;
          v79 = v69 & ~v78;
          v9 = v83;
          *((_QWORD *)&v27 + 1) = v72 | v79;
        }
      }
LABEL_25:
      v28 = v26 + *((_QWORD *)&v27 + 1);
    }
    if ( v25 != qword_140C4E388 && qword_140C4E388 )
    {
      v80 = *(_QWORD *)(qword_140C4E388 + 192);
      if ( *(_DWORD *)(qword_140C4E388 + 228) == 5 )
        v80 = 10000000LL;
      v28 = sub_1403A572C(v28, v22, v80);
    }
    v8 = v85;
    goto LABEL_28;
  }
  if ( !(_DWORD)v21 )
  {
    v28 = sub_14022DB00();
LABEL_28:
    v7 = v82;
    goto LABEL_29;
  }
  v32 = v21 - 2;
  if ( !v32 )
  {
    v91 = 0LL;
    sub_14042A5E0(&v91, 0LL);
    v28 = v91;
    goto LABEL_28;
  }
  if ( v32 != 1 )
LABEL_128:
    __fastfail(0x3Du);
  v28 = __rdtsc();
LABEL_29:
  v10 = v94;
  *v94 = v28;
  v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v9 + v20, v20);
  v30 = v29;
  if ( v20 != v29 )
  {
    v20 = v29;
    goto LABEL_51;
  }
  if ( v29 + v9 > v7 )
  {
    *(_DWORD *)(v19 + 4) = v29;
    goto LABEL_44;
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
  {
    v33 = *(_QWORD *)(v19 + 16);
    for ( i = *v10; *v10 > v33; i = *v10 )
    {
      v35 = v33;
      v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 16), i, v33);
      if ( v35 == v33 )
        break;
    }
  }
  ++*(_QWORD *)(v14[1] + 8LL * v8);
  result = v19 + v30;
  *(_QWORD *)a3 = v19;
  *(_QWORD *)(a3 + 8) = v15;
  *(_DWORD *)(a3 + 16) = v30;
  return result;
}
