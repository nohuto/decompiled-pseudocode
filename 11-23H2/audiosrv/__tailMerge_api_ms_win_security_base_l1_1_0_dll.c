/*
 * XREFs of __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x180067D4B
 * Callers:
 *     __imp_load_GetSidLengthRequired @ 0x180067D3F (__imp_load_GetSidLengthRequired.c)
 *     __imp_load_InitializeSid @ 0x180067DCA (__imp_load_InitializeSid.c)
 *     __imp_load_GetSidSubAuthority @ 0x180067DDC (__imp_load_GetSidSubAuthority.c)
 *     __imp_load_CopySid @ 0x180067DEE (__imp_load_CopySid.c)
 *     __imp_load_GetLengthSid @ 0x180067E00 (__imp_load_GetLengthSid.c)
 *     __imp_load_IsValidSid @ 0x180067E12 (__imp_load_IsValidSid.c)
 *     __imp_load_InitializeAcl @ 0x180067E24 (__imp_load_InitializeAcl.c)
 *     __imp_load_AddAce @ 0x180067E36 (__imp_load_AddAce.c)
 *     __imp_load_GetAclInformation @ 0x180067E48 (__imp_load_GetAclInformation.c)
 *     __imp_load_GetSecurityDescriptorOwner @ 0x180067E5A (__imp_load_GetSecurityDescriptorOwner.c)
 *     __imp_load_GetSecurityDescriptorGroup @ 0x180067E6C (__imp_load_GetSecurityDescriptorGroup.c)
 *     __imp_load_GetSecurityDescriptorDacl @ 0x180067E7E (__imp_load_GetSecurityDescriptorDacl.c)
 *     __imp_load_SetSecurityDescriptorDacl @ 0x180067E90 (__imp_load_SetSecurityDescriptorDacl.c)
 *     __imp_load_GetSecurityDescriptorSacl @ 0x180067EA2 (__imp_load_GetSecurityDescriptorSacl.c)
 *     __imp_load_MakeSelfRelativeSD @ 0x180067EB4 (__imp_load_MakeSelfRelativeSD.c)
 *     __imp_load_GetSecurityDescriptorLength @ 0x180067EC6 (__imp_load_GetSecurityDescriptorLength.c)
 *     __imp_load_GetSecurityDescriptorControl @ 0x180067ED8 (__imp_load_GetSecurityDescriptorControl.c)
 *     __imp_load_MakeAbsoluteSD @ 0x180067EEA (__imp_load_MakeAbsoluteSD.c)
 *     __imp_load_InitializeSecurityDescriptor @ 0x180067EFC (__imp_load_InitializeSecurityDescriptor.c)
 *     __imp_load_GetTokenInformation @ 0x180068595 (__imp_load_GetTokenInformation.c)
 *     __imp_load_CheckTokenMembership @ 0x180068A56 (__imp_load_CheckTokenMembership.c)
 *     __imp_load_AllocateAndInitializeSid @ 0x180068A7A (__imp_load_AllocateAndInitializeSid.c)
 *     __imp_load_AddAccessAllowedAce @ 0x180068A8C (__imp_load_AddAccessAllowedAce.c)
 *     __imp_load_FreeSid @ 0x180068A9E (__imp_load_FreeSid.c)
 *     __imp_load_GetAce @ 0x180068AB0 (__imp_load_GetAce.c)
 *     __imp_load_GetKernelObjectSecurity @ 0x180068AC2 (__imp_load_GetKernelObjectSecurity.c)
 *     __imp_load_RevertToSelf @ 0x180068AE6 (__imp_load_RevertToSelf.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180054FA0 (__delayLoadHelper2.c)
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
