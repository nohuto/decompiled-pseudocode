/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1C0014E64
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0001770 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorpTelemetrySendUnitUniqueErrorData @ 0x1C0014CB0 (StorpTelemetrySendUnitUniqueErrorData.c)
 *     StorpAreTelemetryErrorsEqual @ 0x1C00150B0 (StorpAreTelemetryErrorsEqual.c)
 *     IsReadWriteRequest @ 0x1C00150E4 (IsReadWriteRequest.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C0015178 (StorpTelemetryConstructErrorEntry.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

__int64 __fastcall StorpTelemetryCollectErrorData(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v6; // rdx
  int v7; // eax
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  __int64 v12; // rcx
  int v13; // r10d
  __int64 v14; // xmm4_8
  char v15; // dl
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // di
  int v18; // esi
  unsigned int v19; // esi
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  bool v29; // zf
  int v30; // eax
  bool v31; // cc
  bool v32; // zf
  int v33; // eax
  __int64 v34; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  __int128 v36; // [rsp+50h] [rbp-19h]
  __int128 v37; // [rsp+60h] [rbp-9h]
  __int128 v38; // [rsp+70h] [rbp+7h] BYREF
  __int128 v39; // [rsp+80h] [rbp+17h]
  __int64 v40; // [rsp+90h] [rbp+27h]

  v40 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v38 = 0LL;
  v39 = 0LL;
  StorpTelemetryConstructErrorEntry(a1, a2, a3, a4, (__int64)&v38);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2384), &LockHandle);
  v7 = *(_DWORD *)(a1 + 2392);
  v34 = *(_QWORD *)(a1 + 2440);
  v8 = *(_OWORD *)(a1 + 2408);
  v9 = *(_OWORD *)(a1 + 2424);
  v10 = v39;
  *(_OWORD *)(a1 + 2408) = v38;
  v11 = v40;
  *(_OWORD *)(a1 + 2424) = v10;
  *(_QWORD *)(a1 + 2440) = v11;
  v36 = v8;
  v37 = v9;
  if ( v7 != -1 )
    *(_DWORD *)(a1 + 2392) = v7 + 1;
  if ( *(_BYTE *)(a4 + 2) == 40 )
    v12 = *(unsigned int *)(a4 + 20);
  else
    v12 = *(unsigned __int8 *)(a4 + 2);
  LOBYTE(v6) = BYTE5(v38);
  if ( (unsigned int)IsReadWriteRequest(v12, v6) == 1 )
  {
    v28 = *(_DWORD *)(a1 + 2396);
    if ( v28 != v13 )
      *(_DWORD *)(a1 + 2396) = v28 + 1;
  }
  v15 = BYTE3(v38);
  v16 = BYTE4(v38);
  if ( BYTE3(v38) == 93 )
  {
    if ( BYTE4(v38) > 0x42u )
    {
      if ( BYTE4(v38) != 67 )
        goto LABEL_7;
    }
    else if ( BYTE4(v38) != 66 )
    {
      if ( BYTE4(v38) > 0x17u )
      {
        if ( BYTE4(v38) != 24 && BYTE4(v38) != 25 && BYTE4(v38) != 26 && BYTE4(v38) != 27 && BYTE4(v38) != 28 )
        {
          v29 = BYTE4(v38) == 50;
LABEL_43:
          if ( !v29 )
            goto LABEL_7;
        }
      }
      else if ( BYTE4(v38) != 23
             && BYTE4(v38) != 16
             && BYTE4(v38) != 17
             && BYTE4(v38) != 18
             && BYTE4(v38) != 19
             && BYTE4(v38) != 20
             && BYTE4(v38) != 21 )
      {
        v29 = BYTE4(v38) == 22;
        goto LABEL_43;
      }
    }
    v30 = *(_DWORD *)(a1 + 2400);
    if ( v30 != v13 )
      *(_DWORD *)(a1 + 2400) = v30 + 1;
  }
LABEL_7:
  v17 = 0;
  if ( BYTE2(v38) == 3 )
  {
    if ( v15 != 50 )
      goto LABEL_9;
    goto LABEL_51;
  }
  if ( BYTE2(v38) == 4 )
  {
    if ( v15 == 3 )
    {
LABEL_66:
      v32 = v16 == 0;
LABEL_67:
      if ( !v32 )
        goto LABEL_9;
      goto LABEL_68;
    }
    if ( v15 != 9 )
    {
      if ( v15 == 21 )
      {
        v32 = v16 == 1;
        goto LABEL_67;
      }
      if ( v15 == 25 )
      {
        v31 = v16 <= 3u;
LABEL_53:
        if ( !v31 )
          goto LABEL_9;
LABEL_68:
        v33 = *(_DWORD *)(a1 + 2404);
        if ( v33 != v13 )
          *(_DWORD *)(a1 + 2404) = v33 + 1;
        goto LABEL_9;
      }
      if ( v15 != 50 )
      {
        if ( v15 != 62 )
        {
          if ( (unsigned __int8)(v15 - 65) <= 1u )
            goto LABEL_68;
          if ( v15 != 68 )
          {
            if ( v15 == 76 )
              goto LABEL_68;
            if ( v15 != 85 )
              goto LABEL_9;
          }
          goto LABEL_66;
        }
        v16 -= 3;
      }
    }
LABEL_51:
    v31 = v16 <= 1u;
    goto LABEL_53;
  }
LABEL_9:
  v18 = *(_DWORD *)(a1 + 2392);
  if ( ((v18 + 1) & 0xFFFFFFFD) != 0 )
  {
    v19 = v18 - 1;
    if ( v19 <= 0xA )
    {
      v21 = v19 - 1;
    }
    else
    {
      v20 = rand();
      v8 = v36;
      v9 = v37;
      v14 = v34;
      v21 = v20 % v19;
    }
    if ( (unsigned int)v21 < 0xA )
    {
      v25 = 5 * v21;
      *(_OWORD *)(a1 + 8 * v25 + 2448) = v8;
      *(_OWORD *)(a1 + 8 * v25 + 2464) = v9;
      *(_QWORD *)(a1 + 8 * v25 + 2480) = v14;
    }
  }
  while ( 1 )
  {
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 2408, a1 + 8 * (v17 + 4 * (v17 + 89LL))) == 1 )
    {
      ++*(_DWORD *)(a1 + 40 * v23 + 2880);
      goto LABEL_16;
    }
    v38 = 0LL;
    v40 = 0LL;
    v39 = 0LL;
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(v22, &v38) == 1 )
      break;
    if ( ++v17 >= 0xAu )
      goto LABEL_16;
  }
  *(_OWORD *)v26 = *(_OWORD *)(a1 + 2408);
  *(_OWORD *)(v26 + 16) = *(_OWORD *)(a1 + 2424);
  *(_QWORD *)(v26 + 32) = *(_QWORD *)(a1 + 2440);
  *(_DWORD *)(a1 + 40 * v27 + 2880) = 1;
  if ( *(_DWORD *)(a1 + 3344) != 15 || ((*(_BYTE *)v26 - 6) & 0xFD) != 0 )
    StorpTelemetrySendUnitUniqueErrorData(a1, v26);
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
