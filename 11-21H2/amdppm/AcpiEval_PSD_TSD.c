/*
 * XREFs of AcpiEval_PSD_TSD @ 0x1C0026FD4
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C002D180 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002D3F8 (InitAcpiThrottleDomain.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_s @ 0x1C000514C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sd @ 0x1C00067B0 (WPP_RECORDER_SF_sd.c)
 *     AcpiEvaluateMethod @ 0x1C0027F18 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0028560 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_PSD_TSD(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // r15d
  unsigned int v4; // r12d
  unsigned int v6; // eax
  _DWORD *Pool2; // r14
  int v8; // ebx
  _WORD *v9; // rdi
  int v10; // eax
  _WORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-A9h]
  char v17[8]; // [rsp+40h] [rbp-89h] BYREF
  int v18; // [rsp+48h] [rbp-81h] BYREF
  PVOID P; // [rsp+50h] [rbp-79h] BYREF
  __int64 v20; // [rsp+58h] [rbp-71h]
  char v21; // [rsp+60h] [rbp-69h] BYREF
  int v22; // [rsp+62h] [rbp-67h]
  const char *v23; // [rsp+68h] [rbp-61h]
  __int64 (__fastcall *v24)(); // [rsp+70h] [rbp-59h]
  char v25; // [rsp+78h] [rbp-51h]
  int v26; // [rsp+7Ah] [rbp-4Fh]
  const char *v27; // [rsp+80h] [rbp-49h]
  __int64 (__fastcall *v28)(); // [rsp+88h] [rbp-41h]
  char v29; // [rsp+90h] [rbp-39h]
  int v30; // [rsp+92h] [rbp-37h]
  const char *v31; // [rsp+98h] [rbp-31h]
  __int64 (__fastcall *v32)(); // [rsp+A0h] [rbp-29h]
  char v33; // [rsp+A8h] [rbp-21h]
  int v34; // [rsp+AAh] [rbp-1Fh]
  const char *v35; // [rsp+B0h] [rbp-19h]
  __int64 (__fastcall *v36)(); // [rsp+B8h] [rbp-11h]
  char v37; // [rsp+C0h] [rbp-9h]
  int v38; // [rsp+C2h] [rbp-7h]
  const char *v39; // [rsp+C8h] [rbp-1h]
  __int64 (__fastcall *v40)(); // [rsp+D0h] [rbp+7h]
  int v41; // [rsp+E0h] [rbp+17h] BYREF
  char v42; // [rsp+E4h] [rbp+1Bh]

  v3 = 0;
  v20 = a1;
  *(_DWORD *)v17 = a2;
  v23 = "NumberOfEntries";
  v4 = 512;
  v18 = 0;
  v27 = "Revision";
  v21 = 0;
  v31 = "DomainNumber";
  v22 = 0;
  v35 = "CoordinationType";
  v25 = 1;
  v24 = AcpiParseULong;
  v39 = "MemberCount";
  v6 = 512;
  v26 = 0x40000;
  v28 = AcpiParseULong;
  if ( a2 != 1146310751 )
    v6 = 0x2000;
  v29 = 2;
  v30 = 0x80000;
  Pool2 = 0LL;
  v32 = AcpiParseULong;
  v33 = 3;
  v34 = 786432;
  v36 = AcpiParseULong;
  v37 = 4;
  v38 = 0x100000;
  v40 = AcpiParseULong;
  v41 = a2;
  v42 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), v6);
  v8 = AcpiEvaluateMethod(a1, *(_DWORD *)v17, 0, (unsigned int)&P, (__int64)&v18);
  if ( v8 >= 0 )
  {
    if ( v18 )
    {
      v9 = P;
      v10 = *((_DWORD *)P + 2);
      if ( v10 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(20 * v10 + 4), 1919119952LL);
        if ( Pool2 )
        {
          v12 = v9 + 6;
          *Pool2 = *((unsigned __int8 *)v9 + 8);
          while ( 1 )
          {
            if ( v12 >= (_WORD *)((char *)v9 + *((unsigned int *)v9 + 1)) )
            {
              *a3 = Pool2;
              goto LABEL_17;
            }
            if ( *v12 != 3 )
            {
              v8 = -1072431096;
              goto LABEL_12;
            }
            v8 = AcpiParseCore(
                   (unsigned int)&v21,
                   5,
                   (int)v12 + 4,
                   (unsigned __int16)v12[1],
                   (__int64)&Pool2[4 * v3 + 1 + v3],
                   20,
                   (__int64)&v41,
                   0);
            if ( v8 < 0 )
              break;
            v15 = (unsigned __int16)v12[1];
            if ( (unsigned __int16)v15 < 4u )
              v15 = 4LL;
            v12 = (_WORD *)((char *)v12 + v15 + 4);
            ++v3;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, v13, v14, 0x16u, v16, (const char *)&v41);
        }
        else
        {
          v8 = -1073741670;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x15u,
            (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
            v17);
        v8 = -1073741275;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x14u,
          (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
          v17);
      v8 = -1073741275;
    }
  }
LABEL_12:
  if ( *(_DWORD *)v17 != 1146310751 )
    v4 = 0x2000;
  _InterlockedOr((volatile signed __int32 *)(v20 + 1112), v4);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)0);
  v9 = P;
LABEL_17:
  if ( v9 )
    ExFreePoolWithTag(v9, (ULONG)0);
  return (unsigned int)v8;
}
