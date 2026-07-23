/*
 * XREFs of sub_140302930 @ 0x140302930
 * Callers:
 *     sub_140244620 @ 0x140244620 (sub_140244620.c)
 * Callees:
 *     sub_140302650 @ 0x140302650 (sub_140302650.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_1403A572C @ 0x1403A572C (sub_1403A572C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 */

__int64 sub_140302930()
{
  __int64 result; // rax
  _QWORD *i; // r14
  LARGE_INTEGER v2; // rsi
  unsigned __int64 v3; // rbp
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // r11
  unsigned int v8; // r10d
  unsigned int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  ULONG_PTR v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  LONGLONG v20; // rax
  unsigned __int64 v21; // r8
  LARGE_INTEGER v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r12
  signed __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r12
  signed __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // r10
  signed __int64 v40; // rax
  int v41; // r9d
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  unsigned __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // r10
  signed __int64 v51; // rax
  int v52; // r9d
  unsigned __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  unsigned __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // r8
  signed __int32 v59[8]; // [rsp+0h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF

  result = sub_1407B6B90(0LL);
  for ( i = (_QWORD *)result; result; i = (_QWORD *)result )
  {
    PerformanceFrequency.QuadPart = 0LL;
    if ( i[128] )
    {
      v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v3 = 0LL;
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount )
      {
        v5 = 0LL;
        v6 = ActiveProcessorCount;
        do
        {
          v7 = (i[128] >> 4) & 0x1FFLL;
          v8 = ((unsigned int)i[128] >> 13) & 0x3FFFF;
          _BitScanReverse(&v9, v8);
          v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 * 8 + qword_140C10DB0) + 8LL * (v9 - 2))
                          + 8LL * (v8 ^ (1 << v9))
                          + 8);
          v11 = *(_QWORD *)(v10 + 8 * v7);
          v12 = *(_QWORD *)(v10 + 8 * v7 + 8);
          *(_QWORD *)(v10 + 8 * v7 + 8) = v11;
          v13 = 1000000LL * *(unsigned int *)(qword_140D088C0[v5] + 68);
          if ( 10000000 * (v11 - v12) )
            v14 = 10000000 * (v11 - v12);
          else
            v14 = 0LL;
          ++v5;
          v3 += v14 / v13;
          --v6;
        }
        while ( v6 );
      }
      v15 = qword_140C4E390;
      if ( *(_DWORD *)(qword_140C4E390 + 228) == 5 )
      {
        v16 = 10000000LL;
        if ( Address )
        {
          v17 = sub_140303720(qword_140C4E390);
          v19 = MEMORY[0xFFFFF780000003B8]
              + (((unsigned __int64)sub_14042A5E0(v17, v18) * (unsigned __int128)*((unsigned __int64 *)Address + 1)) >> 64);
        }
        else
        {
          if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
          {
            v31 = sub_140303720(qword_140C4E390);
            v33 = sub_14042A5E0(v31, v32);
            v34 = *(_QWORD *)(v15 + 208);
            v35 = v33;
          }
          else
          {
            do
            {
              v34 = *(_QWORD *)(v15 + 208);
              do
              {
                v36 = *(_QWORD *)(v15 + 200);
                v37 = sub_140303720(v15);
                v39 = sub_14042A5E0(v37, v38);
                _InterlockedOr(v59, 0);
                v40 = *(_QWORD *)(v15 + 200);
              }
              while ( v36 != v40 );
            }
            while ( v34 != *(_QWORD *)(v15 + 208) );
            v41 = *(_DWORD *)(v15 + 220);
            v42 = v36 ^ v39;
            if ( _bittest64((const __int64 *)&v42, (unsigned __int8)(v41 - 1)) )
            {
              if ( v41 == 64 )
                v43 = -1LL;
              else
                v43 = (1LL << v41) - 1;
              v44 = 0LL;
              if ( v41 != 64 )
                v44 = 1LL << v41;
              v45 = v36 & v43;
              v35 = v39 | v36 ^ v45;
              if ( v39 < v45 )
                v35 += v44;
              _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 200), v35, v40);
            }
            else
            {
              if ( v41 == 64 )
                v46 = -1LL;
              else
                v46 = (1LL << v41) - 1;
              v35 = v39 | v36 & ~v46;
            }
          }
          v19 = sub_1403A572C(v34 + v35, *(_QWORD *)(v15 + 192), 10000000LL);
        }
      }
      else
      {
        v16 = *(_QWORD *)(qword_140C4E390 + 192);
        if ( *(_DWORD *)(qword_140C4E390 + 220) == 64 )
        {
          v26 = sub_140303720(qword_140C4E390);
          v28 = sub_14042A5E0(v26, v27);
          v29 = *(_QWORD *)(v15 + 208);
          v30 = v28;
        }
        else
        {
          do
          {
            v29 = *(_QWORD *)(v15 + 208);
            do
            {
              v47 = *(_QWORD *)(v15 + 200);
              v48 = sub_140303720(v15);
              v50 = sub_14042A5E0(v48, v49);
              _InterlockedOr(v59, 0);
              v51 = *(_QWORD *)(v15 + 200);
            }
            while ( v47 != v51 );
          }
          while ( v29 != *(_QWORD *)(v15 + 208) );
          v52 = *(_DWORD *)(v15 + 220);
          v53 = v47 ^ v50;
          if ( _bittest64((const __int64 *)&v53, (unsigned __int8)(v52 - 1)) )
          {
            if ( v52 == 64 )
              v54 = -1LL;
            else
              v54 = (1LL << v52) - 1;
            v55 = 0LL;
            if ( v52 != 64 )
              v55 = 1LL << v52;
            v56 = v47 & v54;
            v30 = v50 | v47 ^ v56;
            if ( v50 < v56 )
              v30 += v55;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 200), v30, v51);
          }
          else
          {
            if ( v52 == 64 )
              v57 = -1LL;
            else
              v57 = (1LL << v52) - 1;
            v30 = v50 | v47 & ~v57;
          }
        }
        v19 = v29 + v30;
      }
      if ( v15 != qword_140C4E388 && qword_140C4E388 )
      {
        v58 = *(_QWORD *)(qword_140C4E388 + 192);
        if ( *(_DWORD *)(qword_140C4E388 + 228) == 5 )
          v58 = 10000000LL;
        v19 = sub_1403A572C(v19, v16, v58);
      }
      v20 = v2.QuadPart + (v19 - v2.QuadPart) / 2;
      v21 = 10000000 * (v20 - i[127]);
      v22 = PerformanceFrequency;
      i[127] = v20;
      if ( v22.QuadPart == 10000000 )
        v23 = v21 / 0x989680;
      else
        v23 = v21 / v22.QuadPart;
      v24 = v23 + 1;
      if ( v3 )
        v25 = v3;
      else
        v25 = 0LL;
      sub_140302650((ULONG_PTR)i, v25 / v24);
    }
    result = sub_1407B6B90(i);
  }
  return result;
}
