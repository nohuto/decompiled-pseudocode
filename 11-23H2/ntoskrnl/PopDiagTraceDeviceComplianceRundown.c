/*
 * XREFs of PopDiagTraceDeviceComplianceRundown @ 0x14098E528
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140862C20 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void PopDiagTraceDeviceComplianceRundown()
{
  __int64 v0; // rax
  int v1; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v3; // [rsp+48h] [rbp-20h]
  int v4; // [rsp+50h] [rbp-18h]
  int v5; // [rsp+54h] [rbp-14h]

  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN) )
  {
    v1 = 0;
    v0 = 0LL;
    do
    {
      UserData.Reserved = 0;
      v5 = 0;
      UserData.Ptr = (ULONGLONG)&v1;
      UserData.Size = 4;
      v4 = 4;
      v3 = &PopCsDeviceCompliance[v0];
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_RUNDOWN, 0LL, 2u, &UserData);
      v0 = (unsigned int)(v1 + 1);
      v1 = v0;
    }
    while ( (unsigned int)v0 < 5 );
  }
}
