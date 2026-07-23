/*
 * XREFs of sub_140B088E4 @ 0x140B088E4
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_140B088E4()
{
  unsigned int *v0; // rsi
  unsigned int v1; // edi
  __int64 i; // rbx
  __int64 result; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx
  int *v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  ULONG_PTR v10; // r15
  __int64 v11; // r13
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v13; // rsi
  int *v14; // r15
  ULONG_PTR v15; // rdi
  unsigned __int64 v16; // r14
  LARGE_INTEGER v17; // rbx
  unsigned __int64 *v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // kr00_8
  unsigned __int64 v21; // r14
  bool v22; // zf
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // rbx
  unsigned __int64 v26; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rbx
  unsigned __int64 v31; // r14
  struct _KPRCB *v32; // r10
  __int64 v33; // r9
  signed __int32 v34[8]; // [rsp+0h] [rbp-78h] BYREF
  int *v35; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v36; // [rsp+28h] [rbp-50h]
  __int64 v37; // [rsp+30h] [rbp-48h]
  unsigned __int64 v38; // [rsp+40h] [rbp-38h]
  _OWORD v39[3]; // [rsp+48h] [rbp-30h]
  int v40; // [rsp+C0h] [rbp+48h] BYREF
  int v41; // [rsp+C4h] [rbp+4Ch]
  ULONG_PTR v42; // [rsp+C8h] [rbp+50h]
  __int64 v43; // [rsp+D0h] [rbp+58h]
  __int64 v44; // [rsp+D8h] [rbp+60h]

  v40 = 0;
  v0 = (unsigned int *)&v40;
  v1 = 0;
  v41 = 2;
  v39[0] = 0LL;
  for ( i = 0LL; ; i += 8LL )
  {
    result = sub_1403250B0((__int64)&StartContext, v1, 0);
    *(_QWORD *)((char *)&v39[1] + i) = result;
    if ( result == -1 )
      break;
    v4 = *v0;
    v5 = 48 * result - 0x220000000000LL;
    *(_QWORD *)((char *)v39 + i) = v5;
    if ( *(unsigned __int8 *)(v5 + 34) >> 6 != v4 )
      sub_140267E78(v5, v4, 0);
    ++v1;
    ++v0;
    if ( v1 >= 2 )
    {
      v37 = 2LL;
      v6 = &v40;
      v36 = (unsigned __int64 *)&unk_140C50828;
      v7 = 0LL;
      v35 = &v40;
      v44 = 0LL;
      do
      {
        v8 = 0LL;
        v9 = *v6;
        v10 = *(_QWORD *)((char *)&v39[1] + v7);
        v42 = v10;
        v11 = 3LL;
        do
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          _InterlockedOr(v34, 0);
          sub_1402359C4(v10, 3, v9);
          _InterlockedOr(v34, 0);
          v8 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart;
          --v11;
        }
        while ( v11 );
        v13 = *(_QWORD *)((char *)v39 + v7);
        v14 = v35;
        v15 = v42;
        v43 = 3LL;
        v38 = v8 / 3;
        v16 = 0LL;
        do
        {
          v17 = KeQueryPerformanceCounter(0LL);
          _InterlockedOr(v34, 0);
          sub_140267E78(v13, 1u, 0);
          sub_1402359C4(v15, 3, v9);
          sub_140267E78(v13, v9, 0);
          _InterlockedOr(v34, 0);
          v16 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v17.QuadPart;
          --v43;
        }
        while ( v43 );
        v18 = v36;
        v19 = v44;
        v20 = v16;
        v21 = v38;
        if ( v20 / 3 < 9 * (v38 / 0xA) )
          dword_140C507DC[4 * v9] = 1;
        v7 = v19 + 8;
        *(v18 - 1) = v21;
        v6 = v14 + 1;
        *v18 = v20 / 3;
        v44 = v7;
        v22 = v37-- == 1;
        v35 = v6;
        v36 = v18 + 2;
      }
      while ( !v22 );
      v23 = 0LL;
      v24 = 2LL;
      do
      {
        v25 = *(_QWORD *)((char *)v39 + v23);
        v26 = (unsigned __int8)sub_1402F2700(v25);
        sub_1402C6EB0(*(_QWORD *)((char *)&v39[1] + v23), 2);
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = (unsigned int)dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v26 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v28 = *((_QWORD *)CurrentPrcb + 4375);
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
              v22 = ((unsigned int)result & *(_DWORD *)(v28 + 20)) == 0;
              *(_DWORD *)(v28 + 20) &= result;
              if ( v22 )
                result = sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v26);
        v23 += 8LL;
        --v24;
      }
      while ( v24 );
      return result;
    }
  }
  if ( v1 )
  {
    v29 = 8LL * v1;
    do
    {
      v29 -= 8LL;
      --v1;
      v30 = *(_QWORD *)((char *)v39 + v29);
      v31 = (unsigned __int8)sub_1402F2700(v30);
      sub_1402C6EB0(*(_QWORD *)((char *)&v39[1] + v29), 2);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v31 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v33 = *((_QWORD *)v32 + 4375);
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
            v22 = ((unsigned int)result & *(_DWORD *)(v33 + 20)) == 0;
            *(_DWORD *)(v33 + 20) &= result;
            if ( v22 )
              result = sub_140418E4C((__int64)v32);
          }
        }
      }
      __writecr8(v31);
    }
    while ( v1 );
  }
  return result;
}
