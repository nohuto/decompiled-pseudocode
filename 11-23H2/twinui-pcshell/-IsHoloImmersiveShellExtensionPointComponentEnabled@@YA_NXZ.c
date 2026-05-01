/*
 * XREFs of ?IsHoloImmersiveShellExtensionPointComponentEnabled@@YA_NXZ @ 0x18014E1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z @ 0x1801511D4 (-IsComponentEnabledInProfile@@YA_NAEBU_GUID@@@Z.c)
 *     _lambda_fd6a6d19a360caf665b386e8926aa4f2_::operator() @ 0x1801512A0 (_lambda_fd6a6d19a360caf665b386e8926aa4f2_--operator().c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
bool IsHoloImmersiveShellExtensionPointComponentEnabled(void)
{
  char v0; // bl

  if ( dword_18098F818 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_18098F818);
    if ( dword_18098F818 == -1 )
    {
      dword_18098D8DC = (unsigned __int8)lambda_fd6a6d19a360caf665b386e8926aa4f2_::operator()();
      Init_thread_footer(&dword_18098F818);
    }
  }
  v0 = 0;
  if ( dword_18098D8DC )
    return IsComponentEnabledInProfile((GUID *)&rguid);
  return v0;
}
