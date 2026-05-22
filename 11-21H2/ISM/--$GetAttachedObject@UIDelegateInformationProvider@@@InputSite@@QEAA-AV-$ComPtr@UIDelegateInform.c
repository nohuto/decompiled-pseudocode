/*
 * XREFs of ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x18008910C
 * Callers:
 *     ?GetDelegateSourceProcessId@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x180011370 (-GetDelegateSourceProcessId@DWMFocusedInputTarget@@UEAAJPEAK@Z.c)
 *     ?GetDelegateInputMode@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x180011890 (-GetDelegateInputMode@DWMFocusedInputTarget@@UEAAJPEAK@Z.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18001A1A0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x18008BF88 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?GetDelegateSourceViewId@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x18019C5D0 (-GetDelegateSourceViewId@DWMFocusedInputTarget@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceViewId@DWMLegacyInputTarget@@UEAAJPEAK@Z @ 0x18019CE30 (-GetDelegateSourceViewId@DWMLegacyInputTarget@@UEAAJPEAK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSite::GetAttachedObject<IDelegateInformationProvider>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 488);
  v4 = *(_QWORD *)(a1 + 496);
  while ( v3 != v4 )
  {
    v5 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 8);
    v6 = **v5;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
    if ( v6(v5, &GUID_f6f9433e_5957_4930_a4c4_4da30644521c, a2) >= 0 )
      break;
    v3 += 16LL;
  }
  return a2;
}
