/*
 * XREFs of ?IsSearchBoxExtensionAvailable@StartSearchSharedUtils@@YA_NXZ @ 0x180035C9C
 * Callers:
 *     ?IsStartSearchAvailable@TaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x180035C90 (-IsStartSearchAvailable@TaskbarSearchAppPositionerConfig@@UEAA_NXZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 *     ??R_lambda_376cdae45175a47ad8184ea3fe0886a7_@@QEBA@XZ @ 0x1801A4828 (--R_lambda_376cdae45175a47ad8184ea3fe0886a7_@@QEBA@XZ.c)
 */

char __fastcall StartSearchSharedUtils::IsSearchBoxExtensionAvailable(StartSearchSharedUtils *this)
{
  if ( __TSS0__1__IsSearchBoxExtensionAvailable_StartSearchSharedUtils__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                                 + (unsigned int)tls_index)
                                                                                               + 16LL) )
  {
    Init_thread_header(&__TSS0__1__IsSearchBoxExtensionAvailable_StartSearchSharedUtils__YA_NXZ_4HA);
    if ( __TSS0__1__IsSearchBoxExtensionAvailable_StartSearchSharedUtils__YA_NXZ_4HA == -1 )
    {
      `StartSearchSharedUtils::IsSearchBoxExtensionAvailable'::`2'::s_isExtensionAvailable = _lambda_376cdae45175a47ad8184ea3fe0886a7_::operator()();
      Init_thread_footer(&__TSS0__1__IsSearchBoxExtensionAvailable_StartSearchSharedUtils__YA_NXZ_4HA);
    }
  }
  return `StartSearchSharedUtils::IsSearchBoxExtensionAvailable'::`2'::s_isExtensionAvailable;
}
