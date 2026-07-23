/*
 * XREFs of sub_1407227B0 @ 0x1407227B0
 * Callers:
 *     sub_140669830 @ 0x140669830 (sub_140669830.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 * Callees:
 *     sub_1402AC350 @ 0x1402AC350 (sub_1402AC350.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeAppendPrivileges @ 0x1406A8AD0 (SeAppendPrivileges.c)
 *     sub_1407228BC @ 0x1407228BC (sub_1407228BC.c)
 *     sub_140722910 @ 0x140722910 (sub_140722910.c)
 *     sub_140726520 @ 0x140726520 (sub_140726520.c)
 *     RtlMapGenericMask @ 0x140728CB0 (RtlMapGenericMask.c)
 *     SePrivilegeCheck @ 0x14072B5E0 (SePrivilegeCheck.c)
 */

__int64 __fastcall sub_1407227B0(PACCESS_STATE AccessState, KPROCESSOR_MODE a2, __int64 a3, __int64 a4)
{
  ACCESS_MASK *p_RemainingDesiredAccess; // rdi
  ACCESS_MASK RemainingDesiredAccess; // eax
  __int64 v10; // rdi
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+20h] [rbp-48h] BYREF

  p_RemainingDesiredAccess = &AccessState->RemainingDesiredAccess;
  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  if ( (RemainingDesiredAccess & 0x2000000) != 0 )
  {
    RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
    *p_RemainingDesiredAccess = RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(&AccessState->RemainingDesiredAccess, (PGENERIC_MAPPING)(a3 + 76));
    RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0x1000000) != 0 )
  {
    RequiredPrivileges.Privilege[0].Attributes = 0;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid = stru_140D3CA98;
    if ( !SePrivilegeCheck(&RequiredPrivileges, &AccessState->SubjectSecurityContext, a2) )
    {
      sub_140726520(0LL, &AccessState->SubjectSecurityContext, &RequiredPrivileges, 0LL);
      return 3221225569LL;
    }
    *p_RemainingDesiredAccess &= ~0x1000000u;
    AccessState->PreviouslyGrantedAccess |= 0x1000000u;
    SeAppendPrivileges(AccessState, &RequiredPrivileges);
    RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  }
  AccessState->PreviouslyGrantedAccess |= RemainingDesiredAccess;
  *p_RemainingDesiredAccess = 0;
  AccessState->PreviouslyGrantedAccess &= *(_DWORD *)(a3 + 92) | 0x1000000;
  v10 = sub_140722910(a4 - 48);
  AccessState->PreviouslyGrantedAccess &= ~(unsigned int)sub_1402AC350(
                                                           &AccessState->SubjectSecurityContext,
                                                           (__int64)AccessState,
                                                           AccessState->PreviouslyGrantedAccess,
                                                           v10);
  if ( v10 )
    sub_1407228BC(v10, a4 - 48);
  return 0LL;
}
