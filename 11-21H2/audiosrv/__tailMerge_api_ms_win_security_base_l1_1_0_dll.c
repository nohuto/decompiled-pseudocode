/*
 * XREFs of __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x18005FDD5
 * Callers:
 *     __imp_load_GetTokenInformation @ 0x18005FDC9 (__imp_load_GetTokenInformation.c)
 *     __imp_load_MakeAbsoluteSD @ 0x180060271 (__imp_load_MakeAbsoluteSD.c)
 *     __imp_load_RevertToSelf @ 0x180060725 (__imp_load_RevertToSelf.c)
 *     __imp_load_CheckTokenMembership @ 0x180060791 (__imp_load_CheckTokenMembership.c)
 *     __imp_load_InitializeSecurityDescriptor @ 0x1800607B5 (__imp_load_InitializeSecurityDescriptor.c)
 *     __imp_load_AllocateAndInitializeSid @ 0x1800607C7 (__imp_load_AllocateAndInitializeSid.c)
 *     __imp_load_GetLengthSid @ 0x1800607D9 (__imp_load_GetLengthSid.c)
 *     __imp_load_InitializeAcl @ 0x1800607EB (__imp_load_InitializeAcl.c)
 *     __imp_load_AddAccessAllowedAce @ 0x1800607FD (__imp_load_AddAccessAllowedAce.c)
 *     __imp_load_SetSecurityDescriptorDacl @ 0x18006080F (__imp_load_SetSecurityDescriptorDacl.c)
 *     __imp_load_GetSecurityDescriptorLength @ 0x180060821 (__imp_load_GetSecurityDescriptorLength.c)
 *     __imp_load_MakeSelfRelativeSD @ 0x180060833 (__imp_load_MakeSelfRelativeSD.c)
 *     __imp_load_FreeSid @ 0x180060845 (__imp_load_FreeSid.c)
 *     __imp_load_GetAce @ 0x180060857 (__imp_load_GetAce.c)
 *     __imp_load_GetKernelObjectSecurity @ 0x180060869 (__imp_load_GetKernelObjectSecurity.c)
 *     __imp_load_GetSecurityDescriptorDacl @ 0x18006087B (__imp_load_GetSecurityDescriptorDacl.c)
 *     __imp_load_GetSidLengthRequired @ 0x18006089F (__imp_load_GetSidLengthRequired.c)
 *     __imp_load_InitializeSid @ 0x1800608B1 (__imp_load_InitializeSid.c)
 *     __imp_load_GetSidSubAuthority @ 0x1800608C3 (__imp_load_GetSidSubAuthority.c)
 *     __imp_load_CopySid @ 0x1800608D5 (__imp_load_CopySid.c)
 *     __imp_load_IsValidSid @ 0x1800608E7 (__imp_load_IsValidSid.c)
 *     __imp_load_AddAce @ 0x1800608F9 (__imp_load_AddAce.c)
 *     __imp_load_GetAclInformation @ 0x18006090B (__imp_load_GetAclInformation.c)
 *     __imp_load_GetSecurityDescriptorOwner @ 0x18006091D (__imp_load_GetSecurityDescriptorOwner.c)
 *     __imp_load_GetSecurityDescriptorGroup @ 0x18006092F (__imp_load_GetSecurityDescriptorGroup.c)
 *     __imp_load_GetSecurityDescriptorSacl @ 0x180060941 (__imp_load_GetSecurityDescriptorSacl.c)
 *     __imp_load_GetSecurityDescriptorControl @ 0x180060953 (__imp_load_GetSecurityDescriptorControl.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800428C0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_security_base_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_base_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
