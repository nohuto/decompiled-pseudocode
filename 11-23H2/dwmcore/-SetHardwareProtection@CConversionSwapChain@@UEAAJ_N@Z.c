/*
 * XREFs of ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x1802A27D8
 * Callers:
 *     ?SetHardwareProtection@CConversionSwapChain@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x180121050 (-SetHardwareProtection@CConversionSwapChain@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E359C (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z @ 0x18029B3A0 (-SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x1802A19A8 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CConversionSwapChain::SetHardwareProtection(CConversionSwapChain *this, unsigned __int8 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r8
  int (__fastcall ***v8)(_QWORD); // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx

  v4 = CLegacySwapChain::SetHardwareProtection((CConversionSwapChain *)((char *)this - 424), a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xC3u, 0LL);
  }
  else
  {
    v7 = *((_QWORD *)this - 60);
    if ( v7 )
    {
      v8 = (int (__fastcall ***)(_QWORD))(v7 + 8 + *(int *)(*(_QWORD *)(v7 + 8) + 8LL));
      if ( (**v8)(v8) < 0
        || (v9 = *(int *)(*(_QWORD *)(*((_QWORD *)this - 60) + 8LL) + 8LL) + *((_QWORD *)this - 60) + 8LL,
            (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) != a2) )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)this - 60);
      }
    }
    v10 = CConversionSwapChain::EnsureTargetBitmap((CConversionSwapChain *)((char *)this - 856));
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xCEu, 0LL);
  }
  return v6;
}
