/*
 * XREFs of ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x180079B0C
 * Callers:
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x180079928 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ @ 0x1800DD15C (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800EB688 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x1800FDFB0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 */

__int64 __fastcall CLegacyRenderTarget::CheckForOcclusionChange(CLegacyRenderTarget *this, int a2)
{
  if ( a2 == 142213121 )
  {
    *((_BYTE *)this + 18702) = 1;
    return (unsigned int)a2;
  }
  if ( a2 == 142213167 )
  {
    *((_BYTE *)this + 18700) = 1;
    ScheduleCompositionPass(0LL, 0x2000LL);
    return 0;
  }
  if ( a2 >= 0 && (*((_BYTE *)this + 18702) || a2 == 142213129) )
  {
    *(_WORD *)((char *)this + 18701) = 1;
    *((_BYTE *)this + 141) = 1;
    CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 144));
    return 0;
  }
  return (unsigned int)a2;
}
