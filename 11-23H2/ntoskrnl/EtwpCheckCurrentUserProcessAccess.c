/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x1409EC2B0
 * Callers:
 *     EtwpNotifyGuid @ 0x14077F9E8 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x140780EA8 (EtwpIsRegEntryAllowed.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EC5E4 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1406BDBDC (EtwpAccessCheck.c)
 *     ObReleaseObjectSecurityEx @ 0x1406C30B0 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x140736220 (ObpGetObjectSecurity.c)
 */

__int64 __fastcall EtwpCheckCurrentUserProcessAccess(__int64 a1)
{
  unsigned int v2; // ebx
  char v4; // [rsp+38h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp+18h] BYREF

  SecurityDescriptor = 0LL;
  v4 = 0;
  ObpGetObjectSecurity(a1, &SecurityDescriptor, &v4, 0);
  v2 = EtwpAccessCheck(SecurityDescriptor, 0x1FFFFFu, 0LL);
  ObReleaseObjectSecurityEx(SecurityDescriptor, v4, a1);
  return v2;
}
