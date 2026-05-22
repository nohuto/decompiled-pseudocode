/*
 * XREFs of ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003588C
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180035300 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x18003B494 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18003C0B4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x18004FE08 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x18005146C (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800E21B8 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x180183164 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1801D3654 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

int __fastcall InputSecurityDescriptor::QueryDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  int TransientObjectSecurityDescriptor; // eax
  const char *v5; // r9
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_BYTE *)(a1 + 8) = 1;
  TransientObjectSecurityDescriptor = QueryTransientObjectSecurityDescriptor(8LL, a3, a1);
  if ( TransientObjectSecurityDescriptor == -1073741772 )
  {
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-26"
            "16377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
           1u,
           (PSECURITY_DESCRIPTOR *)a1,
           0LL) )
    {
      *(_BYTE *)(a1 + 8) = 0;
      return 0;
    }
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x46,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputsecuritydescriptor\\lib\\inputsecur"
                           "itydescriptor.cpp",
             v5);
  }
  else
  {
    if ( TransientObjectSecurityDescriptor >= 0 )
      return 0;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x4C,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputsecuritydescriptor\\lib\\inputsecur"
                           "itydescriptor.cpp",
             (const char *)(unsigned int)TransientObjectSecurityDescriptor,
             v7);
  }
}
