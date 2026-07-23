/*
 * XREFs of PpmExitCoordinatedIdle @ 0x1402C6F60
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140257420 (KeCheckProcessorAffinityEx.c)
 *     KdPowerTransitionEx @ 0x1403ADBD0 (KdPowerTransitionEx.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     PpmExitCoordinatedIdleState @ 0x140463094 (PpmExitCoordinatedIdleState.c)
 *     PpmEventCoordinatedIdleTransition @ 0x14046368A (PpmEventCoordinatedIdleTransition.c)
 *     KdCallPowerHandlers @ 0x140567A04 (KdCallPowerHandlers.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x140586AEC (PpmUpdatePlatformIdleAccounting.c)
 *     PopIdleWakeNotifyWakeSource @ 0x14059E0DC (PopIdleWakeNotifyWakeSource.c)
 */

__int64 __fastcall PpmExitCoordinatedIdle(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        char a5,
        unsigned __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 i; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  int v20; // edx
  unsigned int v21; // r12d
  __int64 v22; // r13
  int v23; // r8d
  int v24; // r10d
  char v25; // cl
  __int64 v26; // rdx
  unsigned __int64 v27; // r9
  __int64 v28; // r12
  unsigned __int64 v29; // r13
  _BYTE v30[4]; // [rsp+30h] [rbp-48h] BYREF
  int v31; // [rsp+34h] [rbp-44h]
  int v32; // [rsp+38h] [rbp-40h] BYREF
  int v33; // [rsp+3Ch] [rbp-3Ch]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-38h]

  v9 = 0LL;
  v30[0] = 0;
  v10 = -1;
  v32 = -1;
  if ( PpmPlatformStates )
  {
    if ( !a3 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 4); i = (unsigned int)(i + 1) )
      {
        v17 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 4 * i);
        v18 = PpmPlatformStates + 448 * v17;
        if ( (*(_DWORD *)(v18 + 416) & 0x3000000) == 0x1000000 )
          *(_DWORD *)(v18 + 416) = *(_DWORD *)(v18 + 416) & 0xFE000FFF | ((*(_DWORD *)(v18 + 416) & 0xFFF | 0x2000) << 12);
        if ( a5 )
          ++*(_DWORD *)(1016 * v17 + *(_QWORD *)(PpmPlatformStates + 48) + 24);
      }
    }
    v19 = *(_DWORD *)PpmPlatformStates;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      do
      {
        v20 = *(_DWORD *)(a1 + 36);
        v21 = v19 - 1;
        LOBYTE(v31) = 0;
        v22 = PpmPlatformStates + 448LL * (unsigned int)(v19 - 1);
        v33 = v19 - 1;
        BugCheckParameter2 = (unsigned int)(v19 - 1);
        if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v22 + 128), v20)
          && (unsigned __int8)PpmExitCoordinatedIdleState(v22 + 416, v30) )
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v9) = v21;
          v9 = (unsigned int)(v9 + 1);
          if ( (_DWORD)v9 == 1 && *(_BYTE *)(v22 + 121) )
          {
            LOBYTE(v23) = v31;
            v10 = v21;
            v24 = a9;
            if ( a3 )
            {
              v25 = a5;
              if ( a4 >= 0 && !a5 && v21 == PpmDripsStateIndex )
              {
                v23 = (unsigned __int8)v31;
                if ( a9 != 130 )
                  v23 = v9;
                v31 = v23;
              }
              if ( *(_BYTE *)(v22 + 120) )
              {
                KdCallPowerHandlers(1LL);
                LOBYTE(v26) = 1;
                KdPowerTransitionEx(2147483649LL, v26);
                LOBYTE(v23) = v31;
                v25 = a5;
                v24 = a9;
              }
              if ( (PopSimulate & 0x100) != 0 && a4 >= 0 && !v25 && a7 && v21 == PpmDripsStateIndex )
                KeBugCheckEx(0xA0u, 0x599uLL, BugCheckParameter2, 0LL, 0LL);
            }
            *(_BYTE *)(PpmPlatformStates + 56) = 0;
          }
          else
          {
            v24 = a9;
            LOBYTE(v23) = v31;
          }
          if ( !a5 )
          {
            v27 = *(_QWORD *)(v22 + 424);
            v28 = *(_QWORD *)(PpmPlatformStates + 48) + 1016LL * v21;
            if ( a6 >= v27 )
            {
              v29 = a6 - v27;
              *(_QWORD *)(v28 + 56) += a6 - v27;
            }
            else
            {
              v29 = 0LL;
            }
            if ( (_BYTE)v23 )
              PopIdleWakeNotifyWakeSource(v10, v24, a8, v27, a6, (__int64)&v32);
            if ( a4 < 0 && v30[0] )
            {
              ++*(_DWORD *)(v28 + 28);
            }
            else
            {
              ++*(_DWORD *)(v28 + 32);
              PpmUpdatePlatformIdleAccounting(v28 + 24, v29);
            }
          }
        }
        v19 = v33;
      }
      while ( v33 );
    }
    if ( a3 )
      PpmEventCoordinatedIdleTransition(0LL, (unsigned int)v9, *(_QWORD *)(a2 + 16), &v32);
  }
  *(_DWORD *)(a2 + 4) = v9;
  return v10;
}
