/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1C0005CD8
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C0005F44 (StorpAreTelemetryErrorsEqual.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C0005F78 (StorpTelemetryConstructErrorEntry.c)
 *     StorpTelemetrySendUnitUniqueErrorData @ 0x1C0013580 (StorpTelemetrySendUnitUniqueErrorData.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

__int64 __fastcall StorpTelemetryCollectErrorData(__int64 a1, int a2, int a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // xmm4_8
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  int v12; // eax
  unsigned __int8 v13; // di
  char v14; // dl
  unsigned __int8 v15; // cl
  int v16; // esi
  unsigned int v17; // esi
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  bool v28; // cc
  bool v29; // zf
  int v30; // eax
  __int64 v31; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  __int128 v33; // [rsp+50h] [rbp-19h]
  __int128 v34; // [rsp+60h] [rbp-9h]
  union _LARGE_INTEGER PerformanceFrequency[2]; // [rsp+70h] [rbp+7h] BYREF
  __int128 v36; // [rsp+80h] [rbp+17h]
  __int64 v37; // [rsp+90h] [rbp+27h]

  v37 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_OWORD *)&PerformanceFrequency[0].LowPart = 0LL;
  v36 = 0LL;
  StorpTelemetryConstructErrorEntry(a1, a2, a3, a4, (union _LARGE_INTEGER)PerformanceFrequency);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2336), &LockHandle);
  v6 = *(_DWORD *)(a1 + 2344);
  v31 = *(_QWORD *)(a1 + 2392);
  v7 = v31;
  v8 = *(_OWORD *)(a1 + 2360);
  v9 = *(_OWORD *)(a1 + 2376);
  v10 = v36;
  *(_OWORD *)(a1 + 2360) = *(_OWORD *)&PerformanceFrequency[0].LowPart;
  v11 = v37;
  *(_OWORD *)(a1 + 2376) = v10;
  *(_QWORD *)(a1 + 2392) = v11;
  v33 = v8;
  v34 = v9;
  if ( v6 != -1 )
    *(_DWORD *)(a1 + 2344) = v6 + 1;
  v12 = *(unsigned __int8 *)(a4 + 2);
  if ( (_BYTE)v12 == 40 )
    v12 = *(_DWORD *)(a4 + 20);
  v13 = 0;
  if ( !v12 && ((BYTE5(PerformanceFrequency[0].QuadPart) - 8) & 0x5D) == 0 )
  {
    v26 = *(_DWORD *)(a1 + 2348);
    if ( v26 != -1 )
      *(_DWORD *)(a1 + 2348) = v26 + 1;
  }
  v15 = BYTE4(PerformanceFrequency[0].QuadPart);
  v14 = BYTE3(PerformanceFrequency[0].QuadPart);
  if ( BYTE3(PerformanceFrequency[0].QuadPart) == 93
    && BYTE4(PerformanceFrequency[0].QuadPart) >= 0x10u
    && (BYTE4(PerformanceFrequency[0].QuadPart) <= 0x1Cu
     || BYTE4(PerformanceFrequency[0].QuadPart) == 50
     || (unsigned __int8)(BYTE4(PerformanceFrequency[0].QuadPart) - 66) <= 1u) )
  {
    v27 = *(_DWORD *)(a1 + 2352);
    if ( v27 != -1 )
      *(_DWORD *)(a1 + 2352) = v27 + 1;
  }
  if ( BYTE2(PerformanceFrequency[0].u.LowPart) == 3 )
  {
    if ( v14 != 50 )
      goto LABEL_9;
    goto LABEL_38;
  }
  if ( BYTE2(PerformanceFrequency[0].u.LowPart) == 4 )
  {
    if ( v14 == 3 )
    {
LABEL_53:
      v29 = v15 == 0;
LABEL_54:
      if ( !v29 )
        goto LABEL_9;
      goto LABEL_55;
    }
    if ( v14 != 9 )
    {
      if ( v14 == 21 )
      {
        v29 = v15 == 1;
        goto LABEL_54;
      }
      if ( v14 == 25 )
      {
        v28 = v15 <= 3u;
LABEL_40:
        if ( !v28 )
          goto LABEL_9;
LABEL_55:
        v30 = *(_DWORD *)(a1 + 2356);
        if ( v30 != -1 )
          *(_DWORD *)(a1 + 2356) = v30 + 1;
        goto LABEL_9;
      }
      if ( v14 != 50 )
      {
        if ( v14 != 62 )
        {
          if ( (unsigned __int8)(v14 - 65) <= 1u )
            goto LABEL_55;
          if ( v14 != 68 )
          {
            if ( v14 == 76 )
              goto LABEL_55;
            if ( v14 != 85 )
              goto LABEL_9;
          }
          goto LABEL_53;
        }
        v15 -= 3;
      }
    }
LABEL_38:
    v28 = v15 <= 1u;
    goto LABEL_40;
  }
LABEL_9:
  v16 = *(_DWORD *)(a1 + 2344);
  if ( ((v16 + 1) & 0xFFFFFFFD) != 0 )
  {
    v17 = v16 - 1;
    if ( v17 <= 0xA )
    {
      v19 = v17 - 1;
    }
    else
    {
      v18 = rand();
      v8 = v33;
      v9 = v34;
      v7 = v31;
      v19 = v18 % v17;
    }
    if ( v19 < 0xA )
    {
      v25 = 5 * (v19 + 60LL);
      *(_OWORD *)(a1 + 8 * v25) = v8;
      *(_OWORD *)(a1 + 8 * v25 + 16) = v9;
      *(_QWORD *)(a1 + 8 * v25 + 32) = v7;
    }
  }
  while ( 1 )
  {
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 2360, a1 + 40 * (v13 + 70LL), v13, a1 + 40 * (v13 + 70LL)) == 1 )
    {
      ++*(_DWORD *)(a1 + 40 * v20 + 2832);
      goto LABEL_16;
    }
    *(_OWORD *)&PerformanceFrequency[0].LowPart = 0LL;
    v37 = 0LL;
    v36 = 0LL;
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(v21, PerformanceFrequency, v20, v21) == 1 )
      break;
    if ( ++v13 >= 0xAu )
      goto LABEL_16;
  }
  v24 = a1 + 40 * (v23 + 70);
  *(_OWORD *)v24 = *(_OWORD *)(a1 + 2360);
  *(_OWORD *)(v24 + 16) = *(_OWORD *)(a1 + 2376);
  *(_QWORD *)(v24 + 32) = *(_QWORD *)(a1 + 2392);
  *(_DWORD *)(a1 + 40 * v23 + 2832) = 1;
  if ( *(_DWORD *)(a1 + 3296) != 15 || ((*(_BYTE *)v24 - 6) & 0xFD) != 0 )
    StorpTelemetrySendUnitUniqueErrorData(a1);
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
