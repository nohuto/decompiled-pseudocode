/*
 * XREFs of ?IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x1801C08A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800B9300 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 */

bool __fastcall CLegacyRenderTarget::IsComputeScribbleSupported(CLegacyRenderTarget *this)
{
  __int64 v2; // r8

  if ( !*((_QWORD *)this + 4) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    {
      v2 = 10LL;
LABEL_7:
      McTemplateU0q_EventWriteTransfer((__int64)this, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, v2);
      return 0;
    }
    return 0;
  }
  if ( (unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this + 48) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    {
      v2 = 1LL;
      goto LABEL_7;
    }
    return 0;
  }
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 280LL))(*((_QWORD *)this + 4));
}
