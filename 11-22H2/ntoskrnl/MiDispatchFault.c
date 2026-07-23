/*
 * XREFs of MiDispatchFault @ 0x140237F10
 * Callers:
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 * Callees:
 *     MiComputeMaximumFaultCluster @ 0x1402385D0 (MiComputeMaximumFaultCluster.c)
 *     MiResolveTransitionFault @ 0x1402623B0 (MiResolveTransitionFault.c)
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269C20 (MiResolveDemandZeroFault.c)
 *     MiPageTableLockIsContended @ 0x1402E6A30 (MiPageTableLockIsContended.c)
 *     MiAdvanceFaultList @ 0x1402EE7F4 (MiAdvanceFaultList.c)
 *     KeShouldYieldProcessor @ 0x140333AD0 (KeShouldYieldProcessor.c)
 *     MiCheckProtoAccess @ 0x1403499A8 (MiCheckProtoAccess.c)
 *     MiAdjustFaultList @ 0x14034C3A4 (MiAdjustFaultList.c)
 *     MiAccessCheck @ 0x140350ABC (MiAccessCheck.c)
 *     KiRspInIstStack @ 0x14035A590 (KiRspInIstStack.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 */

__int64 __fastcall MiDispatchFault(__int64 a1, _QWORD *a2)
{
  __m128i v3; // xmm3
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm4
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // r13
  ULONG_PTR v12; // r14
  unsigned int v13; // r15d
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  int v18; // ecx
  __int16 v19; // ax
  bool v20; // dl
  void *v21; // rcx
  __int8 v22; // al
  int v23; // ecx
  __int64 v24; // xmm1_8
  __int64 v26; // rax
  __int64 v27; // rdx
  _DWORD *v28; // rax
  unsigned __int64 v29; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v36; // [rsp+50h] [rbp-B8h]
  _QWORD *v37; // [rsp+58h] [rbp-B0h]
  __m128i v38; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v39; // [rsp+78h] [rbp-90h]
  __int128 v40; // [rsp+88h] [rbp-80h]
  __m256i v41; // [rsp+98h] [rbp-70h]
  __int128 v42; // [rsp+B8h] [rbp-50h]
  __int128 v43; // [rsp+C8h] [rbp-40h]
  __int128 v44; // [rsp+D8h] [rbp-30h]
  __int64 v45; // [rsp+E8h] [rbp-20h]

  *a2 = 0LL;
  v3 = *(__m128i *)a1;
  v4 = *(_OWORD *)(a1 + 32);
  v37 = a2;
  v5 = *(_OWORD *)(a1 + 80);
  v34 = 0LL;
  v6 = *(__m128i *)(a1 + 48);
  v7 = *(__m128i *)(a1 + 16);
  v40 = v4;
  v8 = *(_OWORD *)(a1 + 64);
  v42 = v5;
  v9 = *(_OWORD *)(a1 + 112);
  *(_OWORD *)&v41.m256i_u64[2] = v8;
  v10 = *(_OWORD *)(a1 + 96);
  v44 = v9;
  v38 = v3;
  v43 = v10;
  *(_QWORD *)&v10 = *(_QWORD *)(a1 + 128);
  *(__m128i *)v41.m256i_i8 = v6;
  v38.m128i_i64[1] = _mm_srli_si128(v3, 8).m128i_u64[0];
  v11 = v38.m128i_i8[8] & 2;
  v45 = v10;
  v39 = v7;
  v36 = _mm_srli_si128(v6, 8).m128i_u64[0];
  v12 = (((unsigned __int64)v3.m128i_i64[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = 0;
  if ( (_mm_cvtsi128_si32(v7) & 1) != 0
    && (*(_BYTE *)(v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 5
     || *(_BYTE *)(v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 2
     || *(_BYTE *)(v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 1) )
  {
    v35 = v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
    v35 = 0LL;
  }
  v14 = 0LL;
  v15 = MiComputeMaximumFaultCluster(&v38, 0LL);
  v16 = v15;
  if ( v15 > 1 )
  {
    v41.m256i_i8[21] |= 4u;
    v41.m256i_i8[21] &= ~2u;
    goto LABEL_5;
  }
  v41.m256i_i8[21] &= ~2u;
  if ( v15 )
  {
    do
    {
LABEL_5:
      if ( (v41.m256i_i8[21] & 8) != 0 )
      {
        if ( (*(_DWORD *)(v36 + 188) & 2) != 0
          || (*(_BYTE *)(v36 + 184) & 0x40) != 0
          && (unsigned __int64)(*(_QWORD *)(v36 + 128) + 1LL) >= *(_QWORD *)(v36 + 120) )
        {
          break;
        }
        v28 = (*(_BYTE *)(v36 + 184) & 7) == 2 ? &unk_140C6A280 : (_DWORD *)(v36 + 192);
        if ( (*v28 & 0x40000000) != 0
          || (v41.m256i_i8[21] & 1) != 0
          || (unsigned int)MiPageTableLockIsContended(v36, ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
          || KeShouldYieldProcessor() )
        {
          break;
        }
      }
      v17 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v31 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
          if ( (v31 & 0x20) != 0 )
            v17 |= 0x20uLL;
          if ( (v31 & 0x42) != 0 )
            v17 |= 0x42uLL;
        }
      }
      if ( !v17 || (v17 & 1) != 0 )
      {
        v18 = 0;
        goto LABEL_23;
      }
      LODWORD(v33) = 256;
      if ( (v17 & 0x400) != 0 )
      {
        if ( (_QWORD)v43 )
          goto LABEL_11;
        v26 = MiCheckProtoAccess(v12, &v33);
        if ( !v26 )
        {
          v18 = -1073741819;
          goto LABEL_23;
        }
        LODWORD(v27) = v33;
        *(_QWORD *)&v43 = v26;
      }
      else
      {
        if ( (v41.m256i_i8[21] & 8) == 0 )
          goto LABEL_11;
        v27 = (v17 >> 5) & 0x1F;
      }
      if ( (_DWORD)v27 == 256 )
        goto LABEL_11;
      if ( (v27 & 0xFFFFFFF8) == 0x10 && (v41.m256i_i8[21] & 8) != 0 )
      {
        v18 = -1073741819;
        goto LABEL_23;
      }
      v18 = MiAccessCheck(v12, v39.m128i_i64[0], 0);
      if ( !v18 )
      {
LABEL_11:
        if ( (v39.m128i_i8[0] & 1) != 0 && *(_BYTE *)(v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
          MiAdjustFaultList(&v38);
        if ( (v17 & 0x400) != 0 )
        {
          v18 = MiResolveProtoPteFault(&v38, v11, &v34);
          goto LABEL_23;
        }
        if ( (v17 & 0x800) != 0 )
        {
          v18 = MiResolveTransitionFault(&v38, v12, 0LL, v11, &v34);
          goto LABEL_23;
        }
        if ( (v17 & 4) != 0 )
        {
          if ( (v41.m256i_i8[21] & 8) != 0 )
          {
            if ( v35 )
              MiAdvanceFaultList(v35);
            v18 = -1073740748;
          }
          else
          {
            v18 = MiResolvePageFileFault(&v38, v12, 0LL, &v34);
          }
        }
        else
        {
          v18 = 0;
          if ( (v39.m128i_i8[0] & 1) != 0 )
          {
            if ( *(_BYTE *)(v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
            {
              if ( (*(_DWORD *)((v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
                goto LABEL_23;
            }
            else if ( *(_BYTE *)(v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) != 3
                   && *(_BYTE *)(v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
            {
LABEL_22:
              v18 = MiResolveDemandZeroFault(&v38, v12, 0LL, v11);
              goto LABEL_23;
            }
            if ( *(_BYTE *)(v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 6 )
              goto LABEL_22;
          }
          else
          {
            if ( !v39.m128i_i64[0] )
              goto LABEL_22;
            v19 = *(_WORD *)(v39.m128i_i64[0] + 368);
            v20 = 0;
            if ( v19 == 16 )
            {
              if ( (*(_DWORD *)(v39.m128i_i64[0] + 376) & 0x200) == 0
                && ((unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v39.m128i_i64[0] + 384))
                 || (unsigned int)KiRspInIstStack(2LL, v32)) )
              {
                goto LABEL_22;
              }
              v21 = &ExpInterlockedPopEntrySListFault;
              v29 = *(_QWORD *)(v39.m128i_i64[0] + 360);
              v20 = KiDynamicTraceEnabled && v29 >= ControlPc && v29 < qword_140D1F2B0 && KeGetCurrentIrql() == 15;
            }
            else
            {
              if ( v19 != 51 )
                goto LABEL_22;
              v21 = (void *)qword_140D1F370;
            }
            if ( *(void **)(v39.m128i_i64[0] + 360) != v21 && !v20 )
              goto LABEL_22;
          }
          if ( v38.m128i_i64[0] < 0xFFFF800000000000uLL )
            goto LABEL_22;
          LODWORD(v33) = (v17 >> 5) & 0x1F;
          if ( ((v17 >> 5) & 0x18) != 0x10 )
            goto LABEL_22;
          v18 = -1073741819;
        }
      }
LABEL_23:
      if ( (v41.m256i_i8[21] & 8) == 0 )
        v13 = v18;
      if ( v18 < 0 )
      {
        if ( v18 != -1073741802 )
          break;
        v23 = v42;
        if ( (v42 & 0x80u) != 0LL )
          *(_DWORD *)(a1 + 80) |= 0x80u;
        goto LABEL_31;
      }
      v12 += 8LL;
      v38.m128i_i64[0] += 4096LL;
      v22 = v41.m256i_i8[21] | 8;
      ++v14;
      v41.m256i_i8[21] = v22;
      v39.m128i_i64[1] = v12;
      if ( (v22 & 2) != 0 )
      {
        v41.m256i_i8[21] = v22 & 0xFD;
        if ( v14 == v16 )
          break;
        v16 = MiComputeMaximumFaultCluster(&v38, v16 - v14);
        if ( v16 == 1 && (v41.m256i_i8[21] & 4) != 0 )
          v41.m256i_i8[21] &= ~4u;
        v14 = 0LL;
      }
      *(_QWORD *)&v43 = 0LL;
      if ( (v39.m128i_i8[0] & 1) == 0 || *(_BYTE *)(v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
      {
        v38.m128i_i64[1] &= ~2uLL;
        v11 = 0LL;
        if ( (v39.m128i_i8[0] & 1) == 0 )
          continue;
      }
      if ( *(_BYTE *)(v39.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
        v39.m128i_i64[0] &= ~1uLL;
    }
    while ( v14 < v16 );
  }
  v23 = v42;
LABEL_31:
  v24 = v41.m256i_i64[3];
  *(_OWORD *)(a1 + 112) = v44;
  *(_QWORD *)(a1 + 128) = v45;
  *(_QWORD *)(a1 + 104) = *((_QWORD *)&v43 + 1);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v41.m256i_u64[1];
  *(_QWORD *)(a1 + 72) = v24;
  if ( (v23 & 0x40) != 0 )
    *(_DWORD *)(a1 + 80) ^= (*(_DWORD *)(a1 + 80) ^ v23) & 0x40;
  if ( v13 == -1073532109 )
    *v37 = v34;
  return v13;
}
