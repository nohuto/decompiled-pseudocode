/*
 * XREFs of ??$GetAppPosition@VCImmersiveAppFinderByHwnd@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@_KPEA_K@Z @ 0x180143D34
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180085700 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180086710 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180089AB0 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180143C9C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 * Callees:
 *     ?Compare@CImmersiveAppFinderByHwnd@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x180023AD4 (-Compare@CImmersiveAppFinderByHwnd@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHwnd>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rcx
  bool v10; // bl
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h]

  v13 = a3;
  v7 = 0;
  v14 = 0LL;
  *a4 = 0LL;
  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v12 = 0LL;
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v8);
      v13 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = (unsigned int)CImmersiveAppFinderByHwnd::Compare(a2, &v13) == 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      if ( v10 )
        break;
      if ( (unsigned __int64)++v8 >= *(_QWORD *)(a1 + 16) )
        return (unsigned int)-2147319765;
    }
    *a4 = v8;
  }
  else
  {
    return (unsigned int)-2147319765;
  }
  return v7;
}
