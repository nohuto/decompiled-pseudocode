/*
 * XREFs of sub_1405757C0 @ 0x1405757C0
 * Callers:
 *     sub_140234B28 @ 0x140234B28 (sub_140234B28.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 *     sub_14039CE58 @ 0x14039CE58 (sub_14039CE58.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1405757C0(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rax
  int v5; // ecx
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r8
  __m128i *v9; // r14
  __int64 v10; // rdx
  __int128 v11; // rt0
  unsigned __int8 v12; // tt
  __int64 v13; // rcx
  __int128 v14; // rt0
  unsigned __int8 v15; // tt
  bool v16; // zf
  __int64 v17; // rcx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r15d
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r8
  __int64 v28; // rbx
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r8
  __int64 v32; // rbx
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r8
  __int64 v36; // rbx
  int v37; // eax
  signed __int32 v39[8]; // [rsp+0h] [rbp-99h] BYREF
  __int64 v40; // [rsp+30h] [rbp-69h] BYREF
  __int128 v41; // [rsp+40h] [rbp-59h]
  __int128 Object; // [rsp+50h] [rbp-49h] BYREF
  __int128 v43; // [rsp+60h] [rbp-39h]
  __int128 v44; // [rsp+70h] [rbp-29h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+80h] [rbp-19h] BYREF
  __int128 v46; // [rsp+90h] [rbp-9h]
  __int128 v47; // [rsp+A0h] [rbp+7h]
  __int64 v48; // [rsp+B0h] [rbp+17h]
  __int64 v49; // [rsp+B8h] [rbp+1Fh]
  int v50; // [rsp+110h] [rbp+77h] BYREF
  volatile signed __int64 *v51; // [rsp+118h] [rbp+7Fh] BYREF

  v48 = 0LL;
  LODWORD(v49) = 0;
  LODWORD(v2) = *(unsigned __int8 *)(a2 + 792);
  v5 = v2 | *(unsigned __int8 *)(a2 + 870);
  v40 = 0LL;
  v51 = 0LL;
  Object = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( v5 != 63 )
  {
    v6 = a1 & 0x7FFFFFFFFFFFFFFCLL;
    if ( (unsigned __int64)(a1 - qword_140C50630) >= 0x8000000000LL )
      v7 = 0xFFFFFFFFLL;
    else
      v7 = (unsigned int)sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
    LODWORD(v2) = *(unsigned __int8 *)(a2 + 792);
    LODWORD(v8) = (v2 | *(unsigned __int8 *)(a2 + 870)) ^ 0x3F;
    while ( 1 )
    {
      v16 = !_BitScanReverse((unsigned int *)&v17, v8);
      if ( v16 )
        return v2;
      v8 = ~(1 << v17) & (unsigned int)v8;
      v9 = (__m128i *)(96 * v17 + a2 + 1696);
      v2 = v9->m128i_i64[0] & 0x7FFFFFFFFFFFFFFCLL;
      if ( v2 == v6 )
      {
        *(_QWORD *)&v11 = v9->m128i_i64[0];
        *((_QWORD *)&v11 + 1) = _mm_srli_si128(*v9, 8).m128i_u64[0];
        v12 = _InterlockedCompareExchange128(v9->m128i_i64, *((signed __int64 *)&v11 + 1), v11, (signed __int64 *)&v11);
        v10 = *((_QWORD *)&v11 + 1);
        v13 = v11;
        v41 = v11;
        if ( v12
          || (*(_QWORD *)&v14 = v9->m128i_i64[0],
              *((_QWORD *)&v14 + 1) = _mm_srli_si128(*v9, 8).m128i_u64[0],
              v15 = _InterlockedCompareExchange128(
                      v9->m128i_i64,
                      *((signed __int64 *)&v14 + 1),
                      v14,
                      (signed __int64 *)&v14),
              LOBYTE(v2) = v14,
              v10 = *((_QWORD *)&v14 + 1),
              v13 = v14,
              v41 = v14,
              v15) )
        {
          LOBYTE(v2) = v13 & 0xFC;
          if ( (v13 & 0x7FFFFFFFFFFFFFFCLL) == v6 && v9[1].m128i_i8[2] && (_DWORD)v10 == (_DWORD)v7 )
            break;
        }
      }
    }
    if ( v13 >= 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v10 = (-1LL << (CurrentIrql + 1)) & 4;
        *(_DWORD *)(v8 + 20) |= v10;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v50 = 0;
      while ( 1 )
      {
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v20 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v21 = *(_DWORD *)(v20 + 24);
            *(_DWORD *)(v20 + 24) = v21 + 1;
            if ( v21 == -1 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
          break;
        v22 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v22 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v23 = *(_DWORD *)(v22 + 24) - 1;
            *(_DWORD *)(v22 + 24) = v23;
            if ( !v23 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v50, v10, v8, v7);
        while ( *(_QWORD *)(a2 + 64) );
      }
      if ( (unsigned __int8)sub_140344DD0(a2, (__int64)&v40, (volatile signed __int32 **)&v51, v7) == 2 )
      {
        v25 = *(_DWORD *)(a2 + 536);
        sub_14035D0F8(v24, v40, v51);
        sub_140224100(a2);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v26 = KeGetCurrentIrql();
            if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
            {
              v27 = KeGetCurrentPrcb();
              v28 = *((_QWORD *)v27 + 4375);
              v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v16 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
              *(_DWORD *)(v28 + 20) &= v29;
              if ( v16 )
                sub_140418E4C((__int64)v27);
            }
          }
        }
        __writecr8(CurrentIrql);
        v49 = 0LL;
        *(_QWORD *)&v43 = (char *)&Object + 8;
        *((_QWORD *)&Object + 1) = (char *)&Object + 8;
        *((_QWORD *)&v46 + 1) = &sub_140575C90;
        *(_QWORD *)&v47 = &Object;
        *((_QWORD *)&v43 + 1) = a1;
        *(_QWORD *)&v44 = v9;
        *((_QWORD *)&v44 + 1) = a2;
        LOWORD(Object) = 1;
        BYTE2(Object) = 6;
        DWORD1(Object) = 0;
        LOWORD(BugCheckParameter2[0]) = 275;
        *(_QWORD *)&v46 = 0LL;
        WORD1(BugCheckParameter2[0]) = v25 + 2048;
        sub_140345190((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 0LL, 0);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        goto LABEL_58;
      }
      if ( *(_BYTE *)(a2 + 113) )
      {
        sub_14035D0F8(v24, v40, v51);
        sub_140224100(a2);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v34 = KeGetCurrentIrql();
            if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
            {
              v35 = KeGetCurrentPrcb();
              v36 = *((_QWORD *)v35 + 4375);
              v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v16 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
              *(_DWORD *)(v36 + 20) &= v37;
              if ( v16 )
                sub_140418E4C((__int64)v35);
            }
          }
        }
        __writecr8(CurrentIrql);
        KeGenericCallDpc((__int64)sub_14025C850, 0LL);
      }
      else
      {
        sub_14035D0F8(v24, v40, v51);
        sub_140224100(a2);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              v32 = *((_QWORD *)v31 + 4375);
              v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v16 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
              *(_DWORD *)(v32 + 20) &= v33;
              if ( v16 )
                sub_140418E4C((__int64)v31);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
    }
    v9->m128i_i8[0] |= 1u;
LABEL_58:
    _InterlockedOr(v39, 0);
    LOBYTE(v2) = sub_14039CE58(a1, (__int64)v9, a2);
  }
  return v2;
}
