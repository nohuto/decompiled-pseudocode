/*
 * XREFs of SeReportSecurityEventWithSubCategory @ 0x1402EC620
 * Callers:
 *     SeReportSecurityEvent @ 0x1405F4C40 (SeReportSecurityEvent.c)
 *     sub_1409188E8 @ 0x1409188E8 (sub_1409188E8.c)
 * Callees:
 *     sub_1402EC884 @ 0x1402EC884 (sub_1402EC884.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

NTSTATUS __stdcall SeReportSecurityEventWithSubCategory(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        ULONG AuditSubcategoryId)
{
  unsigned __int8 *v6; // r15
  PUNICODE_STRING v7; // r14
  USHORT Type; // bx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rdi
  _QWORD *v12; // r9
  ULONG AuditId; // edx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  ULONG ParameterCount; // ebx
  int Length; // eax
  _QWORD SubjectContext[6]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  v6 = (unsigned __int8 *)UserSid;
  v7 = SourceName;
  memset(&SubjectContext[1], 0, 32);
  if ( !Flags )
  {
    if ( SourceName )
    {
      if ( SourceName->Buffer )
      {
        if ( SourceName->Length )
        {
          if ( AuditParameters )
          {
            if ( AuditSubcategoryId - 100 <= 0x3A && AuditParameters->ParameterCount <= 0x1C )
            {
              Type = AuditParameters->Type;
              if ( (Type & 0x18) != 0 )
              {
                LOBYTE(SubjectContext[0]) = KeGetCurrentIrql();
                if ( LOBYTE(SubjectContext[0]) < 2u )
                {
                  if ( UserSid )
                  {
                    v11 = (unsigned __int8 *)UserSid;
                  }
                  else
                  {
                    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
                    v10 = SubjectContext[3];
                    Type = AuditParameters->Type;
                    if ( SubjectContext[1] )
                      v10 = SubjectContext[1];
                    v11 = **(unsigned __int8 ***)(v10 + 152);
                  }
                  v12 = &SubjectContext[1];
                  if ( v11 == v6 )
                    v12 = 0LL;
                  LOBYTE(UserSid) = Type == 16;
                  LOBYTE(SourceName) = Type == 8;
                  if ( !(unsigned __int8)sub_140724320(AuditSubcategoryId, SourceName, UserSid, v12) )
                  {
LABEL_19:
                    if ( v11 )
                    {
                      if ( v11 != v6 )
                        SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
                    }
                    return 0;
                  }
                  Type = AuditParameters->Type;
                }
                else
                {
                  LOBYTE(SourceName) = Type == 8;
                  if ( !(unsigned __int8)sub_1402EC884(AuditSubcategoryId, SourceName) )
                    return 0;
                  v11 = v6;
                  if ( !v6 )
                    v11 = (unsigned __int8 *)Group;
                }
                memset(Src, 0, 0x418uLL);
                AuditId = AuditParameters->AuditId;
                LODWORD(Src[0]) = AuditParameters->CategoryId;
                v14 = v11[1];
                HIDWORD(Src[0]) = AuditId;
                LOWORD(Src[2]) = AuditSubcategoryId;
                WORD1(Src[2]) = Type;
                LODWORD(Src[3]) = 4;
                HIDWORD(Src[3]) = 4 * v14 + 8;
                Src[10] = &qword_140001B08;
                Src[6] = v11;
                Src[7] = 0x2000000001LL;
                LODWORD(Src[1]) = 2;
                if ( AuditSubcategoryId == 122 )
                {
                  HIDWORD(Src[2]) |= 6u;
                  Length = v7->Length;
                  LODWORD(Src[11]) = 1;
                  v15 = 3LL;
                  HIDWORD(Src[11]) = Length + 16;
                  Src[14] = v7;
                  LODWORD(Src[1]) = 3;
                }
                else
                {
                  v15 = 2LL;
                  v16 = HIDWORD(Src[2]) | 8;
                  HIDWORD(Src[2]) |= 8u;
                  if ( AuditId < 0x5FF )
                    HIDWORD(Src[2]) = v16 | 2;
                }
                ParameterCount = AuditParameters->ParameterCount;
                memmove(&Src[4 * v15 + 3], AuditParameters->Parameters, 32LL * ParameterCount);
                LODWORD(Src[1]) += ParameterCount;
                sub_1403CD84C(Src);
                if ( LOBYTE(SubjectContext[0]) >= 2u )
                  return 0;
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
  }
  return -1073741811;
}
