/*
 * XREFs of sub_1406F120C @ 0x1406F120C
 * Callers:
 *     ?Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z @ 0x1406F09A8 (-Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z.c)
 *     sub_1409ECCCC @ 0x1409ECCCC (sub_1409ECCCC.c)
 * Callees:
 *     sub_1402E1C80 @ 0x1402E1C80 (sub_1402E1C80.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F175C @ 0x1406F175C (sub_1406F175C.c)
 *     sub_1406F1774 @ 0x1406F1774 (sub_1406F1774.c)
 *     sub_1406F1DF8 @ 0x1406F1DF8 (sub_1406F1DF8.c)
 *     sub_140798D30 @ 0x140798D30 (sub_140798D30.c)
 *     sub_1409E959C @ 0x1409E959C (sub_1409E959C.c)
 */

unsigned __int64 __fastcall sub_1406F120C(__int64 a1, unsigned int *a2)
{
  bool v4; // cf
  unsigned __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int16 v7; // r14
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v9; // r12
  unsigned int v10; // eax
  char v11; // al
  char v12; // cl
  bool v13; // zf
  int v14; // ecx
  LARGE_INTEGER v15; // rax
  __int64 v16; // r13
  char *v17; // r13
  __int64 v18; // rax
  unsigned int *v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // xmm0_8
  __int64 v22; // rdx
  unsigned __int64 v23; // xmm0_8
  void *v24; // rcx
  char *v25; // rdx
  unsigned int v26; // r8d
  char *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int128 v30; // xmm1
  __int64 v31; // r13
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-40h] BYREF
  int v33; // [rsp+38h] [rbp-38h]
  void *v34; // [rsp+40h] [rbp-30h]
  __int64 v35; // [rsp+58h] [rbp-18h]
  unsigned int v36; // [rsp+60h] [rbp-10h]

  v33 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v35 = 0LL;
  v36 = 0;
  v4 = (unsigned __int8)sub_1406F175C(a1) != 0;
  result = *(unsigned int *)(a1 + 4);
  v7 = *(_WORD *)(v6 + 152) + *(_WORD *)(v6 + 136) + (v4 ? 276 : 284);
  if ( result >= (unsigned __int64)v7 + 104 )
  {
    if ( (int)sub_14042A5E0(25LL, 12LL) < 0 )
    {
      v35 = 0LL;
      v36 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    *((_WORD *)a2 + 39) = 0;
    v9 = (_QWORD *)(a1 + 312);
    *((_WORD *)a2 + 38) = v7 + 32;
    a2[18] = -1073610750;
    a2[20] = *((_DWORD *)CurrentThread + 308);
    a2[21] = *((_DWORD *)CurrentThread + 306);
    a2[24] = *((_DWORD *)CurrentThread + 163);
    a2[25] = *((_DWORD *)CurrentThread + 183);
    *((_QWORD *)a2 + 11) = *(_QWORD *)(a1 + 312);
    memset(a2 + 26, 0, v7);
    a2[26] = *(_DWORD *)(a1 + 4);
    *((_WORD *)a2 + 54) = 10;
    a2[28] = (unsigned __int16)NtBuildNumber;
    v10 = sub_1402E1C80(a1);
    a2[29] = v10;
    if ( (*(_DWORD *)(a1 + 12) & 0x4000000) != 0 || *(_DWORD *)(a1 + 4) > 0x100000u || v10 > 0x100 )
    {
      v11 = 0;
      v12 = 2;
    }
    else
    {
      v11 = 5;
      v12 = 1;
    }
    *((_BYTE *)a2 + 110) = v12;
    *((_BYTE *)a2 + 111) = v11;
    a2[36] = 1;
    a2[34] = *(_DWORD *)(a1 + 12) & 0xFF3FFEFF;
    a2[33] = *(_DWORD *)(a1 + 292);
    a2[32] = DesiredTime;
    a2[39] = dword_140C15F74;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    _InterlockedExchange64((volatile __int64 *)&stru_140C15F78, PerformanceFrequency.QuadPart);
    v13 = (unsigned __int8)sub_1406F175C(a1) == 0;
    v14 = 1;
    v15 = PerformanceFrequency;
    if ( v13 )
    {
      *((LARGE_INTEGER *)a2 + 45) = PerformanceFrequency;
      *((_QWORD *)a2 + 46) = *(_QWORD *)(a1 + 304);
      *((_QWORD *)a2 + 44) = qword_140C15FF0;
      a2[37] = 8;
      if ( *(_DWORD *)(a1 + 200) != 4 )
        v14 = *(_DWORD *)(a1 + 200);
      a2[94] = v14;
      *((_QWORD *)a2 + 20) = HIDWORD(v35);
      *((_QWORD *)a2 + 21) = v36;
      v16 = *(unsigned __int16 *)(a1 + 136);
      v34 = a2 + 96;
      v17 = (char *)a2 + v16 + 384;
      v18 = 26LL;
    }
    else
    {
      a2[18] = -1073676286;
      *((LARGE_INTEGER *)a2 + 44) = v15;
      a2[37] = 4;
      *((_QWORD *)a2 + 45) = *(_QWORD *)(a1 + 304);
      *((_QWORD *)a2 + 43) = qword_140C15FF0;
      if ( *(_DWORD *)(a1 + 200) != 4 )
        v14 = *(_DWORD *)(a1 + 200);
      a2[92] = v14;
      a2[40] = HIDWORD(v35);
      a2[41] = v36;
      v31 = *(unsigned __int16 *)(a1 + 136);
      v34 = a2 + 94;
      v17 = (char *)a2 + v31 + 376;
      v18 = 24LL;
    }
    v19 = &a2[v18];
    sub_1406F1774(&a2[v18 + 18], 0xACuLL);
    v20 = *(_QWORD *)(v19 + 35);
    v21 = _mm_srli_si128(*(__m128i *)(v19 + 35), 8).m128i_u64[0];
    *((_WORD *)v19 + 70) = v20;
    *((_WORD *)v19 + 75) = v21;
    *((_WORD *)v19 + 71) = WORD1(v20);
    *((_WORD *)v19 + 73) = WORD2(v20);
    *((_WORD *)v19 + 72) = HIWORD(v21);
    *((_WORD *)v19 + 76) = WORD1(v21);
    *((_WORD *)v19 + 74) = HIWORD(v20);
    *((_WORD *)v19 + 77) = WORD2(v21);
    v22 = *((_QWORD *)v19 + 28);
    v23 = _mm_srli_si128(*((__m128i *)v19 + 14), 8).m128i_u64[0];
    *((_WORD *)v19 + 112) = v22;
    *((_WORD *)v19 + 117) = v23;
    *((_WORD *)v19 + 113) = WORD1(v22);
    *((_WORD *)v19 + 115) = WORD2(v22);
    *((_WORD *)v19 + 114) = HIWORD(v23);
    *((_WORD *)v19 + 119) = WORD2(v23);
    v24 = v34;
    *((_WORD *)v19 + 116) = HIWORD(v22);
    *((_WORD *)v19 + 118) = WORD1(v23);
    memmove(v24, *(const void **)(a1 + 144), *(unsigned __int16 *)(a1 + 136) + 2LL);
    memmove(v17 + 2, *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
    a2[2] += (v7 + 39) & 0xFFFFFFF8;
    if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 && a2[2] + 68 <= *a2 )
    {
      v27 = (char *)a2 + a2[2];
      *((_DWORD *)v27 + 1) = 327748;
      *(_DWORD *)v27 = -1073610750;
      *((_DWORD *)v27 + 2) = *((_DWORD *)CurrentThread + 308);
      *((_DWORD *)v27 + 3) = *((_DWORD *)CurrentThread + 306);
      *((_DWORD *)v27 + 6) = *((_DWORD *)CurrentThread + 163);
      *((_DWORD *)v27 + 7) = *((_DWORD *)CurrentThread + 183);
      *((_QWORD *)v27 + 2) = *v9;
      v28 = *(_QWORD *)(a1 + 1096);
      v29 = 32LL * *(unsigned __int8 *)(a1 + 818);
      *((_OWORD *)v27 + 2) = *(_OWORD *)(v29 + v28 + 4284);
      v30 = *(_OWORD *)(v29 + v28 + 4300);
      *((_DWORD *)v27 + 16) = 85;
      *((_OWORD *)v27 + 3) = v30;
      a2[2] += 72;
    }
    if ( a2[2] + 80 <= *a2 )
    {
      v25 = (char *)a2 + a2[2];
      *((_DWORD *)v25 + 1) = 5242960;
      *(_DWORD *)v25 = -1073610750;
      *((_DWORD *)v25 + 2) = *((_DWORD *)CurrentThread + 308);
      *((_DWORD *)v25 + 3) = *((_DWORD *)CurrentThread + 306);
      *((_DWORD *)v25 + 6) = *((_DWORD *)CurrentThread + 163);
      *((_DWORD *)v25 + 7) = *((_DWORD *)CurrentThread + 183);
      *((_QWORD *)v25 + 2) = *v9;
      *((_DWORD *)v25 + 8) = 0;
      *((_DWORD *)v25 + 9) = *(_DWORD *)(*(_QWORD *)(a1 + 1096) + 4228LL);
      *((_OWORD *)v25 + 3) = *(_OWORD *)(*(_QWORD *)(a1 + 1096) + 4176LL);
      *((_QWORD *)v25 + 5) = *(_QWORD *)(a1 + 1280);
      *((_OWORD *)v25 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 1096) + 4192LL);
      a2[2] += 80;
    }
    v26 = *a2;
    a2[12] = a2[2];
    if ( a2[2] < v26 )
    {
      if ( *(_QWORD *)(a1 + 96) != a1 + 96 || *(_DWORD *)(a1 + 120) )
        sub_1406F1DF8(a1, (_DWORD)a2, v26, a1 + 312, 3);
      if ( *(_QWORD *)(a1 + 1040) != a1 + 1040 )
        sub_1409E959C(a1, a2, *a2, 2LL);
    }
    a2[1] = a2[12];
    a2[11] = 3;
    sub_140798D30(a1, a2);
    result = a2[2];
    a2[1] = result;
  }
  return result;
}
