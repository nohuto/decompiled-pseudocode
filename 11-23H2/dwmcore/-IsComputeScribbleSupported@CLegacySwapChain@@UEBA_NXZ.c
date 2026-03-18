/*
 * XREFs of ?IsComputeScribbleSupported@CLegacySwapChain@@UEBA_NXZ @ 0x18029B034
 * Callers:
 *     ?IsComputeScribbleSupported@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011F6F0 (-IsComputeScribbleSupported@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsComputeScribbleSupported@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x180120E30 (-IsComputeScribbleSupported@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18012DB24 (McTemplateU0q_EventWriteTransfer.c)
 */

char __fastcall CLegacySwapChain::IsComputeScribbleSupported(CLegacySwapChain *this)
{
  char *v2; // rcx

  if ( *((_QWORD *)this - 38) )
  {
    v2 = (char *)this + *(int *)(*((_QWORD *)this - 53) + 12LL) - 424;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v2 + 24LL))(v2) || *((_DWORD *)this - 23) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
LABEL_15:
        McTemplateU0q_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE);
    }
    else if ( *((_DWORD *)this - 29) >= 2u )
    {
      if ( !CCommonRegistryData::EnableFrontBufferRenderChecks || *((_DWORD *)this - 28) )
        return 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        goto LABEL_15;
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      goto LABEL_15;
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
  {
    goto LABEL_15;
  }
  return 0;
}
