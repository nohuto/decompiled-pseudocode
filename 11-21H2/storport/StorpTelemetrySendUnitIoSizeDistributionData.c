/*
 * XREFs of StorpTelemetrySendUnitIoSizeDistributionData @ 0x1C00635DC
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C00118A8 (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitStorageDataCollectionIoctl @ 0x1C008F190 (RaUnitStorageDataCollectionIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer @ 0x1C005BFD8 (McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer.c)
 *     StringCchCatA @ 0x1C0064734 (StringCchCatA.c)
 *     StringCchPrintfA @ 0x1C00647CC (StringCchPrintfA.c)
 */

__int64 __fastcall StorpTelemetrySendUnitIoSizeDistributionData(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // r15d
  void *v5; // r13
  _BYTE *v6; // r12
  __int64 v7; // rsi
  unsigned int i; // r8d
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  char *v12; // rcx
  _QWORD *v13; // r8
  signed __int64 v14; // r9
  signed __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  void *v20; // rax
  __int64 v21; // r9
  char *v22; // rbx
  void *v23; // rax
  int v24; // edi
  char *v25; // r13
  char *v26; // rsi
  __int64 v27; // rbx
  size_t v28; // rdx
  size_t v29; // rdx
  size_t v30; // rdx
  size_t v31; // rdx
  bool v32; // cc
  __int64 v33; // rax
  const char *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rsi
  const char *v37; // rdi
  const wchar_t *v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rdi
  PVOID v41; // rcx
  PVOID v42; // rcx
  int v44; // [rsp+90h] [rbp-1C8h]
  int v45; // [rsp+1D8h] [rbp-80h]
  int v46; // [rsp+1DCh] [rbp-7Ch]
  __int64 v47; // [rsp+1E0h] [rbp-78h]
  __int64 v48; // [rsp+1E8h] [rbp-70h]
  char v49; // [rsp+1F8h] [rbp-60h]
  _QWORD *Pool; // [rsp+218h] [rbp-40h]
  PVOID P[18]; // [rsp+228h] [rbp-30h] BYREF
  PVOID v53[18]; // [rsp+2B8h] [rbp+60h] BYREF
  char pszDest[16]; // [rsp+348h] [rbp+F0h] BYREF
  int v55; // [rsp+358h] [rbp+100h]
  char pszSrc[16]; // [rsp+360h] [rbp+108h] BYREF
  int v57; // [rsp+370h] [rbp+118h]

  v1 = a1;
  v2 = HIDWORD(qword_1C00797D0);
  v3 = 0LL;
  v49 = 0;
  v4 = -1073741823;
  v5 = 0LL;
  v6 = 0LL;
  memset(P, 0, sizeof(P));
  memset(v53, 0, sizeof(v53));
  v7 = 2LL;
  if ( *(_QWORD *)(v1 + 2256) )
  {
    Pool = (_QWORD *)RaidAllocatePool(72LL, (unsigned int)dword_1C00797E4, 1700028754LL, *(_QWORD *)(v1 + 8));
    v5 = Pool;
    if ( Pool
      && (v6 = (_BYTE *)RaidAllocatePool(72LL, (unsigned int)(16 * v2), 1700028754LL, *(_QWORD *)(v1 + 8))) != 0LL )
    {
      memmove(Pool, *(const void **)(v1 + 2256), (unsigned int)dword_1C00797E4);
      for ( i = 1; i < g_RaidNumberProcessors; ++i )
      {
        if ( (_DWORD)v2 )
        {
          v9 = Pool + 1;
          v10 = i * (unsigned int)dword_1C00797DC;
          v11 = v2;
          do
          {
            *(v9 - 1) += *(_QWORD *)((char *)v9 + v10 - 8);
            *v9 += *(_QWORD *)((char *)v9 + v10);
            v9 += 2;
            --v11;
          }
          while ( v11 );
        }
      }
      v12 = *(char **)(v1 + 2280);
      if ( (_DWORD)v2 )
      {
        v13 = v12 + 8;
        v14 = (char *)Pool - v12;
        v15 = v6 - v12;
        v16 = v2;
        do
        {
          v17 = *(_QWORD *)((char *)v13 + v14 - 8) - *(v13 - 1);
          *(_QWORD *)((char *)v13 + v15 - 8) = v17;
          v3 += v17;
          *(_QWORD *)((char *)v13 + v15) = *(_QWORD *)((char *)v13 + v14) - *v13;
          v13 += 2;
          --v16;
        }
        while ( v16 );
        v12 = *(char **)(v1 + 2280);
        v49 = v3;
      }
      memmove(v12, Pool, (unsigned int)dword_1C00797DC);
      if ( v3 )
      {
        v18 = 0LL;
        v45 = 0;
        v48 = 0LL;
        while ( 2 )
        {
          v46 = 0;
          v19 = v18;
          v47 = v18;
          do
          {
            v20 = (void *)RaidAllocatePool(64LL, 301LL, 1700028754LL, *(_QWORD *)(v1 + 8));
            v21 = *(_QWORD *)(v1 + 8);
            *(PVOID *)((char *)P + v19) = v20;
            v22 = (char *)v20;
            v23 = (void *)RaidAllocatePool(64LL, 301LL, 1700028754LL, v21);
            *(PVOID *)((char *)v53 + v19) = v23;
            if ( !v22 || !v23 )
            {
              v7 = 2LL;
              goto LABEL_36;
            }
            v24 = 0;
            v25 = (char *)v23;
            v26 = v22;
            do
            {
              v55 = 0;
              v57 = 0;
              *(_OWORD *)pszDest = 0LL;
              *(_OWORD *)pszSrc = 0LL;
              v27 = v45 + (unsigned __int16)xmmword_1C00797A0 * (v46 + v24 * (unsigned int)WORD1(xmmword_1C00797A0));
              StringCchPrintfA(pszDest, 0x14uLL, "%lld", *(_QWORD *)&v6[16 * v27]);
              StringCchPrintfA(pszSrc, 0x14uLL, "%lld", *(_QWORD *)&v6[16 * v27 + 8]);
              StringCchCatA(v26, v28, pszDest);
              StringCchCatA(v25, v29, pszSrc);
              if ( (unsigned int)v24 < 0xB )
              {
                StringCchCatA(v26, v30, ", ");
                StringCchCatA(v25, v31, ", ");
              }
              ++v24;
            }
            while ( v24 < 12 );
            v1 = a1;
            v19 = v47 + 8;
            v5 = Pool;
            v32 = ++v46 < 9;
            v4 = -1073741823;
            v47 += 8LL;
          }
          while ( v32 );
          v7 = 2LL;
          v18 = v48 + 72;
          ++v45;
          v48 += 72LL;
          if ( v45 < 2 )
            continue;
          break;
        }
        v33 = *(_QWORD *)(a1 + 152);
        if ( v33 )
        {
          v34 = (const char *)(v33 + 90);
        }
        else
        {
          v35 = *(_QWORD *)(a1 + 144);
          if ( !v35
            || (v34 = (const char *)(v35 + 41),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x40) == 0) )
          {
            v34 = 0LL;
          }
        }
        if ( (byte_1C00799E4 & 8) != 0 )
        {
          v36 = *(_QWORD *)(a1 + 24);
          v37 = (const char *)&dword_1C006A660;
          v38 = (const wchar_t *)&unk_1C006A690;
          if ( v34 )
            v37 = v34;
          if ( *(_QWORD *)(v36 + 4952) )
            v38 = *(const wchar_t **)(v36 + 4952);
          LOBYTE(v44) = 1;
          McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer(
            (__int64)&StorPortEventProvider_Context,
            (__int64)&IoSizeDistribution,
            0LL,
            *(_DWORD *)(v36 + 56),
            *(_BYTE *)(a1 + 96),
            *(_BYTE *)(a1 + 97),
            *(_BYTE *)(a1 + 98),
            a1 + 1976,
            v36 + 4936,
            *(_DWORD *)(a1 + 3296),
            *(const wchar_t **)(v36 + 4592),
            (const char *)(a1 + 160),
            (const char *)(a1 + 169),
            (const char *)(a1 + 186),
            v38,
            v37,
            *(_BYTE *)(a1 + 450) & 1,
            v44,
            (int)L"4K, 8K, 16K, 32K, 64K, 128K, 256K, 1M, 1M+",
            (int)L"256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 2000ms, 6000ms, 10000ms, 20000ms, 20000+ms",
            v49,
            (const char *)P[0],
            (const char *)v53[0],
            (const char *)P[1],
            (const char *)v53[1],
            (const char *)P[2],
            (const char *)v53[2],
            (const char *)P[3],
            (const char *)v53[3],
            (const char *)P[4],
            (const char *)v53[4],
            (const char *)P[5],
            (const char *)v53[5],
            (const char *)P[6],
            (const char *)v53[6],
            (const char *)P[7],
            (const char *)v53[7],
            (const char *)P[8],
            (const char *)v53[8],
            (const char *)P[9],
            (const char *)v53[9],
            (const char *)P[10],
            (const char *)v53[10],
            (const char *)P[11],
            (const char *)v53[11],
            (const char *)P[12],
            (const char *)v53[12],
            (const char *)P[13],
            (const char *)v53[13],
            (const char *)P[14],
            (const char *)v53[14],
            (const char *)P[15],
            (const char *)v53[15],
            (const char *)P[16],
            (const char *)v53[16],
            (const char *)P[17],
            (const char *)v53[17]);
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
  v39 = 0LL;
  do
  {
    v40 = 9LL;
    do
    {
      v41 = P[v39];
      if ( v41 )
      {
        ExFreePoolWithTag(v41, 0x65546152u);
        P[v39] = 0LL;
      }
      v42 = v53[v39];
      if ( v42 )
      {
        ExFreePoolWithTag(v42, 0x65546152u);
        v53[v39] = 0LL;
      }
      ++v39;
      --v40;
    }
    while ( v40 );
    --v7;
  }
  while ( v7 );
  if ( v6 )
    ExFreePoolWithTag(v6, 0x65546152u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x65546152u);
  return v4;
}
