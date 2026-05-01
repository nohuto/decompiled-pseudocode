/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802D990E
 * Callers:
 *     ?ShownWindowHidden@ViewPresentationMediator@@UEAAXPEAUHWND__@@@Z @ 0x1802D99C0 (-ShownWindowHidden@ViewPresentationMediator@@UEAAXPEAUHWND__@@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1804F370C (--0Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowMan.c)
 *     ?OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z @ 0x1804F3C40 (-OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z.c)
 *     ?OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1804F3DD0 (-OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@.c)
 *     ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1804F3F70 (-OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(
        unsigned int *a1)
{
  __int64 *v1; // rbp
  unsigned int *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)(a1 + 2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a1 + 1);
  v3 = (unsigned int *)*((_QWORD *)a1 + 2);
  result = v3[2];
  if ( *a1 < (unsigned int)result )
  {
    do
    {
      v5 = *(_QWORD *)v3;
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)v3 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v1);
      result = v6(v5, *a1, &GUID_48dda676_f8a4_4f9e_911c_1c32b3c13dbc, v1);
      if ( (int)result >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35,
        (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)result);
      ++*a1;
      v3 = (unsigned int *)*((_QWORD *)a1 + 2);
      result = *a1;
    }
    while ( (unsigned int)result < v3[2] );
  }
  return result;
}
