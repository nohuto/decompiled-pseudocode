/*
 * XREFs of RtlpHpSegMgrCommit @ 0x180047080
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x180046CB0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegMgrAllocate @ 0x18004ACC0 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegMgrRelease @ 0x180065644 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpHeapValidateProtection @ 0x1800466F8 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180047224 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpAllocVA @ 0x180047270 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x180047764 (RtlpHpFreeVA.c)
 *     RtlpHpQueryVA @ 0x18006462C (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrCommitComplete @ 0x18012393C (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1801239DC (RtlpHpSegMgrCommitInitiate.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(int *a1, unsigned __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  int v8; // r14d
  unsigned __int64 v9; // r15
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  unsigned __int64 v12; // rsi
  int v14; // r14d
  _WORD *v15; // r12
  void *v16; // rsi
  int v17; // r13d
  size_t v18; // rax
  __m128i *v19; // rcx
  int v20; // r8d
  unsigned __int64 v21; // xmm1_8
  bool v22; // cf
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // esi
  int v28; // eax
  unsigned __int64 v29; // rcx
  __int16 v30; // [rsp+28h] [rbp-58h]
  unsigned __int64 v31; // [rsp+30h] [rbp-50h] BYREF
  __int64 v32; // [rsp+38h] [rbp-48h] BYREF
  size_t Size; // [rsp+40h] [rbp-40h]
  __int64 v34; // [rsp+48h] [rbp-38h] BYREF
  void *v35; // [rsp+50h] [rbp-30h]
  __int64 v36; // [rsp+58h] [rbp-28h] BYREF
  __int128 v37; // [rsp+60h] [rbp-20h] BYREF
  __int128 v38; // [rsp+70h] [rbp-10h] BYREF
  char v39; // [rsp+C0h] [rbp+40h] BYREF
  int v40; // [rsp+D8h] [rbp+58h]

  v40 = a4;
  v8 = *a1;
  v34 = 0LL;
  v9 = a5;
  v10 = a6 & 0xBFFFFFFF;
  v11 = -v8;
  v12 = a3;
  v39 = 0;
  a6 &= 0x40000000u;
  if ( a5 > 0
    && !(unsigned int)RtlpHpHeapCheckCommitLimit(
                        a5 << 12,
                        (*(_QWORD *)(*((_QWORD *)a1 + 7) + 96LL) + *(_QWORD *)(*((_QWORD *)a1 + 7) + 136LL)) << 12,
                        *((_QWORD *)a1 + 7),
                        *((_QWORD *)a1 + 7) + 32LL) )
  {
    return (unsigned int)-1073741523;
  }
  if ( (*((_BYTE *)a1 + 13) & 7) != 0 )
  {
    v31 = a2 & 0xFFFFFFFFFFE00000uLL;
    RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v36, 0LL);
    if ( (int)v9 <= 0 || (_DWORD)v12 || v11 >= 0x200000 || a2 <= v31 )
    {
      v14 = a7;
    }
    else
    {
      v14 = a7;
      if ( (a7 & 2) == 0 )
        v14 = a7 | 1;
    }
    v15 = (_WORD *)(v36 + 2 * (v12 >> 9));
  }
  else
  {
    v14 = a7;
    v15 = 0LL;
  }
  v16 = (void *)(a2 + (unsigned int)((_DWORD)v12 << 12));
  v17 = a6;
  v18 = (unsigned int)(v40 << 12);
  Size = v18;
  v35 = v16;
  while ( 1 )
  {
    v31 = (unsigned __int64)v16;
    v32 = v18;
    if ( !v15 )
    {
LABEL_7:
      if ( (int)v9 <= 0 )
        goto LABEL_12;
      goto LABEL_8;
    }
    v28 = RtlpHpSegMgrCommitInitiate((_DWORD)a1, (_DWORD)v15, v9, v14, (__int64)&v34, (__int64)&v39);
    if ( v28 == -1073741568 )
      break;
    if ( v28 != -1073741566 )
      goto LABEL_7;
    v31 &= 0xFFFFFFFFFFE00000uLL;
    v32 = 0x200000LL;
    if ( (int)v9 <= 0 )
    {
LABEL_12:
      v38 = *(_OWORD *)(a1 + 10);
      v26 = RtlpHpFreeVA(&v31, &v32, v10, &v38);
      goto LABEL_10;
    }
    if ( BYTE1(*((_QWORD *)a1 + 5)) == 2 )
      v10 |= 0x20400000u;
    else
      v10 |= 0x20000000u;
LABEL_8:
    if ( v17 && (v10 & 0x20000000) == 0 )
      v10 |= 0x40000000u;
    v19 = (__m128i *)*((_QWORD *)a1 + 7);
    v20 = (unsigned __int8)BYTE1(v19->m128i_i64[0]);
    v21 = _mm_srli_si128(*v19, 8).m128i_u64[0];
    v22 = (v19[1].m128i_i32[1] & 0x40000000) != 0;
    v37 = *(_OWORD *)(a1 + 10);
    v23 = RtlpHpHeapValidateProtection((__int64)v19, v22 ? 64 : 4, v20, v21);
    v24 = RtlpHpAllocVA((unsigned int)&v31, (unsigned int)&v32, 0, v10, v23, (__int64)&v37);
    v26 = v24;
    if ( v17 && v24 >= 0 && (v10 & 0x40000000) == 0 )
      memset_thunk_772440563353939046(v35, 0, Size);
LABEL_10:
    if ( !v15 )
      return (unsigned int)v26;
    if ( (*v15 & 0x4000) != 0 && v26 >= 0 )
    {
      v29 = 1LL;
      if ( (int)v9 <= 0 )
        v29 = -1LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)a1 + *((__int16 *)a1 + 10) + 8), v29);
      v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)a1 + *((__int16 *)a1 + 10)), v9);
    }
    RtlpHpSegMgrCommitComplete(v25, (_DWORD)v15, v9, v26 >= 0, (__int64)&v34, v30);
    if ( (v10 & 0x20000000) == 0 || v26 >= 0 || (v14 & 2) != 0 )
      return (unsigned int)v26;
    v16 = v35;
    v14 |= 1u;
    v18 = Size;
    v10 &= ~0x20000000u;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)a1 + *((__int16 *)a1 + 10)), v9);
  if ( v17 )
    memset_thunk_772440563353939046(v16, 0, Size);
  return 0;
}
