/*
 * XREFs of AcpiEval_PSS @ 0x1C002731C
 * Callers:
 *     InitAcpiPerfStates @ 0x1C003505C (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_sD @ 0x1C0006470 (WPP_RECORDER_SF_sD.c)
 *     AcpiEvaluateMethod @ 0x1C0027F18 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0028560 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_PSS(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  _DWORD *Pool2; // r15
  int v6; // ebx
  _DWORD *v7; // rdi
  unsigned __int16 v9; // r9
  int v10; // eax
  _WORD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // [rsp+28h] [rbp-A1h]
  __int64 v14; // [rsp+30h] [rbp-99h]
  int v15; // [rsp+40h] [rbp-89h] BYREF
  int v16; // [rsp+44h] [rbp-85h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  char v18; // [rsp+50h] [rbp-79h] BYREF
  int v19; // [rsp+52h] [rbp-77h]
  const char *v20; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall *v21)(); // [rsp+60h] [rbp-69h]
  char v22; // [rsp+68h] [rbp-61h]
  int v23; // [rsp+6Ah] [rbp-5Fh]
  const char *v24; // [rsp+70h] [rbp-59h]
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp-51h]
  char v26; // [rsp+80h] [rbp-49h]
  int v27; // [rsp+82h] [rbp-47h]
  const char *v28; // [rsp+88h] [rbp-41h]
  __int64 (__fastcall *v29)(); // [rsp+90h] [rbp-39h]
  char v30; // [rsp+98h] [rbp-31h]
  int v31; // [rsp+9Ah] [rbp-2Fh]
  const char *v32; // [rsp+A0h] [rbp-29h]
  __int64 (__fastcall *v33)(); // [rsp+A8h] [rbp-21h]
  char v34; // [rsp+B0h] [rbp-19h]
  int v35; // [rsp+B2h] [rbp-17h]
  const char *v36; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall *v37)(); // [rsp+C0h] [rbp-9h]
  char v38; // [rsp+C8h] [rbp-1h]
  int v39; // [rsp+CAh] [rbp+1h]
  const char *v40; // [rsp+D0h] [rbp+7h]
  __int64 (__fastcall *v41)(); // [rsp+D8h] [rbp+Fh]

  v2 = 0;
  v23 = 0x40000;
  v15 = 0;
  v20 = "CoreFrequency";
  v18 = 0;
  v24 = "Power";
  v19 = 0;
  v28 = "Latency";
  v22 = 1;
  v30 = 3;
  v26 = 2;
  v21 = AcpiParseULong;
  v32 = "BmLatency";
  Pool2 = 0LL;
  v25 = AcpiParseULong;
  v36 = "Control";
  v40 = "Status";
  v27 = 0x80000;
  v29 = AcpiParseULong;
  v31 = 786432;
  v33 = AcpiParseULong;
  v34 = 4;
  v35 = 0x100000;
  v37 = AcpiParseULong;
  v38 = 5;
  v39 = 1572864;
  v41 = AcpiParseULong;
  P = 0LL;
  v16 = 1397968991;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x40u);
  v6 = AcpiEvaluateMethod(a1, v16, 0, (unsigned int)&P, (__int64)&v15);
  if ( v6 < 0 )
    goto LABEL_6;
  v7 = P;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x30000000;
  if ( !v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x17u,
        (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
    v6 = -1073741823;
    goto LABEL_6;
  }
  if ( !v15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_16:
      v6 = -1073741275;
      goto LABEL_6;
    }
    v9 = 24;
LABEL_15:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v9,
      (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
    goto LABEL_16;
  }
  v10 = v7[2];
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v9 = 25;
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
             (unsigned int)&v18,
             6,
             (int)v11 + 4,
             (unsigned __int16)v11[1],
             (__int64)&Pool2[12 * v2 + 2],
             48,
             (__int64)"_PSS",
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
            0x1Bu,
            (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = v2;
      WPP_RECORDER_SF_sD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x1Au,
        (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
        (const char *)&v16,
        v14);
    }
    v6 = -1072431096;
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_6:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  v7 = P;
LABEL_9:
  if ( v7 )
    ExFreePoolWithTag(v7, (ULONG)1919119952);
  return (unsigned int)v6;
}
