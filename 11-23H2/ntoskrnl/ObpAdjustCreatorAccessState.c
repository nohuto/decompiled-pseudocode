/*
 * XREFs of ObpAdjustCreatorAccessState @ 0x1406C2B38
 * Callers:
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     ObpGrantAccess @ 0x1407B64C4 (ObpGrantAccess.c)
 * Callees:
 *     SeComputeCreatorDeniedRights @ 0x14022F430 (SeComputeCreatorDeniedRights.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ObpReferenceSecurityDescriptor @ 0x1406C2C34 (ObpReferenceSecurityDescriptor.c)
 *     ObpDereferenceSecurityDescriptorForObject @ 0x1406C310C (ObpDereferenceSecurityDescriptorForObject.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1406C384C (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x14072F4B0 (SePrivilegeCheck.c)
 *     SeAppendPrivileges @ 0x1407B66C0 (SeAppendPrivileges.c)
 */

__int64 __fastcall ObpAdjustCreatorAccessState(PACCESS_STATE AccessState, KPROCESSOR_MODE a2, _DWORD *a3, __int64 a4)
{
  int RemainingDesiredAccess; // eax
  __int64 v8; // rdi
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+20h] [rbp-38h] BYREF

  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  if ( (RemainingDesiredAccess & 0x2000000) != 0 )
  {
    RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
    AccessState->RemainingDesiredAccess = RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0xF0000000) != 0 )
  {
    if ( RemainingDesiredAccess < 0 )
      RemainingDesiredAccess |= a3[19];
    if ( (RemainingDesiredAccess & 0x40000000) != 0 )
      RemainingDesiredAccess |= a3[20];
    if ( (RemainingDesiredAccess & 0x20000000) != 0 )
      RemainingDesiredAccess |= a3[21];
    if ( (RemainingDesiredAccess & 0x10000000) != 0 )
      RemainingDesiredAccess |= a3[22];
    RemainingDesiredAccess &= 0xFFFFFFFu;
    AccessState->RemainingDesiredAccess = RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0x1000000) != 0 )
  {
    RequiredPrivileges.Privilege[0].Attributes = 0;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
    if ( !SePrivilegeCheck(&RequiredPrivileges, &AccessState->SubjectSecurityContext, a2) )
    {
      SePrivilegedServiceAuditAlarm(0LL, &AccessState->SubjectSecurityContext, &RequiredPrivileges, 0LL);
      return 3221225569LL;
    }
    AccessState->RemainingDesiredAccess &= ~0x1000000u;
    AccessState->PreviouslyGrantedAccess |= 0x1000000u;
    SeAppendPrivileges(AccessState, &RequiredPrivileges);
  }
  AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
  AccessState->RemainingDesiredAccess = 0;
  AccessState->PreviouslyGrantedAccess &= a3[23] | 0x1000000;
  v8 = ObpReferenceSecurityDescriptor(a4 - 48);
  AccessState->PreviouslyGrantedAccess &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                           &AccessState->SubjectSecurityContext,
                                                           (__int64)AccessState,
                                                           AccessState->PreviouslyGrantedAccess,
                                                           v8);
  if ( v8 )
    ObpDereferenceSecurityDescriptorForObject(v8, a4 - 48);
  return 0LL;
}
