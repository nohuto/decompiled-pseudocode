/*
 * XREFs of TranslateResultToScsiRequestBlock @ 0x1C0020D78
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaidUnitReleaseIrp @ 0x1C000BC60 (RaidUnitReleaseIrp.c)
 * Callees:
 *     McTemplateK0zx_EtwWriteTransfer @ 0x1C004C528 (McTemplateK0zx_EtwWriteTransfer.c)
 */

__int64 __fastcall TranslateResultToScsiRequestBlock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // r14d
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rdx
  unsigned int LowPart; // ecx
  LARGE_INTEGER v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rtt
  unsigned __int64 v17; // rtt
  union _LARGE_INTEGER v19; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v2) = 0;
  v19.QuadPart = 1LL;
  v5 = 0;
  if ( !a2 || !a1 )
    return 3221225485LL;
  if ( UseQPCTime )
    v6 = KeQueryPerformanceCounter(&v19);
  else
    v6.QuadPart = KeQueryUnbiasedInterruptTime();
  v7 = v6;
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a2 + 24) & 0x40) != 0 )
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 60);
  if ( *(_BYTE *)(a2 + 3) == 48 )
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 44);
  if ( !*(_DWORD *)(a2 + 20) )
  {
    v8 = 0;
    if ( *(_DWORD *)(a2 + 56) )
    {
      while ( 1 )
      {
        v9 = *(unsigned int *)(a2 + 4LL * v8 + 120);
        if ( (unsigned int)v9 >= 0x80 )
        {
          v10 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v9 <= (unsigned int)v10 && *(_DWORD *)(v9 + a2) == 64 && v9 + 40 <= v10 )
            break;
        }
        if ( ++v8 >= *(_DWORD *)(a2 + 56) )
          goto LABEL_31;
      }
      *(_BYTE *)(a1 + 4) = *(_BYTE *)((unsigned int)v9 + a2 + 8);
      *(_QWORD *)(a1 + 32) = *(_QWORD *)((unsigned int)v9 + a2 + 16);
      *(_BYTE *)(a1 + 11) = *(_BYTE *)((unsigned int)v9 + a2 + 9);
    }
    else
    {
LABEL_31:
      *(_BYTE *)(a1 + 3) = 48;
      v5 = -1073741811;
      *(_DWORD *)(a1 + 64) = -1073741811;
    }
  }
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart > 0 && PerformanceCounter.QuadPart < v7.QuadPart )
    v15 = PerformanceCounter.QuadPart - v7.QuadPart - 1;
  else
    v15 = PerformanceCounter.QuadPart - v7.QuadPart;
  if ( UseQPCTime )
  {
    LowPart = v19.LowPart;
    if ( v19.QuadPart && v15 )
    {
      v16 = 1000 * (v15 % v19.QuadPart);
      v14.QuadPart = v16 / v19.QuadPart + 1000 * (v15 / v19.QuadPart);
      v17 = 10000 * (v16 % v19.QuadPart);
      v12.QuadPart = v17 % v19.QuadPart;
      v2 = v17 / v19.QuadPart + 10000 * v14.QuadPart;
    }
  }
  else
  {
    LOBYTE(v2) = v15;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
    McTemplateK0zx_EtwWriteTransfer(
      LowPart,
      v12.LowPart,
      v14.LowPart,
      (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
      v2);
  return v5;
}
