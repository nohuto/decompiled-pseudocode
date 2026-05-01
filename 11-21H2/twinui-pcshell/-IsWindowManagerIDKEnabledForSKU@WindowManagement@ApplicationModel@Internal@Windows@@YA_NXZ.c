/*
 * XREFs of ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x180161EEC
 * Callers:
 *     ?IsUwpWindowEventDispatcherEnabled@@YA_NXZ @ 0x180161EE0 (-IsUwpWindowEventDispatcherEnabled@@YA_NXZ.c)
 *     ?IsUwpWindowEventDispatcherDisabled@@YA_NXZ @ 0x180180CD0 (-IsUwpWindowEventDispatcherDisabled@@YA_NXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F3484 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wi.c)
 *     ?IsIDKOnSKUEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NPEBG@Z @ 0x180161FD4 (-IsIDKOnSKUEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NPEBG@Z.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 *     ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1803B0948 (-IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1803B09B4 (-IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationActivationWatcher@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803B0DAC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ApplicationActivationWatcher@@@details@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RequestFromAppModelWatcher@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803B0EA8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RequestFromAppModelWatcher@@@details@wil@.c)
 */

char __fastcall Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(
        Windows::Internal::ApplicationModel::WindowManagement *this)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rdx
  Windows::Internal::ApplicationModel::WindowManagement *v4; // rcx
  int v5; // eax
  char v6; // bl
  char v7; // di
  __int64 v9; // rdx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 17;
  RtlGetDeviceFamilyInfoEnum(0LL, &v10, 0LL);
  v3 = 16LL;
  v4 = (Windows::Internal::ApplicationModel::WindowManagement *)*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                + (unsigned int)tls_index);
  if ( __TSS0__1__IsIDKOnXboxEnabled_WindowManagement_ApplicationModel_Internal_Windows__YA_NXZ_4HA > *((_DWORD *)v4 + 4) )
  {
    Init_thread_header(&__TSS0__1__IsIDKOnXboxEnabled_WindowManagement_ApplicationModel_Internal_Windows__YA_NXZ_4HA);
    if ( __TSS0__1__IsIDKOnXboxEnabled_WindowManagement_ApplicationModel_Internal_Windows__YA_NXZ_4HA == -1 )
    {
      `Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnXboxEnabled'::`2'::result = Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnSKUEnabled(
                                                                                                   L"IDKOnXbox",
                                                                                                   (const unsigned __int16 *)v3);
      Init_thread_footer(&__TSS0__1__IsIDKOnXboxEnabled_WindowManagement_ApplicationModel_Internal_Windows__YA_NXZ_4HA);
    }
  }
  v5 = v10;
  v6 = 0;
  v7 = `Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnXboxEnabled'::`2'::result;
  if ( v10 == 16 )
  {
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsMinShellPresent(v4) )
      goto LABEL_17;
    v5 = v10;
  }
  if ( v5 == 5 && v7 || v5 == 11 && v7 || v5 == 12 && v7 )
    goto LABEL_17;
  if ( v5 == 10 )
  {
    if ( !Windows::Internal::ApplicationModel::WindowManagement::IsIDKOnHoloEnabled(v4) )
    {
      v5 = v10;
      goto LABEL_9;
    }
LABEL_17:
    v6 = 1;
    LOBYTE(v3) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ApplicationActivationWatcher>::GetImpl'::`2'::impl,
      v3);
    LOBYTE(v9) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_RequestFromAppModelWatcher>::GetImpl'::`2'::impl,
      v9);
    return v6;
  }
LABEL_9:
  if ( v5 == 3 || v5 == 9 )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::GetImpl'::`2'::impl,
      0,
      v1,
      v2);
  return v6;
}
