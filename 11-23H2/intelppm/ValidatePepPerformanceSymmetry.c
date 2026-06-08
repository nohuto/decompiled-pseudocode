/*
 * XREFs of ValidatePepPerformanceSymmetry @ 0x1C0038FC0
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C002A6D4 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005484 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0009A08 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dds @ 0x1C000A3E0 (WPP_RECORDER_SF_dds.c)
 */

__int64 __fastcall ValidatePepPerformanceSymmetry(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 v5; // rbx
  int v6; // r12d
  __int64 v7; // r15
  unsigned int v10; // edi
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // rdx
  int v15; // [rsp+28h] [rbp-79h]
  __int64 v16; // [rsp+30h] [rbp-71h]
  __int64 v17; // [rsp+38h] [rbp-69h]
  __int64 v18; // [rsp+48h] [rbp-59h]
  int v19; // [rsp+58h] [rbp-49h]
  const char *v20; // [rsp+60h] [rbp-41h] BYREF
  int v21; // [rsp+68h] [rbp-39h]
  const char *v22; // [rsp+70h] [rbp-31h]
  int v23; // [rsp+78h] [rbp-29h]
  const char *v24; // [rsp+80h] [rbp-21h]
  int v25; // [rsp+88h] [rbp-19h]
  const char *v26; // [rsp+90h] [rbp-11h]
  int v27; // [rsp+98h] [rbp-9h]
  const char *v28; // [rsp+A0h] [rbp-1h]
  int v29; // [rsp+A8h] [rbp+7h]
  const char *v30; // [rsp+B0h] [rbp+Fh]
  int v31; // [rsp+B8h] [rbp+17h]
  const char *v32; // [rsp+C0h] [rbp+1Fh]

  v18 = a4;
  v20 = "HighestPerformance";
  v4 = (__int64 *)&v20;
  v19 = 4;
  v22 = "NominalPerformance";
  v21 = 8;
  v24 = "LowestNonlinearPerformance";
  v5 = 0LL;
  v23 = 12;
  v26 = "LowestPerformance";
  v6 = a3;
  v25 = 16;
  v28 = "NominalFrequency";
  v7 = 7LL;
  v27 = 20;
  v30 = "FrequencyCounterIndex";
  v29 = 48;
  v32 = "PerformanceCounterIndex";
  v31 = 52;
  v10 = 0;
  do
  {
    if ( *(_DWORD *)(*((unsigned int *)v4 - 2) + a2) != *(_DWORD *)(*((unsigned int *)v4 - 2) + a4) )
    {
      v10 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_dds((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x43u, v15, a1, v6, *v4);
        a4 = v18;
      }
    }
    v4 += 2;
    --v7;
  }
  while ( v7 );
  v11 = *(_BYTE *)(a2 + 37);
  if ( v11 == *(_BYTE *)(a4 + 37) )
  {
    if ( v11 )
    {
      do
      {
        v12 = *(_QWORD *)(a4 + 40);
        v13 = *(_QWORD *)(a2 + 40);
        if ( *(_DWORD *)(v13 + 24 * v5) != *(_DWORD *)(v12 + 24 * v5)
          || *(_DWORD *)(v13 + 24 * v5 + 4) != *(_DWORD *)(v12 + 24 * v5 + 4) )
        {
          v10 = -1073741823;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v13, v12, 0x45u, v15);
            a4 = v18;
          }
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *(unsigned __int8 *)(a2 + 37) );
    }
  }
  else
  {
    v10 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v6;
      LODWORD(v16) = a1;
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x44u,
        (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
        v16,
        v17);
    }
  }
  return v10;
}
