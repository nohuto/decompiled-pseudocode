/*
 * XREFs of RtlpHpSegMgrReserve @ 0x18004AEC8
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x18004AE20 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpHeapValidateProtection @ 0x180046858 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x1800473D0 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x1800478C4 (RtlpHpFreeVA.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x1801227F4 (RtlpHpSegMgrVaCtxInitialize.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, int a2, PVOID *a3, unsigned int *a4, _DWORD *a5)
{
  _QWORD **v5; // r13
  unsigned int v6; // r15d
  _QWORD **v7; // rsi
  ULONG_PTR v8; // r12
  void *v10; // rbx
  ULONG_PTR v11; // r9
  __m128i *v12; // rcx
  int v13; // r8d
  unsigned __int64 v14; // xmm1_8
  bool v15; // cf
  ULONG v16; // eax
  __int64 v17; // rcx
  int v18; // ebx
  PVOID *v19; // rcx
  PVOID v20; // rax
  _QWORD *v22; // rdi
  unsigned int v23; // eax
  int v24; // r12d
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v29[2]; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR v30; // [rsp+A0h] [rbp+48h] BYREF
  int v31; // [rsp+A8h] [rbp+50h]
  PVOID *v32; // [rsp+B0h] [rbp+58h]
  unsigned int *v33; // [rsp+B8h] [rbp+60h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v5 = (_QWORD **)(a1 + 120);
  v6 = -*(_DWORD *)a1;
  v7 = (_QWORD **)(a1 + 128);
  v8 = v6;
  v30 = v6;
  v10 = 0LL;
  v11 = v6;
  if ( *(_QWORD *)(a1 + 120) || *v7 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
    v22 = *v7;
    if ( !*v7 )
    {
      if ( (v31 & 2) != 0 || (v22 = *v5, v7 = v5, !*v5) )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
        v11 = v30;
        BaseAddress[0] = 0LL;
        goto LABEL_4;
      }
    }
    v23 = *((unsigned __int16 *)v22 - 3);
    _BitScanForward((unsigned int *)&v24, v23);
    v25 = v23 ^ (1 << v24);
    *((_WORD *)v22 - 3) = v25;
    if ( !(_WORD)v25 )
    {
      if ( *v7 )
        *v7 = (_QWORD *)**v7;
      *v22 = 0LL;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
    v11 = v30;
    v26 = v6 * v24;
    v8 = v6;
    v27 = qword_180186290[6 * *((unsigned __int8 *)v22 - 15)];
    v10 = (void *)(*(_QWORD *)(v27 + 8)
                 + v26
                 + (((unsigned __int64)v22 - *(_QWORD *)(v27 + 40) - 16) >> *(_DWORD *)(v27 + 24) << 20));
  }
  BaseAddress[0] = v10;
  if ( v10 )
  {
LABEL_8:
    v18 = 0;
    v19 = v32;
    *v33 = v6;
    *a5 = v11;
    *v19 = BaseAddress[0];
    v20 = 0LL;
    BaseAddress[0] = 0LL;
    goto LABEL_9;
  }
LABEL_4:
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    if ( v6 < 0x200000 )
      v11 = 0x200000LL;
    v30 = v11;
  }
  v12 = *(__m128i **)(a1 + 56);
  v13 = (unsigned __int8)BYTE1(v12->m128i_i64[0]);
  v14 = _mm_srli_si128(*v12, 8).m128i_u64[0];
  v15 = (v12[1].m128i_i32[1] & 0x40000000) != 0;
  *(_OWORD *)v29 = *(_OWORD *)(a1 + 40);
  v16 = RtlpHpHeapValidateProtection(v12, v15 ? 64 : 4, v13, v14);
  v18 = RtlpHpAllocVA(BaseAddress, &v30, v30, 0x2000, v16, (__int128 *)v29);
  if ( v18 >= 0 )
  {
    LODWORD(v11) = v30;
    if ( v8 < v30 )
    {
      RtlpHpSegMgrVaCtxInitialize(v17, BaseAddress[0], v6);
      LODWORD(v11) = v30;
    }
    goto LABEL_8;
  }
  v20 = BaseAddress[0];
LABEL_9:
  if ( v20 )
  {
    *(_OWORD *)v29 = *(_OWORD *)(a1 + 40);
    RtlpHpFreeVA(BaseAddress, &v30, 0x8000, v29);
  }
  return (unsigned int)v18;
}
