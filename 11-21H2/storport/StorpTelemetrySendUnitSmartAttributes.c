/*
 * XREFs of StorpTelemetrySendUnitSmartAttributes @ 0x1C000172C
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0015840 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer @ 0x1C00010C0 (McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer.c)
 *     StorpTelemetrySmartCommand @ 0x1C0001CE8 (StorpTelemetrySmartCommand.c)
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001E48 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C0061C24 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 */

void __fastcall StorpTelemetrySendUnitSmartAttributes(__int64 a1)
{
  const char *v2; // rdi
  __int64 Pool; // rax
  __int64 v4; // rdx
  unsigned int *v5; // r14
  int v6; // eax
  __int64 v7; // rdx
  char *v8; // rbx
  char *v9; // rdx
  bool v10; // cf
  _WORD *v11; // r15
  unsigned __int16 *v12; // rdx
  __int64 i; // r8
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  const char *v24; // rbx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int v32; // eax
  int v33; // [rsp+70h] [rbp-B0h]
  int v34; // [rsp+88h] [rbp-98h]
  _QWORD v35[16]; // [rsp+A0h] [rbp-80h] BYREF

  memset(v35, 0, sizeof(v35));
  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 1992) & 2) == 0 && !KeGetCurrentIrql() )
  {
    Pool = RaidAllocatePool(256LL, 556LL, 1700028754LL, *(_QWORD *)(a1 + 8));
    v5 = (unsigned int *)Pool;
    if ( Pool )
    {
      HIDWORD(v35[2]) = -1;
      LOWORD(v35[2]) = -1;
      LOWORD(v35[3]) = -1;
      LOBYTE(v4) = -38;
      BYTE2(v35[3]) = -1;
      memset(&v35[4], 255, 96);
      v6 = StorpTelemetrySmartCommand(a1, v4, Pool);
      if ( v6 >= 0 )
      {
        v8 = (char *)v5 + *v5;
        if ( *(_DWORD *)v8 < 8u )
          goto LABEL_65;
        if ( v8[19] == -12 && v8[20] == 44 )
          *(_DWORD *)(a1 + 1992) |= 0x20u;
        else
          *(_DWORD *)(a1 + 1992) &= ~0x20u;
        LOBYTE(v7) = -48;
        v6 = StorpTelemetrySmartCommand(a1, v7, v5);
        if ( v6 >= 0 )
        {
          v9 = (char *)v5 + *v5;
          v10 = *(_DWORD *)v8 < 0x200u;
          v35[0] = v9;
          v11 = v9 + 16;
          v35[1] = v9 + 16;
          if ( !v10 )
          {
            if ( v9 != (char *)-16LL )
            {
              v12 = (unsigned __int16 *)(v9 + 27);
              for ( i = 30LL; i; --i )
              {
                v14 = *((unsigned __int8 *)v12 - 9);
                if ( v14 > 0xC1 )
                {
                  v25 = v14 - 194;
                  if ( !v25 )
                  {
                    BYTE2(v35[3]) = *((_BYTE *)v12 - 4);
                    goto LABEL_23;
                  }
                  v26 = v25 - 2;
                  if ( !v26 )
                  {
                    v35[10] = *((unsigned __int8 *)v12 - 4) | ((*((unsigned __int8 *)v12 - 3) | ((*((unsigned __int8 *)v12
                                                                                                  - 2) | ((*((unsigned __int8 *)v12 - 1) | ((unsigned __int64)*v12 << 8)) << 8)) << 8)) << 8);
                    goto LABEL_23;
                  }
                  v27 = v26 - 1;
                  if ( !v27 )
                  {
                    v35[11] = *((unsigned __int8 *)v12 - 4) | ((*((unsigned __int8 *)v12 - 3) | ((*((unsigned __int8 *)v12
                                                                                                  - 2) | ((*((unsigned __int8 *)v12 - 1) | ((unsigned __int64)*v12 << 8)) << 8)) << 8)) << 8);
                    goto LABEL_23;
                  }
                  v28 = v27 - 1;
                  if ( !v28 )
                  {
                    v35[12] = *((unsigned __int8 *)v12 - 4) | ((*((unsigned __int8 *)v12 - 3) | ((*((unsigned __int8 *)v12
                                                                                                  - 2) | ((*((unsigned __int8 *)v12 - 1) | ((unsigned __int64)*v12 << 8)) << 8)) << 8)) << 8);
                    goto LABEL_23;
                  }
                  v29 = v28 - 3;
                  if ( !v29 )
                  {
                    v35[13] = *((unsigned __int8 *)v12 - 4) | ((*((unsigned __int8 *)v12 - 3) | ((*((unsigned __int8 *)v12
                                                                                                  - 2) | ((*((unsigned __int8 *)v12 - 1) | ((unsigned __int64)*v12 << 8)) << 8)) << 8)) << 8);
                    goto LABEL_23;
                  }
                  v30 = v29 - 24;
                  if ( v30 )
                  {
                    v31 = v30 - 5;
                    if ( v31 )
                    {
                      if ( v31 == 3 )
                        v35[15] = *((unsigned __int8 *)v12 - 4) | ((*((unsigned __int8 *)v12 - 3) | ((*((unsigned __int8 *)v12 - 2) | ((*((unsigned __int8 *)v12 - 1) | ((unsigned __int64)*v12 << 8)) << 8)) << 8)) << 8);
                    }
                    else
                    {
                      v35[14] = *((unsigned __int8 *)v12 - 4) | ((*((unsigned __int8 *)v12 - 3) | ((*((unsigned __int8 *)v12 - 2) | ((*((unsigned __int8 *)v12 - 1) | ((unsigned __int64)*v12 << 8)) << 8)) << 8)) << 8);
                    }
                    goto LABEL_23;
                  }
                }
                else if ( v14 != 193 )
                {
                  v15 = v14 - 4;
                  if ( v15 )
                  {
                    v16 = v15 - 1;
                    if ( v16 )
                    {
                      v17 = v16 - 4;
                      if ( v17 )
                      {
                        v18 = v17 - 1;
                        if ( v18 )
                        {
                          v19 = v18 - 173;
                          if ( v19 )
                          {
                            v20 = v19 - 1;
                            if ( v20 )
                            {
                              v21 = v20 - 3;
                              if ( v21 )
                              {
                                if ( v21 == 1 )
                                  v35[9] = *((unsigned __int8 *)v12 - 4) | ((*((unsigned __int8 *)v12 - 3) | ((*((unsigned __int8 *)v12 - 2) | ((*((unsigned __int8 *)v12 - 1) | ((unsigned __int64)*v12 << 8)) << 8)) << 8)) << 8);
                              }
                              else
                              {
                                v35[8] = *((unsigned __int8 *)v12 - 4) | ((*((unsigned __int8 *)v12 - 3) | ((*((unsigned __int8 *)v12 - 2) | ((*((unsigned __int8 *)v12 - 1) | ((unsigned __int64)*v12 << 8)) << 8)) << 8)) << 8);
                              }
                            }
                            else
                            {
                              v35[7] = *((unsigned __int8 *)v12 - 4) | ((*((unsigned __int8 *)v12 - 3) | ((*((unsigned __int8 *)v12 - 2) | ((*((unsigned __int8 *)v12 - 1) | ((unsigned __int64)*v12 << 8)) << 8)) << 8)) << 8);
                            }
                          }
                          else
                          {
                            v35[6] = *((unsigned __int8 *)v12 - 4) | ((*((unsigned __int8 *)v12 - 3) | ((*((unsigned __int8 *)v12 - 2) | ((*((unsigned __int8 *)v12 - 1) | ((unsigned __int64)*v12 << 8)) << 8)) << 8)) << 8);
                          }
                        }
                        else
                        {
                          v35[5] = *((unsigned __int8 *)v12 - 4) | ((*((unsigned __int8 *)v12 - 3) | ((*((unsigned __int8 *)v12 - 2) | ((*((unsigned __int8 *)v12 - 1) | ((unsigned __int64)*v12 << 8)) << 8)) << 8)) << 8);
                        }
                      }
                      else
                      {
                        HIDWORD(v35[2]) = *((_DWORD *)v12 - 1);
                      }
                    }
                    else
                    {
                      v35[4] = *((unsigned __int8 *)v12 - 4) | ((*((unsigned __int8 *)v12 - 3) | ((*((unsigned __int8 *)v12 - 2) | ((*((unsigned __int8 *)v12 - 1) | ((unsigned __int64)*v12 << 8)) << 8)) << 8)) << 8);
                    }
                  }
                  else
                  {
                    LOWORD(v35[2]) = *(v12 - 2);
                  }
                  goto LABEL_23;
                }
                LOWORD(v35[3]) = *(v12 - 2);
LABEL_23:
                v12 += 6;
              }
            }
            if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
              || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
            {
              goto LABEL_33;
            }
            if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( *(_BYTE *)(a1 + 1996) )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( g_StorpTraceLoggingCriticalEventEnabled )
              StorpTelemetryLogUnitSmartAttributesCriticalData(a1, v35);
            else
LABEL_33:
              StorpTelemetryLogUnitSmartAttributesMeasures(a1, v35);
            v22 = *(_QWORD *)(a1 + 152);
            if ( v22 )
            {
              v2 = (const char *)(v22 + 90);
            }
            else
            {
              v23 = *(_QWORD *)(a1 + 144);
              if ( v23 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x40) != 0 )
                v2 = (const char *)(v23 + 41);
            }
            if ( (byte_1C00799E4 & 0x40) != 0 )
            {
              v24 = (const char *)&dword_1C006A660;
              if ( v2 )
                v24 = v2;
              McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer(
                a1 + 186,
                a1 + 169,
                a1 + 160,
                *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
                *(_BYTE *)(a1 + 96),
                *(_BYTE *)(a1 + 97),
                *(_BYTE *)(a1 + 98),
                a1 + 1976,
                *(_QWORD *)(a1 + 24) + 4936LL,
                *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4592LL),
                (const char *)(a1 + 160),
                (const char *)(a1 + 169),
                (const char *)(a1 + 186),
                v24,
                v33,
                *v11,
                (*(_DWORD *)(a1 + 1992) & 0x20) != 0,
                v34,
                (__int64)v11);
            }
            goto LABEL_42;
          }
          goto LABEL_65;
        }
      }
      if ( v6 == -1073741670 )
      {
LABEL_42:
        ExFreePoolWithTag(v5, 0x65546152u);
        return;
      }
LABEL_65:
      v32 = *(_DWORD *)(a1 + 1992);
      if ( (v32 & 1) == 0 )
        *(_DWORD *)(a1 + 1992) = v32 | 2;
      goto LABEL_42;
    }
  }
}
