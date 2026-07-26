/*
 * XREFs of ?ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095134
 * Callers:
 *     ?ndisOidPostWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008FB80 (-ndisOidPostWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

void __fastcall ndisXlateWakeUpPatternListToWolPatternList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  unsigned int v3; // edx
  size_t v4; // r14
  __m128i *v5; // r15
  unsigned int v6; // r10d
  __m128i *v7; // r9
  unsigned int v8; // r11d
  unsigned __int64 v9; // r8
  size_t v10; // r8
  __m128i *Pool2; // rax
  __m128i *v12; // r13
  __m128i *v13; // r12
  unsigned int v14; // eax
  unsigned int v15; // ebp
  __m128i v16; // xmm1
  __int32 v17; // esi
  unsigned int v18; // ecx
  __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  unsigned int v21; // edx
  __int64 v22; // r8
  __int64 v23; // [rsp+50h] [rbp-58h]
  unsigned int v24; // [rsp+B0h] [rbp+8h]
  unsigned int v25; // [rsp+B0h] [rbp+8h]
  __int64 v26; // [rsp+C0h] [rbp+18h]
  __m128i *v27; // [rsp+C8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 4);
  v26 = v1;
  v3 = 0;
  v4 = *(unsigned int *)(v1 + 52);
  if ( (unsigned int)v4 > *(_DWORD *)(v1 + 48) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x74u,
        (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids);
    return;
  }
  if ( !(_DWORD)v4 )
    return;
  v5 = *(__m128i **)(v1 + 40);
  v6 = *(_DWORD *)(v1 + 52);
  *(_QWORD *)(v1 + 52) = 0LL;
  v7 = v5;
  if ( (unsigned int)v4 >= 0x18 )
  {
    do
    {
      v23 = v7[1].m128i_i64[0];
      v8 = _mm_cvtsi128_si32(_mm_srli_si128(*v7, 8));
      v9 = (unsigned int)v23 + _mm_srli_si128(*v7, 8).m128i_u32[1];
      v3 += (v8 + v23 + 203) & 0xFFFFFFF8;
      if ( (unsigned __int64)v8 + 24 > v9 )
        LODWORD(v9) = v8 + 24;
      v6 -= v9;
      v7 = (__m128i *)((char *)v7 + (unsigned int)v9);
    }
    while ( v6 >= 0x18 );
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < v3 )
  {
    *(_DWORD *)(v1 + 56) = v3;
    v10 = v4;
    *((_DWORD *)a1 + 10) = -1073676268;
LABEL_11:
    memset(v5, 0, v10);
    return;
  }
  Pool2 = (__m128i *)ExAllocatePool2(66LL, v4, 2021082190);
  v27 = Pool2;
  v12 = Pool2;
  v10 = v4;
  if ( !Pool2 )
  {
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_11;
  }
  memmove(Pool2, v5, v4);
  memset(v5, 0, *(unsigned int *)(v1 + 48));
  v13 = v5;
  v14 = 0;
  if ( (unsigned int)v4 >= 0x18 )
  {
    v15 = 0;
    do
    {
      v16 = *v12;
      v17 = v12[1].m128i_i64[0];
      v13[10].m128i_i32[0] = 196;
      v18 = _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
      v13[9].m128i_i32[1] = v16.m128i_i32[1];
      v19 = v18;
      v24 = v18;
      v13[10].m128i_i32[1] = v18;
      v13->m128i_i32[0] = 12845440;
      v13[10].m128i_i32[2] = v18 + 196;
      v13->m128i_i32[2] = _mm_cvtsi128_si32(v16);
      v13->m128i_i32[3] = 1;
      v13[10].m128i_i32[3] = v17;
      memmove((char *)v13[12].m128i_i64 + 4, &v12[1].m128i_u64[1], v18);
      v20 = HIDWORD(_mm_srli_si128(v16, 8).m128i_u64[0]);
      memmove(&v13->m128i_i8[v13[10].m128i_u32[2]], &v12->m128i_i8[v20], v13[10].m128i_u32[3]);
      v21 = v20 + v17;
      v15 += (v17 + v24 + 203) & 0xFFFFFFF8;
      v22 = v15;
      if ( v19 + 24 > (unsigned __int64)(unsigned int)(v20 + v17) )
        v21 = v24 + 24;
      LODWORD(v4) = v4 - v21;
      v12 = (__m128i *)((char *)v12 + v21);
      if ( (unsigned int)v4 < 0x18 )
        v22 = 0LL;
      v13[9].m128i_i32[2] = v22;
      v13 = (__m128i *)((char *)v5 + v22);
    }
    while ( (unsigned int)v4 >= 0x18 );
    v12 = v27;
    v25 = v15;
    v1 = v26;
    v14 = v25;
  }
  *(_DWORD *)(v1 + 52) = v14;
  *(_DWORD *)(v1 + 56) = v14;
  ExFreePoolWithTag(v12, 0);
}
