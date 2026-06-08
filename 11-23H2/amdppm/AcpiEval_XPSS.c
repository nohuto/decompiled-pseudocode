/*
 * XREFs of AcpiEval_XPSS @ 0x1C0028FD4
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00367AC (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     AcpiEvaluateMethod @ 0x1C00293BC (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0029A00 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_XPSS(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  _DWORD *Pool2; // r14
  int v6; // ebx
  _DWORD *v7; // rdi
  unsigned __int16 v9; // r9
  int v10; // eax
  _WORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // [rsp+28h] [rbp-D8h]
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  char v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+52h] [rbp-AEh]
  const char *v18; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v19)(); // [rsp+60h] [rbp-A0h]
  char v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+6Ah] [rbp-96h]
  const char *v22; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v23)(); // [rsp+78h] [rbp-88h]
  char v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+82h] [rbp-7Eh]
  const char *v26; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v27)(); // [rsp+90h] [rbp-70h]
  char v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ah] [rbp-66h]
  const char *v30; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v31)(); // [rsp+A8h] [rbp-58h]
  char v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B2h] [rbp-4Eh]
  const char *v34; // [rsp+B8h] [rbp-48h]
  void *v35; // [rsp+C0h] [rbp-40h]
  char v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CAh] [rbp-36h]
  const char *v38; // [rsp+D0h] [rbp-30h]
  void *v39; // [rsp+D8h] [rbp-28h]
  char v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E2h] [rbp-1Eh]
  const char *v42; // [rsp+E8h] [rbp-18h]
  void *v43; // [rsp+F0h] [rbp-10h]
  char v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FAh] [rbp-6h]
  const char *v46; // [rsp+100h] [rbp+0h]
  void *v47; // [rsp+108h] [rbp+8h]

  v2 = 0;
  v20 = 1;
  v14 = 0;
  v18 = "CoreFrequency";
  v16 = 0;
  v19 = AcpiParseULong;
  v22 = "Power";
  v23 = AcpiParseULong;
  v26 = "Latency";
  v27 = AcpiParseULong;
  v28 = 3;
  v31 = AcpiParseULong;
  v30 = "BmLatency";
  v17 = 0;
  v34 = "Control";
  Pool2 = 0LL;
  v21 = 0x40000;
  v38 = "Status";
  v42 = "ControlMask";
  v46 = "StatusMask";
  v24 = 2;
  v25 = 0x80000;
  v29 = 786432;
  v32 = 4;
  v33 = 1048578;
  v35 = &AcpiParseULong64;
  v36 = 5;
  v37 = 1572866;
  v39 = &AcpiParseULong64;
  v40 = 6;
  v41 = 2097154;
  v43 = &AcpiParseULong64;
  v44 = 7;
  v45 = 2621442;
  v47 = &AcpiParseULong64;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x80u);
  v6 = AcpiEvaluateMethod(a1, 1397968984, 0, (unsigned int)&P, (__int64)&v14);
  if ( v6 < 0 )
    goto LABEL_6;
  v7 = P;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x40000000;
  if ( !v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x1Cu,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    v6 = -1073741823;
    goto LABEL_6;
  }
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_16:
      v6 = -1073741275;
      goto LABEL_6;
    }
    v9 = 29;
LABEL_15:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v9,
      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    goto LABEL_16;
  }
  v10 = v7[2];
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v9 = 30;
    goto LABEL_15;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(48 * v10 + 8), 1919119952LL);
  if ( Pool2 )
  {
    v11 = v7 + 3;
    *Pool2 = *((unsigned __int8 *)v7 + 8);
    while ( 1 )
    {
      if ( v2 >= v7[2] )
      {
        *a2 = Pool2;
        goto LABEL_9;
      }
      if ( *v11 != 3 )
        break;
      v6 = AcpiParseCore(
             (unsigned int)&v16,
             8,
             (int)v11 + 4,
             (unsigned __int16)v11[1],
             (__int64)&Pool2[12 * v2 + 2],
             48,
             (__int64)"XPSS",
             0);
      if ( v6 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v13) = v2;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x20u,
            (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
            v13);
        }
        goto LABEL_6;
      }
      v12 = (unsigned __int16)v11[1];
      if ( (unsigned __int16)v12 < 4u )
        v12 = 4LL;
      v11 = (_WORD *)((char *)v11 + v12 + 4);
      ++v2;
    }
    v6 = -1072431096;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v2;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x1Fu,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
        v13);
    }
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_6:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  v7 = P;
LABEL_9:
  if ( v7 )
    ExFreePoolWithTag(v7, (ULONG)1919119952);
  return (unsigned int)v6;
}
