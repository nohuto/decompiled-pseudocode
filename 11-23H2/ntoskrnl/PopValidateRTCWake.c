/*
 * XREFs of PopValidateRTCWake @ 0x140AA1344
 * Callers:
 *     PopHandleWakeSources @ 0x140AA0CCC (PopHandleWakeSources.c)
 * Callees:
 *     PopDiagTraceRtcWakeInfo @ 0x140594AAC (PopDiagTraceRtcWakeInfo.c)
 *     PopCurrentPowerStatePrecise @ 0x140873A08 (PopCurrentPowerStatePrecise.c)
 *     PopCalculateWakeTimeAdjustment @ 0x140987368 (PopCalculateWakeTimeAdjustment.c)
 */

unsigned __int8 __fastcall PopValidateRTCWake(_BYTE *a1)
{
  int v1; // edi
  unsigned __int64 v2; // r14
  unsigned __int8 v3; // r15
  unsigned __int8 v4; // r12
  int v5; // edx
  bool v6; // zf
  int v8; // ebx
  int v9; // ecx
  unsigned __int64 v10; // rbp
  __int64 v11; // r14
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF

  v1 = 0;
  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = PopFixedWakeSourceMask & 0x18;
  v6 = (PopSimulate & 0x100000) == 0;
  v8 = 1;
  *a1 = 1;
  if ( !v6 )
  {
    v1 = 4;
LABEL_22:
    v8 = 0;
    goto LABEL_23;
  }
  if ( v5 == 16 )
  {
    v9 = 1;
    dword_140C3CDE0 = 1;
    *a1 = 0;
    goto LABEL_10;
  }
  if ( v5 == 8 )
  {
    v9 = 0;
    v3 = 1;
    dword_140C3CDE0 = 0;
    *a1 = 0;
    goto LABEL_10;
  }
  if ( v5 )
  {
    PopCurrentPowerStatePrecise(&v13, 0LL);
    dword_140C3CDE0 = dword_140C3D96C;
  }
  v9 = dword_140C3CDE0;
  if ( dword_140C3CDE0 >= 0 )
  {
LABEL_10:
    if ( (unsigned __int64)v9 < 3 )
      goto LABEL_15;
  }
  if ( qword_140C3CE08 && qword_140C3CDF0[0] > (unsigned __int64)qword_140C3CE08 )
  {
    v9 = 1;
    dword_140C3CDE0 = 1;
  }
  else
  {
    v9 = 0;
    v3 = 1;
    dword_140C3CDE0 = 0;
  }
LABEL_15:
  v10 = qword_140C3CDF0[3 * v9];
  if ( v10 )
  {
    v11 = qword_140C3CDC8;
    v2 = v11 - 10000 * (unsigned int)PopCalculateWakeTimeAdjustment();
    if ( v10 < v2 + 100000000 )
    {
      if ( v2 <= v10
        || v2 - v10 < (-(__int64)(PopPendingUserPresenceDuringSystemSleep != 0) & 0xFFFFFFFFBE6F5500uLL) + 1200000000 )
      {
        v4 = 1;
        v8 = 0;
        goto LABEL_25;
      }
      v1 = 3;
    }
    else
    {
      v1 = 2;
    }
    goto LABEL_22;
  }
  v1 = 1;
LABEL_23:
  dword_140C3CDE0 = 3;
  *a1 = 0;
LABEL_25:
  PopDiagTraceRtcWakeInfo(v3, v4, v1, (unsigned __int8)*a1, v8, v3, v2);
  return v4;
}
