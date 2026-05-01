/*
 * XREFs of ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x18018CFE8
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800C71E0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800119A0 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C4C10 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180161C84 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::_ComputeApplicationId(
        CApplicationManager *this,
        CallerIdentity **a2,
        unsigned __int16 **a3)
{
  int ImmersiveAppIdFromWindow; // edi
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  HWND v8; // rdx
  HWND v9; // rdx
  CApplicationManager *pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  pvAttribute = this;
  ImmersiveAppIdFromWindow = 0;
  v5 = a2 + 4;
  if ( !*v5 && *((_DWORD *)a2 + 4) == 2 && (unsigned __int64)*a2 <= 0x1D )
  {
    v6 = 604110848LL;
    if ( _bittest64(&v6, (unsigned __int64)*a2) )
    {
      ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(a2[1], v5, a3);
      if ( ImmersiveAppIdFromWindow < 0
        && CApplicationManagerUtility::IsValidWindow(a2[1], v8)
        && !CApplicationManagerUtility::IsOwnedWindow(a2[1], v9)
        && DwmGetWindowAttribute((HWND)a2[1], 0xEu, &pvAttribute, 4u) >= 0
        && !(_DWORD)pvAttribute )
      {
        (*(void (__fastcall **)(PVOID, CallerIdentity *, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                                 + 24LL))(
          CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
          a2[1],
          1LL);
      }
    }
  }
  return (unsigned int)ImmersiveAppIdFromWindow;
}
