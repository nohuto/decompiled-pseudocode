/*
 * XREFs of sub_1409188E8 @ 0x1409188E8
 * Callers:
 *     sub_1406B656C @ 0x1406B656C (sub_1406B656C.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 * Callees:
 *     SeSetAuditParameter @ 0x140235C20 (SeSetAuditParameter.c)
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1402EC620 (SeReportSecurityEventWithSubCategory.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066A520 @ 0x14066A520 (sub_14066A520.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077CB98 @ 0x14077CB98 (sub_14077CB98.c)
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 *     sub_140916454 @ 0x140916454 (sub_140916454.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409188E8(__int64 a1, __int64 a2)
{
  UNICODE_STRING *p_UnicodeString; // rsi
  UNICODE_STRING *v5; // rdi
  int v6; // ebx
  __int64 v7; // r8
  ULONG v8; // r12d
  __int64 v9; // r8
  ULONG v10; // r8d
  ULONG v11; // r14d
  __int64 CurrentThreadProcess; // rax
  ULONG v13; // r8d
  NTSTATUS v14; // eax
  PVOID v16; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  __int64 Data; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v20; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _SE_ADT_PARAMETER_ARRAY AuditParameters; // [rsp+80h] [rbp-80h] BYREF

  memset(&AuditParameters, 0, sizeof(AuditParameters));
  P = 0LL;
  DestinationString = 0LL;
  p_UnicodeString = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Security");
  AuditParameters.AuditId = 5039;
  AuditParameters.Type = 8;
  AuditParameters.CategoryId = 3;
  AuditParameters.ParameterCount = 0;
  Data = *(_QWORD *)(sub_14066A520((__int64 *)a2, 0LL) + 24);
  v6 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeLogonId, 0, &Data);
  v8 = ++AuditParameters.ParameterCount;
  if ( v6 < 0 )
    goto LABEL_18;
  if ( byte_140C097BD && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
  {
    v16 = 0LL;
    sub_1407C0690(a1, &v16, v7);
    v5 = (UNICODE_STRING *)v16;
    if ( !v16 )
    {
LABEL_5:
      v6 = -1073741670;
      goto LABEL_18;
    }
    v6 = sub_140916454(a1, &UnicodeString, v9);
    if ( v6 >= 0 )
    {
      p_UnicodeString = &UnicodeString;
LABEL_11:
      v6 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v8, p_UnicodeString);
      v10 = ++AuditParameters.ParameterCount;
      if ( v6 >= 0 )
      {
        v6 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v10, v5);
        v11 = ++AuditParameters.ParameterCount;
        if ( v6 >= 0 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          v6 = sub_1407B66E0(CurrentThreadProcess, &P);
          if ( v6 >= 0 )
          {
            v6 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypePtr, v11, *(PVOID *)(a2 + 24));
            v13 = ++AuditParameters.ParameterCount;
            if ( v6 >= 0 )
            {
              v14 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeFileSpec, v13, P);
              ++AuditParameters.ParameterCount;
              v6 = v14;
              if ( v14 >= 0 )
              {
                v6 = SeReportSecurityEventWithSubCategory(0, &DestinationString, 0LL, &AuditParameters, 0x75u);
                if ( v6 >= 0 )
                  v6 = 0;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v16 = 0LL;
    sub_1407C0690(a1, &v16, v7);
    p_UnicodeString = (UNICODE_STRING *)v16;
    if ( !v16 )
      goto LABEL_5;
    RtlInitUnicodeString(&v20, 0LL);
    v6 = sub_14077CB98(a1, (__m128i *)&v20, a2, &UnicodeString);
    if ( v6 >= 0 )
    {
      v5 = &UnicodeString;
      goto LABEL_11;
    }
  }
LABEL_18:
  if ( P )
    ExFreePoolWithTag(P, 0x61506553u);
  if ( p_UnicodeString == &UnicodeString )
  {
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    sub_140346D64(p_UnicodeString, 0x624E4D43u);
  }
  if ( v5 == &UnicodeString )
  {
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( v5 )
  {
    sub_140346D64(v5, 0x624E4D43u);
  }
  return (unsigned int)v6;
}
