/*
 * XREFs of AcpiEval_CSD @ 0x1C0026BC0
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C002DD88 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     AcpiEvaluateMethod @ 0x1C0028B0C (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0029150 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_CSD(__int64 a1, _QWORD *a2)
{
  int v2; // r15d
  _DWORD *Pool2; // r14
  int v6; // ebx
  unsigned __int16 v7; // r9
  _WORD *v8; // rdi
  int v10; // eax
  _WORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // [rsp+28h] [rbp-A1h]
  int v14; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  char v16; // [rsp+50h] [rbp-79h] BYREF
  int v17; // [rsp+52h] [rbp-77h]
  const char *v18; // [rsp+58h] [rbp-71h]
  __int64 (__fastcall *v19)(); // [rsp+60h] [rbp-69h]
  char v20; // [rsp+68h] [rbp-61h]
  int v21; // [rsp+6Ah] [rbp-5Fh]
  const char *v22; // [rsp+70h] [rbp-59h]
  __int64 (__fastcall *v23)(); // [rsp+78h] [rbp-51h]
  char v24; // [rsp+80h] [rbp-49h]
  int v25; // [rsp+82h] [rbp-47h]
  const char *v26; // [rsp+88h] [rbp-41h]
  __int64 (__fastcall *v27)(); // [rsp+90h] [rbp-39h]
  char v28; // [rsp+98h] [rbp-31h]
  int v29; // [rsp+9Ah] [rbp-2Fh]
  const char *v30; // [rsp+A0h] [rbp-29h]
  __int64 (__fastcall *v31)(); // [rsp+A8h] [rbp-21h]
  char v32; // [rsp+B0h] [rbp-19h]
  int v33; // [rsp+B2h] [rbp-17h]
  const char *v34; // [rsp+B8h] [rbp-11h]
  __int64 (__fastcall *v35)(); // [rsp+C0h] [rbp-9h]
  char v36; // [rsp+C8h] [rbp-1h]
  int v37; // [rsp+CAh] [rbp+1h]
  const char *v38; // [rsp+D0h] [rbp+7h]
  __int64 (__fastcall *v39)(); // [rsp+D8h] [rbp+Fh]

  v2 = 0;
  v21 = 0x40000;
  v14 = 0;
  v18 = "NumberOfEntries";
  v16 = 0;
  v22 = "Revision";
  v17 = 0;
  v26 = "DomainNumber";
  v32 = 4;
  v30 = "CoordinationType";
  v20 = 1;
  v34 = "MemberCount";
  v24 = 2;
  v19 = AcpiParseULong;
  v38 = "Index";
  Pool2 = 0LL;
  v23 = AcpiParseULong;
  v25 = 0x80000;
  v27 = AcpiParseULong;
  v28 = 3;
  v29 = 786432;
  v31 = AcpiParseULong;
  v33 = 0x100000;
  v35 = AcpiParseULong;
  v36 = 5;
  v37 = 1310720;
  v39 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x10u);
  v6 = AcpiEvaluateMethod(a1, 1146307423, 0, (unsigned int)&P, (__int64)&v14);
  if ( v6 < 0 )
    goto LABEL_7;
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_6:
      v6 = -1073741275;
      goto LABEL_7;
    }
    v7 = 42;
LABEL_5:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v7,
      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    goto LABEL_6;
  }
  v8 = P;
  v10 = *((_DWORD *)P + 2);
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_6;
    v7 = 43;
    goto LABEL_5;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(24 * v10 + 4), 1919119952LL);
  if ( Pool2 )
  {
    v11 = v8 + 6;
    *Pool2 = *((unsigned __int8 *)v8 + 8);
    while ( 1 )
    {
      if ( v11 >= (_WORD *)((char *)v8 + *((unsigned int *)v8 + 1)) )
      {
        *a2 = Pool2;
        goto LABEL_10;
      }
      if ( *v11 != 3 )
      {
        v6 = -1072431096;
        goto LABEL_7;
      }
      v6 = AcpiParseCore(
             (unsigned int)&v16,
             6,
             (int)v11 + 4,
             (unsigned __int16)v11[1],
             (__int64)&Pool2[6 * v2 + 1],
             24,
             (__int64)"_CSD",
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
        0x2Cu,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
        v13);
    }
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_7:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x10u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)0);
  v8 = P;
LABEL_10:
  if ( v8 )
    ExFreePoolWithTag(v8, (ULONG)0);
  return (unsigned int)v6;
}
