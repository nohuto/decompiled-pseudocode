/*
 * XREFs of HalpTimerInitializeHypervisorTimer @ 0x1403BACF8
 * Callers:
 *     HalpTimerInitSystem @ 0x1403BB0A0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpInterruptApplyOverrides @ 0x140252258 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x140252380 (HalpInterruptGsiToLine.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1403916B0 (HalpTimerEnableHypervisorTimer.c)
 *     HalpFindTimer @ 0x1403ACEFC (HalpFindTimer.c)
 *     HalpIsPartitionCpuManager @ 0x1403BAEA4 (HalpIsPartitionCpuManager.c)
 *     HalpTimerInitialize @ 0x1403BC620 (HalpTimerInitialize.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetRemappedLineState @ 0x14050850C (HalpInterruptSetRemappedLineState.c)
 *     HalpTimerTestHypervisorTimer @ 0x14050E088 (HalpTimerTestHypervisorTimer.c)
 *     HalpHvBuildDeviceId @ 0x140A616F8 (HalpHvBuildDeviceId.c)
 */

void __fastcall HalpTimerInitializeHypervisorTimer(__int64 a1, __int64 a2)
{
  ULONG_PTR *Timer; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  char v11; // r12
  unsigned int *v12; // r15
  int v13; // esi
  int v14; // r14d
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  _BYTE v19[8]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v20; // [rsp+40h] [rbp-31h] BYREF
  int v21; // [rsp+48h] [rbp-29h] BYREF
  int v22; // [rsp+4Ch] [rbp-25h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v24[6]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v25; // [rsp+70h] [rbp-1h]
  __int64 v26; // [rsp+78h] [rbp+7h]
  __int64 v27; // [rsp+80h] [rbp+Fh]
  __int64 v28; // [rsp+88h] [rbp+17h]
  __int128 v29; // [rsp+90h] [rbp+1Fh] BYREF

  v23 = 0LL;
  v29 = 0LL;
  v20 = 0LL;
  v19[0] = 0;
  if ( (unsigned __int8)HalpIsPartitionCpuManager(a1, a2) )
  {
    if ( qword_140C4C4C0 )
    {
      _RAX = 1073741830LL;
      __asm { cpuid }
      if ( (_RAX & 0x100) != 0 )
      {
        Timer = HalpFindTimer(3, 32, 24576, 3840, 0);
        v8 = (__int64)Timer;
        if ( Timer )
        {
          if ( (int)HalpTimerInitialize(Timer) >= 0 )
          {
            *(_DWORD *)(v8 + 184) |= 4u;
            HalpHypervisorHpet = v8;
            v9 = HalpTimerTestHypervisorTimer(v8, v19);
            HalpHypervisorHpet = 0LL;
            if ( v9 >= 0 )
            {
              v11 = 0;
              v12 = *(unsigned int **)(v8 + 72);
              v13 = 1;
              v14 = 0;
              if ( v19[0] )
              {
                HalpHvBuildDeviceId(v10, *(_QWORD *)(v8 + 288) + 8LL, 0LL, &v23);
              }
              else
              {
                v16 = *(_DWORD *)(v8 + 224);
                if ( (v16 & 0x200) != 0 )
                {
                  if ( (int)HalpInterruptGsiToLine(*(unsigned int *)(v8 + 88), &v20) < 0 )
                    return;
                  v11 = *((_BYTE *)v12 + 4);
                }
                else if ( (v16 & 0x100) != 0 )
                {
                  v17 = *(_DWORD *)(v8 + 84);
                  if ( v17 >= 8 )
                  {
                    LODWORD(v20) = 45057;
                    v17 -= 8;
                  }
                  else
                  {
                    LODWORD(v20) = 45056;
                  }
                  HIDWORD(v20) = v17;
                }
                v21 = *(_DWORD *)(v8 + 96);
                v22 = *(_DWORD *)(v8 + 92);
                HalpInterruptApplyOverrides(&v20, &v22, &v21);
                v13 = v21;
                v14 = v22;
                v23 = 0x8000000000000000uLL;
                LOBYTE(v23) = v20;
              }
              LOBYTE(v15) = v11;
              if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64, __int64, __int128 *))qword_140C4C4C0)(
                          *((_QWORD *)v12 + 3),
                          *v12,
                          v23,
                          v15,
                          &v29) >= 0 )
              {
                if ( v19[0] )
                {
                  *(_DWORD *)(v8 + 236) = 0;
                  *(_DWORD *)(v8 + 232) = DWORD2(v29);
                  *(_QWORD *)(v8 + 240) = HIDWORD(v29);
                  v18 = *(_DWORD *)(v8 + 184) | 0x10;
LABEL_24:
                  HalpHypervisorHpet = v8;
                  *(_DWORD *)(v8 + 184) = v18 | 0x40;
                  HalpTimerEnableHypervisorTimer();
                  return;
                }
                v24[4] = -1;
                v26 = *((_QWORD *)&v29 + 1);
                v24[1] = 0;
                v25 = 8LL;
                v27 = 0LL;
                v28 = 212LL;
                v24[0] = v14;
                v24[2] = v13;
                v24[3] = 0;
                v24[5] = 1;
                if ( (int)HalpInterruptSetRemappedLineState(&v20, v24) >= 0 )
                {
                  v18 = *(_DWORD *)(v8 + 184) & 0xFFFFFFEF;
                  goto LABEL_24;
                }
              }
            }
          }
        }
      }
    }
  }
}
