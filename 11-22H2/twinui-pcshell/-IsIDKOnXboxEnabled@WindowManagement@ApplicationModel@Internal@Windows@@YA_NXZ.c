/*
 * XREFs of ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1800D2F80
 * Callers:
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1800D2ED8 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180170094 (-IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180170144 (-IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 * Callees:
 *     ?IsIDKOnSKUEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NPEBG@Z @ 0x1801BB03C (-IsIDKOnSKUEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NPEBG@Z.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 */

char __fastcall Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnXboxEnabled(
        Windows::Internal::ApplicationModel::WindowManagement *this)
{
  const unsigned __int16 *v2; // rdx

  if ( __TSS0__1__IsIDKOnXboxEnabled_WindowManagement_ApplicationModel_Internal_Windows__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL) )
  {
    Init_thread_header(&__TSS0__1__IsIDKOnXboxEnabled_WindowManagement_ApplicationModel_Internal_Windows__YA_NXZ_4HA);
    if ( __TSS0__1__IsIDKOnXboxEnabled_WindowManagement_ApplicationModel_Internal_Windows__YA_NXZ_4HA == -1 )
    {
      `Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnXboxEnabled'::`2'::result = Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnSKUEnabled(
                                                                                                   L"IDKOnXbox",
                                                                                                   v2);
      Init_thread_footer(&__TSS0__1__IsIDKOnXboxEnabled_WindowManagement_ApplicationModel_Internal_Windows__YA_NXZ_4HA);
    }
  }
  return `Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnXboxEnabled'::`2'::result;
}
