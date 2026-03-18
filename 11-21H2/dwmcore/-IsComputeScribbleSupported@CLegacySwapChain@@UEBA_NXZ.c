/*
 * XREFs of ?IsComputeScribbleSupported@CLegacySwapChain@@UEBA_NXZ @ 0x18028B590
 * Callers:
 *     ?IsComputeScribbleSupported@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x180109010 (-IsComputeScribbleSupported@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsComputeScribbleSupported@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x18010A630 (-IsComputeScribbleSupported@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 */

char __fastcall CLegacySwapChain::IsComputeScribbleSupported(CLegacySwapChain *this)
{
  __int64 v2; // r8
  char *v3; // rcx

  if ( *((_QWORD *)this - 40) )
  {
    v3 = (char *)this + *(int *)(*((_QWORD *)this - 47) + 8LL) - 376;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 24LL))(v3) || *((_DWORD *)this - 22) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      {
        v2 = 4LL;
        goto LABEL_16;
      }
    }
    else if ( *((_DWORD *)this - 49) >= 2u )
    {
      if ( !CCommonRegistryData::EnableFrontBufferRenderChecks || *((_DWORD *)this - 46) )
        return 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      {
        v2 = 12LL;
        goto LABEL_16;
      }
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    {
      v2 = 13LL;
      goto LABEL_16;
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
  {
    v2 = 11LL;
LABEL_16:
    McTemplateU0q_EventWriteTransfer((__int64)this, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, v2);
  }
  return 0;
}
