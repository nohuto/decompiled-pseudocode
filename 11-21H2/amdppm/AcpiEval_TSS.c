/*
 * XREFs of AcpiEval_TSS @ 0x1C0027824
 * Callers:
 *     InitAcpi3ThrottleStates @ 0x1C0034F18 (InitAcpi3ThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     AcpiEvaluateMethod @ 0x1C0027F18 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0028560 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_TSS(__int64 a1, _QWORD *a2)
{
  int v2; // r12d
  _DWORD *Pool2; // rsi
  int v6; // ebx
  unsigned __int16 v7; // r9
  unsigned int *v8; // rdi
  int v10; // eax
  _WORD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // [rsp+28h] [rbp-91h]
  int v14; // [rsp+40h] [rbp-79h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  char v16; // [rsp+50h] [rbp-69h] BYREF
  int v17; // [rsp+52h] [rbp-67h]
  const char *v18; // [rsp+58h] [rbp-61h]
  __int64 (__fastcall *v19)(); // [rsp+60h] [rbp-59h]
  char v20; // [rsp+68h] [rbp-51h]
  int v21; // [rsp+6Ah] [rbp-4Fh]
  const char *v22; // [rsp+70h] [rbp-49h]
  __int64 (__fastcall *v23)(); // [rsp+78h] [rbp-41h]
  char v24; // [rsp+80h] [rbp-39h]
  int v25; // [rsp+82h] [rbp-37h]
  const char *v26; // [rsp+88h] [rbp-31h]
  __int64 (__fastcall *v27)(); // [rsp+90h] [rbp-29h]
  char v28; // [rsp+98h] [rbp-21h]
  int v29; // [rsp+9Ah] [rbp-1Fh]
  const char *v30; // [rsp+A0h] [rbp-19h]
  __int64 (__fastcall *v31)(); // [rsp+A8h] [rbp-11h]
  char v32; // [rsp+B0h] [rbp-9h]
  int v33; // [rsp+B2h] [rbp-7h]
  const char *v34; // [rsp+B8h] [rbp-1h]
  __int64 (__fastcall *v35)(); // [rsp+C0h] [rbp+7h]

  v2 = 0;
  v21 = 0x40000;
  v14 = 0;
  v18 = "Percentage";
  v16 = 0;
  v22 = "Power";
  v17 = 0;
  v26 = "Latency";
  v20 = 1;
  v30 = "Control";
  v24 = 2;
  v19 = AcpiParseULong;
  v34 = "Status";
  Pool2 = 0LL;
  v23 = AcpiParseULong;
  v25 = 0x80000;
  v27 = AcpiParseULong;
  v28 = 3;
  v29 = 786432;
  v31 = AcpiParseULong;
  v32 = 4;
  v33 = 0x100000;
  v35 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x800u);
  v6 = AcpiEvaluateMethod(a1, 1397970015, 0, (unsigned int)&P, (__int64)&v14);
  if ( v6 < 0 )
    goto LABEL_7;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x3000000;
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_6:
      v6 = -1073741275;
      goto LABEL_7;
    }
    v7 = 36;
LABEL_5:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v7,
      (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
    goto LABEL_6;
  }
  v8 = (unsigned int *)P;
  v10 = *((_DWORD *)P + 2);
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_6;
    v7 = 37;
    goto LABEL_5;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(20 * v10 + 4), 1919119952LL);
  if ( Pool2 )
  {
    v11 = v8 + 3;
    *Pool2 = v8[2];
    while ( 1 )
    {
      if ( v11 >= (_WORD *)((char *)v8 + v8[1]) )
      {
        *a2 = Pool2;
        Pool2 = 0LL;
        goto LABEL_8;
      }
      if ( *v11 != 3 )
      {
        v6 = -1072431096;
        goto LABEL_7;
      }
      v6 = AcpiParseCore(
             (unsigned int)&v16,
             5,
             (int)v11 + 4,
             (unsigned __int16)v11[1],
             (__int64)&Pool2[4 * v2 + 1 + v2],
             20,
             (__int64)"_TSS",
             0);
      if ( v6 < 0 )
        break;
      v12 = (unsigned __int16)v11[1];
      if ( (unsigned __int16)v12 < 4u )
        v12 = 4LL;
      v11 = (_WORD *)((char *)v11 + v12 + 4);
      ++v2;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v2;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x26u,
        (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
        v13);
    }
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_7:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x800u);
  v8 = (unsigned int *)P;
LABEL_8:
  if ( v8 )
    ExFreePoolWithTag(v8, (ULONG)0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)0);
  return (unsigned int)v6;
}
