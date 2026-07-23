/*
 * XREFs of ObReleaseObjectSecurityEx @ 0x1406C30E0
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     MiAllowImageMap @ 0x1406AF6D4 (MiAllowImageMap.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406C0AEC (ObpInsertOrLocateNamedObject.c)
 *     ObpCheckObjectReference @ 0x1406C2F9C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406C4F40 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1407B6540 (ObCheckObjectAccess.c)
 *     PopBootStatAccessCheck @ 0x1407EBE24 (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x14097B918 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1409B229C (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409EC540 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ObpDereferenceSecurityDescriptorForObject @ 0x1406C310C (ObpDereferenceSecurityDescriptorForObject.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ObReleaseObjectSecurityEx(void *a1, char a2, __int64 a3)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a1, 0);
    else
      ObpDereferenceSecurityDescriptorForObject(a1, a3 - 48);
  }
}
