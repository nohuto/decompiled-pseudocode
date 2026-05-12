/*
 * XREFs of StorpTelemetrySendUnitIoSizeDistributionData @ 0x1C0071A98
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C001BA38 (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitStorageDataCollectionIoctl @ 0x1C00A98DC (RaUnitStorageDataCollectionIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer @ 0x1C006900C (McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer.c)
 *     StringCchCatA @ 0x1C0073310 (StringCchCatA.c)
 *     StringCchPrintfA @ 0x1C00733A8 (StringCchPrintfA.c)
 */

__int64 __fastcall StorpTelemetrySendUnitIoSizeDistributionData(__int64 a1)
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
  void *v20; // rax
  __int64 v21; // r9
  char *v22; // rbx
  void *v23; // rax
  int v24; // esi
  char *v25; // r13
  char *v26; // rdi
  __int64 v27; // rbx
  size_t v28; // rdx
  size_t v29; // rdx
  size_t v30; // rdx
  size_t v31; // rdx
  __int64 v32; // rax
  const char *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rsi
  const char *v36; // rdi
  const wchar_t *v37; // r9
  __int64 v38; // rbx
  __int64 v39; // rdi
  PVOID v40; // rcx
  PVOID v41; // rcx
  int v43; // [rsp+90h] [rbp-1C8h]
  int v44; // [rsp+1D8h] [rbp-80h]
  int v45; // [rsp+1DCh] [rbp-7Ch]
  __int64 v46; // [rsp+1E0h] [rbp-78h]
  __int64 v47; // [rsp+1E8h] [rbp-70h]
  char v48; // [rsp+1F8h] [rbp-60h]
  _QWORD *Pool; // [rsp+218h] [rbp-40h]
  PVOID P[18]; // [rsp+228h] [rbp-30h] BYREF
  PVOID v52[18]; // [rsp+2B8h] [rbp+60h] BYREF
  char pszDest[16]; // [rsp+348h] [rbp+F0h] BYREF
  int v54; // [rsp+358h] [rbp+100h]
  char pszSrc[16]; // [rsp+360h] [rbp+108h] BYREF
  int v56; // [rsp+370h] [rbp+118h]

  v1 = a1;
  v2 = HIDWORD(qword_1C0092570);
  v3 = 0LL;
  v48 = 0;
  v4 = -1073741823;
  v5 = 0LL;
  v6 = 0LL;
  memset_0(P, 0, sizeof(P));
  memset_0(v52, 0, sizeof(v52));
  v7 = 2LL;
  if ( *(_QWORD *)(v1 + 2304) )
  {
    Pool = (_QWORD *)RaidAllocatePool(72LL, (unsigned int)dword_1C0092584, 1700028754LL, *(_QWORD *)(v1 + 8));
    v5 = Pool;
    if ( Pool
      && (v6 = (_QWORD *)RaidAllocatePool(72LL, (unsigned int)(16 * v2), 1700028754LL, *(_QWORD *)(v1 + 8))) != 0LL )
    {
      memmove(Pool, *(const void **)(v1 + 2304), (unsigned int)dword_1C0092584);
      for ( i = 1; i < g_RaidNumberProcessors; ++i )
      {
        v9 = (unsigned int)dword_1C009257C * i;
        if ( (_DWORD)v2 )
        {
          v10 = Pool + 1;
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
        v14 = (char *)Pool - v12;
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
      memmove(*(void **)(v1 + 2328), Pool, (unsigned int)dword_1C009257C);
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
            v20 = (void *)RaidAllocatePool(64LL, 351LL, 1700028754LL, *(_QWORD *)(v1 + 8));
            v21 = *(_QWORD *)(v1 + 8);
            *(PVOID *)((char *)P + v19) = v20;
            v22 = (char *)v20;
            v23 = (void *)RaidAllocatePool(64LL, 351LL, 1700028754LL, v21);
            *(PVOID *)((char *)v52 + v19) = v23;
            if ( !v22 || !v23 )
            {
              v7 = 2LL;
              goto LABEL_36;
            }
            v24 = 0;
            v25 = v22;
            v26 = (char *)v23;
            do
            {
              v54 = 0;
              v56 = 0;
              *(_OWORD *)pszDest = 0LL;
              *(_OWORD *)pszSrc = 0LL;
              v27 = 2LL
                  * (v45 + (unsigned __int16)xmmword_1C0092540 * (v44 + v24 * (unsigned int)WORD1(xmmword_1C0092540)));
              StringCchPrintfA(
                pszDest,
                0x14uLL,
                "%lld",
                v6[2 * v45
                 + 2 * (unsigned __int16)xmmword_1C0092540 * (v44 + v24 * (unsigned int)WORD1(xmmword_1C0092540))]);
              StringCchPrintfA(pszSrc, 0x14uLL, "%lld", v6[v27 + 1]);
              StringCchCatA(v25, v28, pszDest);
              StringCchCatA(v26, v29, pszSrc);
              if ( (unsigned int)v24 < 0xD )
              {
                StringCchCatA(v25, v30, ", ");
                StringCchCatA(v26, v31, ", ");
              }
              ++v24;
            }
            while ( v24 < 14 );
            v1 = a1;
            v19 = v46 + 8;
            v5 = Pool;
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
        if ( (byte_1C0092A04 & 0x10) != 0 )
        {
          v35 = *(_QWORD *)(a1 + 24);
          v36 = (const char *)&dword_1C0081784;
          v37 = (const wchar_t *)&unk_1C0081788;
          if ( v33 )
            v36 = v33;
          if ( *(_QWORD *)(v35 + 5016) )
            v37 = *(const wchar_t **)(v35 + 5016);
          LOBYTE(v43) = 2;
          McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer(
            (__int64)&StorPortEventProvider_Context,
            (__int64)&IoSizeDistribution,
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
            (const char *)P[0],
            (const char *)v52[0],
            (const char *)P[1],
            (const char *)v52[1],
            (const char *)P[2],
            (const char *)v52[2],
            (const char *)P[3],
            (const char *)v52[3],
            (const char *)P[4],
            (const char *)v52[4],
            (const char *)P[5],
            (const char *)v52[5],
            (const char *)P[6],
            (const char *)v52[6],
            (const char *)P[7],
            (const char *)v52[7],
            (const char *)P[8],
            (const char *)v52[8],
            (const char *)P[9],
            (const char *)v52[9],
            (const char *)P[10],
            (const char *)v52[10],
            (const char *)P[11],
            (const char *)v52[11],
            (const char *)P[12],
            (const char *)v52[12],
            (const char *)P[13],
            (const char *)v52[13],
            (const char *)P[14],
            (const char *)v52[14],
            (const char *)P[15],
            (const char *)v52[15],
            (const char *)P[16],
            (const char *)v52[16],
            (const char *)P[17],
            (const char *)v52[17]);
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
      v40 = P[v38];
      if ( v40 )
      {
        ExFreePoolWithTag(v40, 0x65546152u);
        P[v38] = 0LL;
      }
      v41 = v52[v38];
      if ( v41 )
      {
        ExFreePoolWithTag(v41, 0x65546152u);
        v52[v38] = 0LL;
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
