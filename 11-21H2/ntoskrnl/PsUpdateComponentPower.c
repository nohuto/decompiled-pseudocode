/*
 * XREFs of PsUpdateComponentPower @ 0x140209380
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x140683088 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessEnergyTrackingStateCallback @ 0x1406E9510 (PspSetProcessEnergyTrackingStateCallback.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x1406831A8 (PoEnergyContextUpdateComponentPower.c)
 */

void __fastcall PsUpdateComponentPower(PEPROCESS a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  volatile signed __int64 *v6; // r10
  signed __int64 v7; // rax
  unsigned int v8; // r9d
  bool v9; // cc
  signed __int64 v10; // rtt
  signed __int64 v11; // [rsp+30h] [rbp+8h]

  if ( !a1 || a1 == PsIdleProcess )
    a1 = PsInitialSystemProcess;
  v3 = a1[2].Affinity.StaticBitmap[4];
  if ( !v3 )
    return;
  if ( a2 == 1 )
  {
    if ( !a3 )
      return;
    v4 = 280LL;
    v5 = 64LL;
    goto LABEL_7;
  }
  if ( a2 == 2 )
  {
    if ( !a3 )
      return;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 72), HIDWORD(a3));
    a3 = (unsigned int)a3;
    v5 = 88LL;
    v4 = 288LL;
    goto LABEL_7;
  }
  if ( a2 != 3 )
  {
    PoEnergyContextUpdateComponentPower();
    return;
  }
  if ( a3 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 80), HIDWORD(a3));
    a3 = (unsigned int)a3;
    v4 = 296LL;
    v5 = 96LL;
LABEL_7:
    v6 = (volatile signed __int64 *)(v4 + v3);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + v3), a3);
    if ( v4 + v3 )
    {
      v7 = *v6;
      v8 = KiTimelineBitmapTime;
      v9 = KiTimelineBitmapTime <= (unsigned int)*v6;
      if ( KiTimelineBitmapTime != (unsigned int)*v6 )
        goto LABEL_17;
      if ( (v7 & 0x100000000LL) == 0 )
      {
        while ( 1 )
        {
          v9 = v8 <= (unsigned int)v7;
LABEL_17:
          if ( v9 )
          {
            if ( (unsigned int)v7 - v8 >= 0x20 )
              return;
            HIDWORD(v11) = HIDWORD(v7) | (1 << (v7 - v8));
            if ( HIDWORD(v11) == HIDWORD(v7) )
              return;
            LODWORD(v11) = v7;
          }
          else
          {
            if ( v8 - (unsigned int)v7 >= 0x20 )
              HIDWORD(v11) = 1;
            else
              HIDWORD(v11) = (HIDWORD(v7) << (v8 - v7)) | 1;
            LODWORD(v11) = v8;
          }
          v10 = v7;
          v7 = _InterlockedCompareExchange64(v6, v11, v7);
          if ( v10 == v7 )
            return;
        }
      }
    }
  }
}
