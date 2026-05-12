/*
 * XREFs of StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0063D00
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0015840 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer @ 0x1C005D910 (McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0062E50 (StorpTelemetryNvmeGetLogPage.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C0062FA4 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C00632C0 (StorpTelemetryNvmeHealthInfo.c)
 */

void __fastcall StorpTelemetrySendUnitNvmeHealthInfo(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  unsigned __int16 v4; // bx
  __int16 v5; // r12
  __int64 v6; // rsi
  unsigned int *Pool; // rax
  unsigned int *v8; // r13
  __int64 v9; // rsi
  NTSTATUS LogPage; // eax
  __int64 v11; // r10
  char v12; // r11
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  const wchar_t *v17; // r13
  _WORD *v18; // rdx
  __int64 v19; // rax
  _WORD *v20; // rdx
  __int64 v21; // rax
  const char *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r9
  const char *v25; // rsi
  int v26; // [rsp+80h] [rbp-C8h]
  char v27; // [rsp+C8h] [rbp-80h]
  char v28; // [rsp+C9h] [rbp-7Fh]
  unsigned __int16 v29; // [rsp+CCh] [rbp-7Ch]
  __int64 v30; // [rsp+E0h] [rbp-68h]
  __int64 v31; // [rsp+E8h] [rbp-60h]
  __int64 v32; // [rsp+F8h] [rbp-50h]
  unsigned int *v33; // [rsp+100h] [rbp-48h]
  PVOID P; // [rsp+108h] [rbp-40h]

  v2 = 0LL;
  v32 = 0LL;
  v29 = 0;
  v3 = 0LL;
  v4 = 0;
  v28 = 0;
  v5 = 0;
  P = 0LL;
  v6 = 0LL;
  v27 = 0;
  v31 = 0LL;
  v30 = 0LL;
  Pool = (unsigned int *)RaidAllocatePool(256LL, 560LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  v33 = Pool;
  v8 = Pool;
  if ( Pool && StorpTelemetryNvmeGetLogPage(a1, 2, 0x200u, Pool, 0x230u) >= 0 )
  {
    v29 = 216;
    v2 = (__int64)v8 + v8[6] + 8;
    v32 = v2;
    v31 = *(_QWORD *)(v2 + 48);
    v30 = *(_QWORD *)(v2 + 56);
    v28 = *(_BYTE *)(a1 + 1996);
    *(_BYTE *)(a1 + 1996) = *(_BYTE *)v2;
  }
  if ( (*(_DWORD *)(a1 + 1992) & 8) != 0 )
  {
    v12 = 0;
LABEL_25:
    v11 = 0LL;
    goto LABEL_26;
  }
  v9 = RaidAllocatePool(256LL, 560LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  P = (PVOID)v9;
  if ( v9 )
  {
    LogPage = StorpTelemetryNvmeGetLogPage(a1, 192, 0x200u, (_DWORD *)v9, 0x230u);
    v11 = 0LL;
    if ( LogPage >= 0 )
    {
      v12 = -64;
      v3 = v9 + 8 + *(unsigned int *)(v9 + 24);
      v27 = -64;
      if ( *(_BYTE *)(v3 + 509) )
      {
        v13 = *(_QWORD *)(v3 + 496) + 0x5B0D4015D7EF503BLL;
        if ( *(_QWORD *)(v3 + 496) == 0xA4F2BFEA2810AFC5uLL )
          v13 = *(_QWORD *)(v3 + 504) + 0x502AEB368390B064LL;
        if ( !v13 )
        {
          v5 = *(_WORD *)(v3 + 494);
          if ( v5 == 2 )
          {
            v4 = 494;
            goto LABEL_17;
          }
        }
      }
      else
      {
        v5 = *(_WORD *)(v3 + 510);
        if ( !v5 )
        {
          v4 = 55;
LABEL_17:
          v6 = *(_QWORD *)v3;
          v11 = *(_QWORD *)(v3 + 8);
          goto LABEL_26;
        }
        if ( v5 == 1 )
        {
          v4 = 88;
          goto LABEL_17;
        }
      }
      v4 = *(_WORD *)(v9 + 28);
      v5 = -1;
      v6 = 0LL;
      goto LABEL_25;
    }
    v6 = 0LL;
    v12 = 0;
    if ( LogPage != -1073741670 )
    {
      v14 = *(_DWORD *)(a1 + 1992);
      if ( (v14 & 1) == 0 )
        *(_DWORD *)(a1 + 1992) = v14 | 8;
    }
  }
  else
  {
    v6 = 0LL;
    v11 = 0LL;
    v12 = 0;
  }
LABEL_26:
  if ( v2 || v3 )
  {
    v15 = _InterlockedExchange64((volatile __int64 *)(a1 + 3200), 0LL);
    v16 = _InterlockedExchange64((volatile __int64 *)(a1 + 3208), 0LL);
    if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_38;
    }
    if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( *(_BYTE *)(a1 + 1996) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
    {
      v19 = *(_QWORD *)(a1 + 24);
      v17 = (const wchar_t *)&unk_1C006A690;
      v20 = &unk_1C006A690;
      ++g_StorpTraceLoggingCriticalEventsLogged;
      if ( *(_QWORD *)(v19 + 4952) )
        v20 = *(_WORD **)(v19 + 4952);
      StorpTelemetryNvmeHealthCriticalInfo(a1, v20, v2, v29, v12, v5, v3, v4, v15, v16, v31, v30, v6, v11);
    }
    else
    {
LABEL_38:
      v17 = (const wchar_t *)&unk_1C006A690;
      v18 = &unk_1C006A690;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4952LL) )
        v18 = *(_WORD **)(*(_QWORD *)(a1 + 24) + 4952LL);
      StorpTelemetryNvmeHealthInfo(a1, v18, v2, v29, v12, v5, v3, v4, v15, v16, v31, v30, v6, v11);
    }
    if ( !*(_BYTE *)(a1 + 1997) || *(_BYTE *)(a1 + 1996) != v28 )
    {
      v21 = *(_QWORD *)(a1 + 152);
      if ( v21 )
      {
        v22 = (const char *)(v21 + 90);
      }
      else
      {
        v23 = *(_QWORD *)(a1 + 144);
        if ( !v23
          || (v22 = (const char *)(v23 + 41),
              (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x40) == 0) )
        {
          v22 = 0LL;
        }
      }
      if ( (byte_1C00799E4 & 0x40) != 0 )
      {
        v24 = *(_QWORD *)(a1 + 24);
        v25 = (const char *)&dword_1C006A660;
        if ( v22 )
          v25 = v22;
        if ( *(_QWORD *)(v24 + 4952) )
          v17 = *(const wchar_t **)(v24 + 4952);
        McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer(
          v29,
          *(unsigned __int8 *)(a1 + 1996),
          *(_BYTE *)(a1 + 450) & 1,
          *(_DWORD *)(v24 + 56),
          *(_BYTE *)(a1 + 96),
          *(_BYTE *)(a1 + 97),
          *(_BYTE *)(a1 + 98),
          a1 + 1976,
          v24 + 4936,
          *(const wchar_t **)(v24 + 4592),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          v17,
          v25,
          *(_BYTE *)(a1 + 450) & 1,
          v26,
          *(_BYTE *)(a1 + 1996),
          v29,
          v32,
          v27,
          v5,
          v4,
          v3);
      }
      *(_BYTE *)(a1 + 1997) = 0;
    }
    v8 = v33;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x65546152u);
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
}
