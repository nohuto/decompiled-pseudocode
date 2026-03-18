/*
 * XREFs of ExpPlRunOnceInit @ 0x140608A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140736580 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736620 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF430 (RtlAddAccessAllowedAce.c)
 */

_BOOL8 __fastcall ExpPlRunOnceInit(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  NTSTATUS Acl; // eax

  Acl = RtlCreateAcl(&Dacl, 0x59u, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce(&Dacl, 2u, 1u, SeWorldSid);
    if ( Acl >= 0 )
    {
      Acl = RtlCreateSecurityDescriptor(&unk_140CF8110, 1u);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(&unk_140CF8110, 1u, &Dacl, 0);
        if ( Acl >= 0 )
          Acl = 0;
      }
    }
  }
  return Acl >= 0;
}
