/*
 * XREFs of CcChargeDirtyPagesInternal @ 0x1402FCD80
 * Callers:
 *     CcSetDirtyPinnedData @ 0x1402FC810 (CcSetDirtyPinnedData.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1403CFD40 (CcAddDirtyPagesToExternalCache.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140299C88 (CcScheduleLazyWriteScan.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1405361A4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 */

char __fastcall CcChargeDirtyPagesInternal(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        _BYTE *a5,
        _QWORD *a6)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  _BYTE *v9; // rdi
  _BYTE *v10; // rsi
  _QWORD *v11; // rcx
  __int64 v12; // rcx

  if ( CcEnablePerVolumeLazyWriter )
  {
    v7 = a6 + 124;
    v8 = a6 + 124;
    v9 = (char *)a6 + 708;
    v10 = (char *)a6 + 1172;
    v11 = a5 + 1056;
  }
  else
  {
    v7 = a5 + 1056;
    v11 = a5 + 1056;
    v9 = a5 + 780;
    v10 = a5 + 1292;
    v8 = a6 + 124;
  }
  *v11 += a4;
  if ( a6 )
    *v8 += a4;
  if ( a2 )
    *(_DWORD *)(a2 + 8) += a4;
  if ( a3 )
    *(_DWORD *)(a3 + 32) += a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 112) += a4;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 512) + 32LL), a4);
    v8 = *(_QWORD **)(a1 + 512);
    v8[30] += v8[4];
    a3 = v8[31];
    v12 = *(_QWORD *)(a1 + 512);
    if ( a3 <= *(_QWORD *)(v12 + 32) )
      a3 = *(_QWORD *)(v12 + 32);
    v8[31] = a3;
    if ( a6 )
    {
      v8[32] += a6[127];
      v8[33] = a6[128];
      v8[34] = a6[129];
    }
    ++v8[35];
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 248) + 24LL), a4);
      v8 = *(_QWORD **)(a1 + 248);
      if ( v8[17] == -1LL )
      {
        v8 = *(_QWORD **)(a1 + 248);
        v8[17] = MEMORY[0xFFFFF78000000320];
      }
    }
  }
  if ( *v10 && *v7 >= 0x2000uLL )
  {
    LOBYTE(a3) = 1;
    LOBYTE(v8) = CcScheduleLazyWriteScan(a5, (__int64)a6, a3, 0);
  }
  if ( *v9 )
  {
    LOBYTE(v8) = CcScheduleLazyWriteScan(a5, (__int64)a6, 0LL, 0);
    *v9 = 0;
  }
  if ( !CcEnablePerVolumeLazyWriter )
    LOBYTE(v8) = CcAdjustWriteBehindThreadPoolIfNeeded(a5, 0LL);
  return (char)v8;
}
