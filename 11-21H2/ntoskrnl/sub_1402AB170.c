/*
 * XREFs of sub_1402AB170 @ 0x1402AB170
 * Callers:
 *     sub_14020A0D0 @ 0x14020A0D0 (sub_14020A0D0.c)
 *     sub_140223B10 @ 0x140223B10 (sub_140223B10.c)
 *     sub_140280F60 @ 0x140280F60 (sub_140280F60.c)
 *     sub_140281380 @ 0x140281380 (sub_140281380.c)
 *     sub_1402A7C20 @ 0x1402A7C20 (sub_1402A7C20.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402AB040 @ 0x1402AB040 (sub_1402AB040.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_1403AC3AC @ 0x1403AC3AC (sub_1403AC3AC.c)
 *     sub_14045FA6C @ 0x14045FA6C (sub_14045FA6C.c)
 *     sub_14045FBE2 @ 0x14045FBE2 (sub_14045FBE2.c)
 *     sub_1404608E8 @ 0x1404608E8 (sub_1404608E8.c)
 *     sub_14062DEE4 @ 0x14062DEE4 (sub_14062DEE4.c)
 *     sub_14062E480 @ 0x14062E480 (sub_14062E480.c)
 *     sub_14062EED8 @ 0x14062EED8 (sub_14062EED8.c)
 *     sub_14062FC2C @ 0x14062FC2C (sub_14062FC2C.c)
 *     sub_140630220 @ 0x140630220 (sub_140630220.c)
 *     sub_140631A8C @ 0x140631A8C (sub_140631A8C.c)
 *     sub_1406341F0 @ 0x1406341F0 (sub_1406341F0.c)
 *     sub_1406342C8 @ 0x1406342C8 (sub_1406342C8.c)
 *     sub_140635910 @ 0x140635910 (sub_140635910.c)
 *     sub_1406F6CA4 @ 0x1406F6CA4 (sub_1406F6CA4.c)
 *     sub_140811DA0 @ 0x140811DA0 (sub_140811DA0.c)
 *     sub_1408142DC @ 0x1408142DC (sub_1408142DC.c)
 *     sub_1408149AC @ 0x1408149AC (sub_1408149AC.c)
 *     sub_140814C04 @ 0x140814C04 (sub_140814C04.c)
 *     sub_140814C74 @ 0x140814C74 (sub_140814C74.c)
 *     sub_140817B20 @ 0x140817B20 (sub_140817B20.c)
 *     sub_1409E31BC @ 0x1409E31BC (sub_1409E31BC.c)
 *     sub_1409E3490 @ 0x1409E3490 (sub_1409E3490.c)
 *     sub_1409E3690 @ 0x1409E3690 (sub_1409E3690.c)
 *     sub_1409E9D54 @ 0x1409E9D54 (sub_1409E9D54.c)
 *     sub_1409EA068 @ 0x1409EA068 (sub_1409EA068.c)
 *     sub_1409EA1EC @ 0x1409EA1EC (sub_1409EA1EC.c)
 *     sub_1409EA3AC @ 0x1409EA3AC (sub_1409EA3AC.c)
 *     sub_1409EA760 @ 0x1409EA760 (sub_1409EA760.c)
 *     sub_1409EAA18 @ 0x1409EAA18 (sub_1409EAA18.c)
 *     sub_1409EAB74 @ 0x1409EAB74 (sub_1409EAB74.c)
 *     sub_1409EAFC8 @ 0x1409EAFC8 (sub_1409EAFC8.c)
 *     sub_1409EB100 @ 0x1409EB100 (sub_1409EB100.c)
 *     sub_1409EB5B4 @ 0x1409EB5B4 (sub_1409EB5B4.c)
 *     sub_1409EB760 @ 0x1409EB760 (sub_1409EB760.c)
 * Callees:
 *     sub_14022A874 @ 0x14022A874 (sub_14022A874.c)
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_1403860B0 @ 0x1403860B0 (sub_1403860B0.c)
 *     sub_1403884A4 @ 0x1403884A4 (sub_1403884A4.c)
 *     sub_1403B3C40 @ 0x1403B3C40 (sub_1403B3C40.c)
 *     sub_14041A750 @ 0x14041A750 (sub_14041A750.c)
 *     sub_14041A808 @ 0x14041A808 (sub_14041A808.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140460770 @ 0x140460770 (sub_140460770.c)
 *     sub_1404608E8 @ 0x1404608E8 (sub_1404608E8.c)
 *     sub_14062D1C8 @ 0x14062D1C8 (sub_14062D1C8.c)
 *     sub_14062F600 @ 0x14062F600 (sub_14062F600.c)
 *     sub_14062F694 @ 0x14062F694 (sub_14062F694.c)
 *     sub_140632EEC @ 0x140632EEC (sub_140632EEC.c)
 *     sub_140635854 @ 0x140635854 (sub_140635854.c)
 */

void __fastcall sub_1402AB170(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v6; // r15
  unsigned int v7; // r14d
  unsigned __int8 v11; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rsi
  unsigned int v16; // r13d
  unsigned int v17; // r10d
  __m128i v18; // xmm5
  __m128i v19; // xmm4
  unsigned int v20; // r11d
  __int64 v21; // r9
  __m128i v22; // xmm3
  __int64 v23; // r9
  __int64 v24; // rdx
  __m128i v25; // xmm2
  __int64 v26; // rcx
  __m128i v27; // xmm4
  __m128i v28; // xmm4
  int v29; // edx
  int v30; // r8d
  __int64 v31; // r11
  _DWORD *v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // r9
  unsigned int v35; // eax
  unsigned int v36; // edi
  __int64 v37; // rax
  struct _KTHREAD *v38; // r8
  char *v39; // r9
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // eax
  char *v46; // rcx
  __int64 v47; // r13
  signed __int64 *v48; // roff
  signed __int64 v49; // rax
  __int64 v50; // rdx
  signed __int64 v51; // rtt
  int v52; // edx
  unsigned int v53; // edx
  __int64 v54; // rcx
  __int64 v55; // rcx
  unsigned int v56; // r14d
  __int64 v57; // r9
  signed __int64 *v58; // r8
  signed __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  struct _KTHREAD *v61; // rcx
  bool v62; // zf
  __int64 v63; // [rsp+38h] [rbp-48h] BYREF
  unsigned int Size; // [rsp+40h] [rbp-40h]
  unsigned int Size_4; // [rsp+44h] [rbp-3Ch]
  int v66; // [rsp+48h] [rbp-38h]
  void *v67; // [rsp+50h] [rbp-30h]
  struct _KTHREAD *v68; // [rsp+58h] [rbp-28h]
  __int128 v69; // [rsp+60h] [rbp-20h] BYREF
  __int64 v70; // [rsp+70h] [rbp-10h]
  __int64 v71; // [rsp+78h] [rbp-8h]

  v6 = a3;
  v7 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v63 = 0LL;
  v11 = 0;
  if ( (unsigned __int8)sub_1402ABBD0() && KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v13 = *(_QWORD *)(a2 + 448);
    v14 = (unsigned int)v6;
    v71 = v6;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v13 + 8 * v6), 1u) )
    {
      KeLeaveCriticalRegion();
      return;
    }
    v11 = 1;
  }
  else
  {
    v14 = v6;
    v71 = v6;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(a2 + 456) + 8 * v14);
  if ( (v15 & 1) != 0 )
  {
    sub_1403860B0((unsigned int)v6, a2, v11);
    return;
  }
  if ( !v15 )
    return;
  Size = 0;
  v16 = 0;
  v17 = 0;
  if ( a4 >= 8 )
  {
    v18 = 0LL;
    v19 = 0LL;
    v20 = 2;
    do
    {
      v21 = 2LL * v17;
      v17 += 8;
      v22 = _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v21 + 8)),
              _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v20 - 1) + 8)));
      v23 = 2LL * (v20 + 5);
      v24 = 2LL * (v20 + 3);
      v25 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v20 + 4) + 8));
      v18 = _mm_add_epi32(
              v18,
              _mm_unpacklo_epi64(
                v22,
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * v20 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v20 + 1) + 8)))));
      v26 = 2LL * (v20 + 2);
      v20 += 8;
      v19 = _mm_add_epi32(
              v19,
              _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v26 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v24 + 8))),
                _mm_unpacklo_epi32(v25, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v23 + 8)))));
    }
    while ( v17 < (a4 & 0xFFFFFFF8) );
    v27 = _mm_add_epi32(v19, v18);
    v28 = _mm_add_epi32(v27, _mm_srli_si128(v27, 8));
    v16 = _mm_cvtsi128_si32(_mm_add_epi32(v28, _mm_srli_si128(v28, 4)));
    Size = v16;
  }
  v29 = 0;
  v30 = 0;
  if ( v17 < a4 )
  {
    v31 = v17;
    if ( a4 - v17 < 2 )
      goto LABEL_18;
    v32 = (_DWORD *)(16LL * v17 + a1 + 24);
    v33 = ((a4 - v17 - 2) >> 1) + 1;
    v34 = v33;
    v35 = v17 + 2 * v33;
    v31 = v17 + 2 * v34;
    do
    {
      v29 += *(v32 - 4);
      v30 += *v32;
      v32 += 8;
      --v34;
    }
    while ( v34 );
    if ( v35 < a4 )
LABEL_18:
      v16 += *(_DWORD *)(a1 + 16 * v31 + 8);
    v16 += v30 + v29;
    Size = v16;
  }
  v36 = a6;
  if ( (a6 & 0x100) != 0 )
  {
    if ( (a6 & 0x10000000) != 0 )
    {
      v40 = sub_1402ABBF0(v15, v16 + 24, (unsigned int)&v69, (unsigned int)&v63, a6);
      if ( !v40 )
        goto LABEL_73;
      *(_WORD *)(v40 + 6) = a5;
      v39 = (char *)(v40 + 24);
      *(_DWORD *)v40 = (unsigned __int8)a6 | 0xC0040000;
      *(_QWORD *)(v40 + 16) = v63;
      *(_WORD *)(v40 + 4) = v16 + 24;
      *(_DWORD *)(v40 + 8) = *((_DWORD *)KeGetCurrentThread() + 308);
      *(_DWORD *)(v40 + 12) = *(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL);
    }
    else
    {
      v68 = KeGetCurrentThread();
      v37 = sub_1402ABBF0(v15, v16 + 32, (unsigned int)&v69, (unsigned int)&v63, a6);
      if ( !v37 )
        goto LABEL_73;
      v38 = v68;
      v39 = (char *)(v37 + 32);
      *(_DWORD *)v37 = (unsigned __int8)a6 | 0xC0020000;
      *(_QWORD *)(v37 + 16) = v63;
      *(_WORD *)(v37 + 4) = v16 + 32;
      *(_WORD *)(v37 + 6) = a5;
      *(_DWORD *)(v37 + 8) = *((_DWORD *)v38 + 308);
      *(_DWORD *)(v37 + 12) = *((_DWORD *)v38 + 306);
      *(_DWORD *)(v37 + 24) = *((_DWORD *)v38 + 163);
      *(_DWORD *)(v37 + 28) = *((_DWORD *)v38 + 183);
    }
    goto LABEL_36;
  }
  v41 = *(_DWORD *)(v15 + 816);
  if ( (v41 & 0xC00) == 0 )
    goto LABEL_34;
  if ( (v41 & 0x400) != 0 && a5 == 1316 )
  {
    v39 = (char *)sub_14062F600(v15, 1316, v16, (unsigned int)&v69, (__int64)&v63, a6);
    goto LABEL_36;
  }
  if ( (v41 & 0x800) != 0 && (v42 = 0, *(_DWORD *)(*(_QWORD *)(v15 + 1016) + 8LL)) )
  {
    while ( 1 )
    {
      v43 = *(_QWORD *)(v15 + 1016);
      if ( *(_WORD *)(v43 + 2LL * v42 + 12) == a5 )
        break;
      if ( ++v42 >= *(_DWORD *)(v43 + 8) )
        goto LABEL_34;
    }
    v39 = (char *)sub_14062F694(v15, a5, v16, (unsigned int)&v69, (__int64)&v63, a6);
  }
  else
  {
LABEL_34:
    v44 = sub_1402ABBF0(v15, v16 + 16, (unsigned int)&v69, (unsigned int)&v63, a6);
    if ( !v44 )
      goto LABEL_73;
    v39 = (char *)(v44 + 16);
    *(_QWORD *)(v44 + 8) = v63;
    *(_WORD *)(v44 + 6) = a5;
    *(_DWORD *)v44 = (unsigned __int8)a6 | 0xC0110000;
    *(_WORD *)(v44 + 4) = v16 + 16;
  }
LABEL_36:
  v67 = v39;
  if ( v39 )
  {
    v45 = v16;
    v46 = v39;
    Size_4 = v16;
    v68 = (struct _KTHREAD *)v39;
    v66 = 0;
    if ( a4 )
    {
      while ( 1 )
      {
        v47 = *(unsigned int *)(a1 + 8);
        if ( (unsigned int)v47 > v45 )
          break;
        memmove(v46, *(const void **)a1, (unsigned int)v47);
        a1 += 16LL;
        v46 = (char *)v68 + v47;
        v45 = Size_4 - v47;
        v68 = (struct _KTHREAD *)((char *)v68 + v47);
        Size_4 -= v47;
        if ( ++v66 >= a4 )
          goto LABEL_40;
      }
      memset(v67, 0, Size);
      sub_14022A874(v15);
      if ( !(unsigned int)sub_14041A808() )
      {
        if ( EtwEventEnabled(qword_140C15FA8, &stru_1400149F8) )
          sub_14041A750(a5, v15 + 136, 3221225476LL);
LABEL_40:
        v36 = a6;
        goto LABEL_41;
      }
      v36 = a6;
      if ( EtwEventEnabled(qword_140C15FA8, &stru_1400149F8) )
        sub_14062D1C8(a5, v15 + 136, a6, 3221225476LL);
    }
LABEL_41:
    if ( (*(_DWORD *)(v15 + 12) & 0x80000) != 0 && (!(_BYTE)KdDebuggerNotPresent && !byte_140C09804 || byte_140C40504) )
      sub_1403B3C40(v15, &v69);
    if ( *(_QWORD *)(v15 + 1288) )
      sub_140632EEC(v15, &v69, 0LL, 0LL);
    v48 = (signed __int64 *)*((_QWORD *)&v69 + 1);
    _m_prefetchw(*((const void **)&v69 + 1));
    v49 = *v48;
    v50 = v69;
    if ( (*v48 ^ (unsigned __int64)v69) >= 0xF )
    {
LABEL_51:
      _InterlockedDecrement((volatile signed __int32 *)(v50 + 12));
    }
    else
    {
      while ( 1 )
      {
        v51 = v49;
        v49 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v69 + 1), v49 + 1, v49);
        if ( v51 == v49 )
          break;
        v50 = v69;
        if ( (v49 ^ (unsigned __int64)v69) >= 0xF )
          goto LABEL_51;
      }
    }
    v52 = *(_DWORD *)(v15 + 816);
    if ( (v52 & 0x80u) != 0 && _bittest(*(const signed __int32 **)(v15 + 1000), a5 & 0x1FFF) )
    {
      sub_140460770(v15, &v63, 0LL, v36);
      v52 = *(_DWORD *)(v15 + 816);
    }
    if ( (v52 & 0x8000) != 0 )
    {
      v53 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v15 + 1024) + 8LL) )
      {
        while ( 1 )
        {
          v54 = *(_QWORD *)(v15 + 1024);
          if ( *(_WORD *)(v54 + 2LL * v53 + 12) == a5 )
            break;
          if ( ++v53 >= *(_DWORD *)(v54 + 8) )
            goto LABEL_67;
        }
        sub_1404608E8(v15, &v63, 0LL, v36);
      }
    }
LABEL_67:
    if ( (*(_DWORD *)(v15 + 816) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v15 + 1032) + 24LL) )
    {
      while ( 1 )
      {
        v55 = *(_QWORD *)(v15 + 1032);
        if ( *(_WORD *)(v55 + 2LL * v7 + 28) == a5 )
          break;
        if ( ++v7 >= *(_DWORD *)(v55 + 24) )
          goto LABEL_78;
      }
      sub_140635854(v15, &v63, 0LL, v36);
    }
    goto LABEL_78;
  }
LABEL_73:
  v56 = sub_1403884A4(v15, v16);
  if ( (unsigned int)sub_14041A808() )
  {
    if ( EtwEventEnabled(qword_140C15FA8, &stru_1400149F8) )
      sub_14062D1C8(a5, v15 + 136, a6, v56);
  }
  else if ( EtwEventEnabled(qword_140C15FA8, &stru_1400149F8) )
  {
    sub_14041A750(a5, v15 + 136, v56);
  }
LABEL_78:
  if ( v11 )
  {
    v57 = *(_QWORD *)(*(_QWORD *)(a2 + 448) + 8 * v71);
    v58 = (signed __int64 *)(*(_QWORD *)v57
                           + (unsigned int)(*(_DWORD *)(v57 + 16)
                                          * (HIDWORD(KeGetPcr()[1].LockArray) % *(_DWORD *)(v57 + 20))));
    _m_prefetchw(v58);
    while ( 1 )
    {
      while ( 1 )
      {
        v59 = *v58;
        if ( (*v58 & 1) != 0 )
          break;
        if ( v59 == _InterlockedCompareExchange64(v58, v59 - 2, v59) )
          goto LABEL_87;
      }
      if ( v59 != 1 )
        break;
      v58 = *(signed __int64 **)v57;
    }
    v60 = v59 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v60, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      KeSetEvent((PRKEVENT)(v60 + 8), 0, 0);
LABEL_87:
    v61 = KeGetCurrentThread();
    v62 = (*((_WORD *)v61 + 242))++ == 0xFFFF;
    if ( v62 && *((struct _KTHREAD **)v61 + 19) != (struct _KTHREAD *)((char *)v61 + 152) && !*((_WORD *)v61 + 243) )
      KiCheckForKernelApcDelivery();
  }
}
