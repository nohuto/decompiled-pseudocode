/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x140841F54
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140B60D40 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x14039F6A0 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpInitializeDriveLetters @ 0x1408421F0 (AdtpInitializeDriveLetters.c)
 *     AdtpObjsInitialize @ 0x1408423C8 (AdtpObjsInitialize.c)
 */

__int64 AdtpInitializeAuditingCommon()
{
  __int64 result; // rax
  unsigned int v1; // ebx

  AdtpNullSid = 257;
  AdtpRegisteredWithEtw = 1;
  result = AdtpInitializeDriveLetters();
  if ( (int)result >= 0 )
  {
    result = AdtpObjsInitialize();
    v1 = result;
    if ( (int)result >= 0 )
    {
      AdtpDbInitializePrivilegeObject();
      return v1;
    }
  }
  return result;
}
