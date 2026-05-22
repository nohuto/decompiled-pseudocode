/*
 * XREFs of ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x180002718
 * Callers:
 *     ?GetDelegateInputMode@DWMLegacyInputTarget@@UEAAJPEAK@Z @ 0x180019560 (-GetDelegateInputMode@DWMLegacyInputTarget@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceProcessId@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x18001A0D0 (-GetDelegateSourceProcessId@DWMFocusedInputTarget@@UEAAJPEAK@Z.c)
 *     ?GetDelegateInputMode@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x18001A810 (-GetDelegateInputMode@DWMFocusedInputTarget@@UEAAJPEAK@Z.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18001D9D0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800241B0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800A3070 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?GetDelegateSourceViewId@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x1801BA8B0 (-GetDelegateSourceViewId@DWMFocusedInputTarget@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceViewId@DWMLegacyInputTarget@@UEAAJPEAK@Z @ 0x1801BB020 (-GetDelegateSourceViewId@DWMLegacyInputTarget@@UEAAJPEAK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputSite::GetAttachedObject<IDelegateInformationProvider>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // r14
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbp
  __int64 v7; // rcx

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 488);
  v4 = *(_QWORD *)(a1 + 496);
  while ( v3 != v4 )
  {
    v5 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 8);
    v6 = **v5;
    v7 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v6(v5, &GUID_f6f9433e_5957_4930_a4c4_4da30644521c, a2) >= 0 )
      break;
    v3 += 16LL;
  }
  return a2;
}
