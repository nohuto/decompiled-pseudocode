/*
 * XREFs of ?IsSearchBoxExtensionAvailable@StartSearchSharedUtils@@YA_NXZ @ 0x18005F3DC
 * Callers:
 *     ?IsStartSearchAvailable@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ @ 0x18005F3D0 (-IsStartSearchAvailable@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA_NXZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     ??R_lambda_120b110b9b84ba13734d7b16b46ad979_@@QEBA@XZ @ 0x1801F1C94 (--R_lambda_120b110b9b84ba13734d7b16b46ad979_@@QEBA@XZ.c)
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
      `StartSearchSharedUtils::IsSearchBoxExtensionAvailable'::`2'::s_isExtensionAvailable = _lambda_120b110b9b84ba13734d7b16b46ad979_::operator()();
      Init_thread_footer(&__TSS0__1__IsSearchBoxExtensionAvailable_StartSearchSharedUtils__YA_NXZ_4HA);
    }
  }
  return `StartSearchSharedUtils::IsSearchBoxExtensionAvailable'::`2'::s_isExtensionAvailable;
}
