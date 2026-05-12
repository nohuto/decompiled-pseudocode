/*
 * XREFs of StorpTelemetrySendUnitScsiDiagnostics @ 0x1C002129C
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0015840 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C002141C (RaidUnitLogSenseCommandSrb.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     McTemplateK0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_EtwWriteTransfer @ 0x1C005CE7C (McTemplateK0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_EtwWriteTransf.c)
 *     StorpTelemetryGetReadErrorCounter @ 0x1C0060710 (StorpTelemetryGetReadErrorCounter.c)
 *     StorpTelemetryGetStartStopCycleCounter @ 0x1C0060770 (StorpTelemetryGetStartStopCycleCounter.c)
 *     StorpTelemetryGetWriteErrorCounter @ 0x1C0060848 (StorpTelemetryGetWriteErrorCounter.c)
 */

void __fastcall StorpTelemetrySendUnitScsiDiagnostics(__int64 a1)
{
  __int64 v1; // rsi
  void *v2; // r15
  __int64 Pool; // rax
  int v4; // eax
  int v5; // eax
  PVOID *v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // r8d
  int v13; // r9d
  _BYTE *v14; // rbx
  int v15; // eax
  unsigned __int16 *v16; // rdi
  unsigned int v17; // r12d
  char v18; // al
  char v19; // al
  int v20; // r8d
  unsigned int v21; // r14d
  __int64 v22; // rdx
  char v23; // [rsp+188h] [rbp-80h]
  int v24; // [rsp+18Ch] [rbp-7Ch] BYREF
  unsigned int v25; // [rsp+190h] [rbp-78h]
  __int64 v26; // [rsp+198h] [rbp-70h]
  void *v27; // [rsp+1A0h] [rbp-68h]
  _QWORD v28[34]; // [rsp+1A8h] [rbp-60h] BYREF
  _QWORD v29[8]; // [rsp+2B8h] [rbp+B0h] BYREF
  _DWORD v30[2]; // [rsp+2F8h] [rbp+F0h]
  _DWORD v31[2]; // [rsp+300h] [rbp+F8h]

  v26 = a1;
  v1 = a1;
  v31[0] = 218956546;
  v31[1] = 353439246;
  v24 = 256;
  v30[0] = 0x1000000;
  v30[1] = 256;
  v2 = 0LL;
  memset(v29, 0, sizeof(v29));
  memset(v28, 0, sizeof(v28));
  if ( (*(_DWORD *)(v1 + 1992) & 0x10) == 0 )
  {
    Pool = RaidAllocatePool(256LL, 256LL, 1700028754LL, *(_QWORD *)(v1 + 8));
    v27 = (void *)Pool;
    v2 = (void *)Pool;
    if ( Pool )
    {
      v4 = RaidUnitLogSenseCommandSrb(v1, 0, 0, 0, (__int64)&v24, Pool);
      if ( (int)(v4 + 0x80000000) < 0 || v4 == -2147483643 )
      {
        v8 = 0;
        v25 = 0;
        v9 = 0LL;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v1 + 8);
          v24 = 4096;
          v11 = RaidAllocatePool(256LL, 4096LL, 1700028754LL, v10);
          v29[v9] = v11;
          v14 = (_BYTE *)v11;
          if ( !v11 )
            break;
          LOBYTE(v12) = *((_BYTE *)v31 + v9);
          LOBYTE(v13) = *((_BYTE *)v30 + v9);
          v23 = v13;
          v15 = RaidUnitLogSenseCommandSrb(v1, 0, v12, v13, (__int64)&v24, v11);
          if ( ((v15 + 0x80000000) & 0x80000000) != 0 || v15 == -2147483643 )
          {
            v16 = (unsigned __int16 *)(v14 + 4);
            v17 = v24 - 4;
            switch ( *v14 & 0x3F )
            {
              case 2:
                v28[18] = v14;
                LODWORD(v28[19]) = v24;
                break;
              case 3:
                v28[20] = v14;
                LODWORD(v28[21]) = v24;
                break;
              case 13:
                v19 = v14[1];
                if ( v19 )
                {
                  if ( v19 == 1 )
                  {
                    v28[24] = v14;
                    LODWORD(v28[25]) = v24;
                  }
                }
                else
                {
                  v28[22] = v14;
                  LODWORD(v28[23]) = v24;
                }
                break;
              case 14:
                v18 = v14[1];
                if ( v18 )
                {
                  if ( v18 == 1 )
                  {
                    v28[28] = v14;
                    LODWORD(v28[29]) = v24;
                  }
                }
                else
                {
                  v28[26] = v14;
                  LODWORD(v28[27]) = v24;
                }
                break;
              case 17:
                v28[30] = v14;
                LODWORD(v28[31]) = v24;
                break;
              case 21:
                v28[32] = v14;
                LODWORD(v28[33]) = v24;
                break;
            }
            if ( v17 >= 4 )
            {
              do
              {
                v20 = *((unsigned __int8 *)v16 + 3);
                v21 = v20 + 4;
                if ( v17 < v20 + 4 )
                  break;
                v22 = *v16;
                LOWORD(v22) = __ROR2__(v22, 8);
                switch ( *v14 & 0x3F )
                {
                  case 2:
                    StorpTelemetryGetWriteErrorCounter(v16, v22, v28);
                    break;
                  case 3:
                    StorpTelemetryGetReadErrorCounter(v16, v22, v28);
                    break;
                  case 13:
                    if ( !v14[1] && (_BYTE)v20 == 2 )
                    {
                      if ( (_WORD)v22 )
                      {
                        if ( (unsigned __int16)v22 == 1 )
                          BYTE1(v28[0]) = *((_BYTE *)v16 + 5);
                      }
                      else
                      {
                        LOBYTE(v28[0]) = *((_BYTE *)v16 + 5);
                      }
                    }
                    break;
                  case 14:
                    if ( v14[1] )
                    {
                      if ( v23 == 1 && !(_WORD)v22 && (_BYTE)v20 == 2 )
                        LOWORD(v28[17]) = __ROR2__(v16[2], 8);
                    }
                    else
                    {
                      StorpTelemetryGetStartStopCycleCounter(v16, v22, v28);
                    }
                    break;
                  case 17:
                    if ( (_BYTE)v20 == 4 && (_WORD)v22 == 1 )
                      BYTE2(v28[17]) = *((_BYTE *)v16 + 7);
                    break;
                  default:
                    if ( (*v14 & 0x3F) == 0x15 && (_BYTE)v20 == 12 && !(_WORD)v22 )
                    {
                      BYTE3(v28[17]) = *((_BYTE *)v16 + 9);
                      HIDWORD(v28[17]) = _byteswap_ulong(*((_DWORD *)v16 + 1));
                    }
                    break;
                }
                v17 -= v21;
                v16 = (unsigned __int16 *)((char *)v16 + v21);
              }
              while ( v17 >= 4 );
              v1 = v26;
              v2 = v27;
              v8 = v25;
            }
          }
          ++v8;
          ++v9;
          v25 = v8;
          if ( v8 >= 8 )
          {
            if ( (byte_1C00799E4 & 0x40) != 0 )
              McTemplateK0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_EtwWriteTransfer(
                v1 + 186,
                v1 + 169,
                v1 + 160,
                *(_DWORD *)(*(_QWORD *)(v1 + 24) + 56LL),
                *(_BYTE *)(v1 + 96),
                *(_BYTE *)(v1 + 97),
                *(_BYTE *)(v1 + 98),
                v1 + 1976,
                *(_QWORD *)(v1 + 24) + 4936LL,
                *(_QWORD *)(*(_QWORD *)(v1 + 24) + 4592LL),
                v1 + 160,
                v1 + 169,
                v1 + 186,
                *(_BYTE *)(v1 + 450) & 1);
            break;
          }
        }
      }
      else if ( v4 != -1073741670 )
      {
        v5 = *(_DWORD *)(v1 + 1992);
        if ( (v5 & 1) == 0 )
          *(_DWORD *)(v1 + 1992) = v5 | 0x10;
      }
    }
  }
  v6 = (PVOID *)v29;
  v7 = 8LL;
  do
  {
    if ( *v6 )
      ExFreePoolWithTag(*v6, 0x65546152u);
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( v2 )
    ExFreePoolWithTag(v2, 0x65546152u);
}
