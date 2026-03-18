/*
 * XREFs of ?IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x1801E7480
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x180045144 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18012DB24 (McTemplateU0q_EventWriteTransfer.c)
 */

bool __fastcall CLegacyRenderTarget::IsComputeScribbleSupported(CLegacyRenderTarget *this)
{
  if ( !*((_QWORD *)this + 5) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      goto LABEL_6;
    return 0;
  }
  if ( (unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this + 56) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
LABEL_6:
      McTemplateU0q_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE);
    return 0;
  }
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 296LL))(*((_QWORD *)this + 5));
}
