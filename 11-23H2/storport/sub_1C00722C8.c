/*
 * XREFs of sub_1C00722C8 @ 0x1C00722C8
 * Callers:
 *     sub_1C001C6E8 @ 0x1C001C6E8 (sub_1C001C6E8.c)
 *     sub_1C00AAAAC @ 0x1C00AAAAC (sub_1C00AAAAC.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C006983C @ 0x1C006983C (sub_1C006983C.c)
 *     sub_1C0073B40 @ 0x1C0073B40 (sub_1C0073B40.c)
 *     sub_1C0073BD8 @ 0x1C0073BD8 (sub_1C0073BD8.c)
 */

__int64 __fastcall sub_1C00722C8(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // r15d
  void *v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rsi
  unsigned int i; // edx
  __int64 v9; // r9
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // r8
  char *v14; // r9
  char *v15; // r10
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  const char *v20; // rax
  __int64 v21; // r9
  const char *v22; // rbx
  void *v23; // rax
  int v24; // esi
  const char *v25; // r13
  void *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  const char *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rsi
  const char *v36; // rdi
  const wchar_t *v37; // r9
  __int64 v38; // rbx
  __int64 v39; // rdi
  char *v40; // rcx
  PVOID v41; // rcx
  int v43; // [rsp+90h] [rbp-1C8h]
  int v44; // [rsp+1D8h] [rbp-80h]
  int v45; // [rsp+1DCh] [rbp-7Ch]
  __int64 v46; // [rsp+1E0h] [rbp-78h]
  __int64 v47; // [rsp+1E8h] [rbp-70h]
  char v48; // [rsp+1F8h] [rbp-60h]
  _QWORD *v50; // [rsp+218h] [rbp-40h]
  const char *Dst[18]; // [rsp+228h] [rbp-30h] BYREF
  PVOID P[18]; // [rsp+2B8h] [rbp+60h] BYREF
  __int128 v53; // [rsp+348h] [rbp+F0h] BYREF
  int v54; // [rsp+358h] [rbp+100h]
  __int128 v55; // [rsp+360h] [rbp+108h] BYREF
  int v56; // [rsp+370h] [rbp+118h]

  v1 = a1;
  v2 = HIDWORD(qword_1C0093570);
  v3 = 0LL;
  v48 = 0;
  v4 = -1073741823;
  v5 = 0LL;
  v6 = 0LL;
  memset_0(Dst, 0, sizeof(Dst));
  memset_0(P, 0, sizeof(P));
  v7 = 2LL;
  if ( *(_QWORD *)(v1 + 2304) )
  {
    v50 = (_QWORD *)sub_1C0007CF4(72LL, (unsigned int)dword_1C0093584, 1700028754LL, *(_QWORD *)(v1 + 8));
    v5 = v50;
    if ( v50 && (v6 = (_QWORD *)sub_1C0007CF4(72LL, (unsigned int)(16 * v2), 1700028754LL, *(_QWORD *)(v1 + 8))) != 0LL )
    {
      memmove(v50, *(const void **)(v1 + 2304), (unsigned int)dword_1C0093584);
      for ( i = 1; i < dword_1C0093BF0; ++i )
      {
        v9 = (unsigned int)dword_1C009357C * i;
        if ( (_DWORD)v2 )
        {
          v10 = v50 + 1;
          v11 = v2;
          do
          {
            *(v10 - 1) += *(_QWORD *)((char *)v10 + v9 - 8);
            *v10 += *(_QWORD *)((char *)v10 + v9);
            v10 += 2;
            --v11;
          }
          while ( v11 );
        }
      }
      v12 = *(_QWORD *)(v1 + 2328);
      if ( (_DWORD)v2 )
      {
        v13 = (_QWORD *)(v12 + 8);
        v14 = (char *)v50 - v12;
        v15 = (char *)v6 - v12;
        v16 = v2;
        do
        {
          v17 = *(_QWORD *)((char *)v13 + (_QWORD)v14 - 8) - *(v13 - 1);
          *(_QWORD *)((char *)v13 + (_QWORD)v15 - 8) = v17;
          v3 += v17;
          *(_QWORD *)((char *)v13 + (_QWORD)v15) = *(_QWORD *)((char *)v13 + (_QWORD)v14) - *v13;
          v13 += 2;
          --v16;
        }
        while ( v16 );
        v48 = v3;
      }
      memmove(*(void **)(v1 + 2328), v50, (unsigned int)dword_1C009357C);
      if ( v3 )
      {
        v45 = 0;
        v18 = 0LL;
        v47 = 0LL;
        while ( 2 )
        {
          v44 = 0;
          v19 = v18;
          v46 = v18;
          do
          {
            v20 = (const char *)sub_1C0007CF4(64LL, 351LL, 1700028754LL, *(_QWORD *)(v1 + 8));
            v21 = *(_QWORD *)(v1 + 8);
            *(const char **)((char *)Dst + v19) = v20;
            v22 = v20;
            v23 = (void *)sub_1C0007CF4(64LL, 351LL, 1700028754LL, v21);
            *(PVOID *)((char *)P + v19) = v23;
            if ( !v22 || !v23 )
            {
              v7 = 2LL;
              goto LABEL_36;
            }
            v24 = 0;
            v25 = v22;
            v26 = v23;
            do
            {
              v54 = 0;
              v56 = 0;
              v53 = 0LL;
              v55 = 0LL;
              v27 = 2LL
                  * (v45 + (unsigned __int16)xmmword_1C0093540 * (v44 + v24 * (unsigned int)WORD1(xmmword_1C0093540)));
              sub_1C0073BD8(
                &v53,
                20LL,
                "%lld",
                v6[2 * v45
                 + 2 * (unsigned __int16)xmmword_1C0093540 * (v44 + v24 * (unsigned int)WORD1(xmmword_1C0093540))]);
              sub_1C0073BD8(&v55, 20LL, "%lld", v6[v27 + 1]);
              sub_1C0073B40(v25, v28, &v53);
              sub_1C0073B40(v26, v29, &v55);
              if ( (unsigned int)v24 < 0xD )
              {
                sub_1C0073B40(v25, v30, ", ");
                sub_1C0073B40(v26, v31, ", ");
              }
              ++v24;
            }
            while ( v24 < 14 );
            v1 = a1;
            v19 = v46 + 8;
            v5 = v50;
            v4 = -1073741823;
            ++v44;
            v46 += 8LL;
          }
          while ( v44 < 9 );
          v7 = 2LL;
          v18 = v47 + 72;
          ++v45;
          v47 += 72LL;
          if ( v45 < 2 )
            continue;
          break;
        }
        v32 = *(_QWORD *)(a1 + 152);
        if ( v32 )
        {
          v33 = (const char *)(v32 + 90);
        }
        else
        {
          v34 = *(_QWORD *)(a1 + 144);
          if ( !v34
            || (v33 = (const char *)(v34 + 41),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x40) == 0) )
          {
            v33 = 0LL;
          }
        }
        if ( (byte_1C0093A04 & 0x10) != 0 )
        {
          v35 = *(_QWORD *)(a1 + 24);
          v36 = (const char *)&dword_1C0082784;
          v37 = (const wchar_t *)&unk_1C0082788;
          if ( v33 )
            v36 = v33;
          if ( *(_QWORD *)(v35 + 5016) )
            v37 = *(const wchar_t **)(v35 + 5016);
          LOBYTE(v43) = 2;
          sub_1C006983C(
            (__int64)&RegHandle,
            (__int64)&stru_1C0088DA0,
            0LL,
            *(_DWORD *)(v35 + 56),
            *(_BYTE *)(a1 + 96),
            *(_BYTE *)(a1 + 97),
            *(_BYTE *)(a1 + 98),
            a1 + 2024,
            v35 + 5000,
            *(_DWORD *)(a1 + 3344),
            *(const wchar_t **)(v35 + 4656),
            (const char *)(a1 + 160),
            (const char *)(a1 + 169),
            (const char *)(a1 + 186),
            v37,
            v36,
            *(_BYTE *)(a1 + 450) & 1,
            v43,
            (int)L"4K, 8K, 16K, 32K, 64K, 128K, 256K, 1M, 1M+",
            (int)L"128us, 256us, 512us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 512ms, 1000ms, 2000ms, 10000ms, 10000+ms",
            v48,
            Dst[0],
            (const char *)P[0],
            Dst[1],
            (const char *)P[1],
            Dst[2],
            (const char *)P[2],
            Dst[3],
            (const char *)P[3],
            Dst[4],
            (const char *)P[4],
            Dst[5],
            (const char *)P[5],
            Dst[6],
            (const char *)P[6],
            Dst[7],
            (const char *)P[7],
            Dst[8],
            (const char *)P[8],
            Dst[9],
            (const char *)P[9],
            Dst[10],
            (const char *)P[10],
            Dst[11],
            (const char *)P[11],
            Dst[12],
            (const char *)P[12],
            Dst[13],
            (const char *)P[13],
            Dst[14],
            (const char *)P[14],
            Dst[15],
            (const char *)P[15],
            Dst[16],
            (const char *)P[16],
            Dst[17],
            (const char *)P[17]);
          v7 = 2LL;
        }
      }
    }
    else
    {
LABEL_36:
      v4 = -1073741801;
    }
  }
  v38 = 0LL;
  do
  {
    v39 = 9LL;
    do
    {
      v40 = (char *)Dst[v38];
      if ( v40 )
      {
        ExFreePoolWithTag(v40, 0x65546152u);
        Dst[v38] = 0LL;
      }
      v41 = P[v38];
      if ( v41 )
      {
        ExFreePoolWithTag(v41, 0x65546152u);
        P[v38] = 0LL;
      }
      ++v38;
      --v39;
    }
    while ( v39 );
    --v7;
  }
  while ( v7 );
  if ( v6 )
    ExFreePoolWithTag(v6, 0x65546152u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x65546152u);
  return v4;
}
