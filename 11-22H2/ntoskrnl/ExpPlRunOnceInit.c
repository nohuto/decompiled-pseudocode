/*
 * XREFs of ExpPlRunOnceInit @ 0x140608A70
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140736A80 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736B20 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF9B0 (RtlAddAccessAllowedAce.c)
 */

_BOOL8 __fastcall ExpPlRunOnceInit(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  NTSTATUS Acl; // eax

  Acl = RtlCreateAcl(&Dacl, 0x59u, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce(&Dacl, 2u, 1u, SeWorldSid);
    if ( Acl >= 0 )
    {
      Acl = RtlCreateSecurityDescriptor(&unk_140CF81D0, 1u);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(&unk_140CF81D0, 1u, &Dacl, 0);
        if ( Acl >= 0 )
          Acl = 0;
      }
    }
  }
  return Acl >= 0;
}
