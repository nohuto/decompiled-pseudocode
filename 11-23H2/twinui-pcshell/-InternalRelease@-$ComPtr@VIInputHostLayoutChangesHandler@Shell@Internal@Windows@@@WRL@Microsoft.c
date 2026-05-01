/*
 * XREFs of ?InternalRelease@?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180197888
 * Callers:
 *     ?RegisterTouchKeyboardEventHandlers@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18017208C (-RegisterTouchKeyboardEventHandlers@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedSearchAppExperienceManager@@P85@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@_EP85@EAAJ02@_E@Details@WRL@Microsoft@@YAJPEAPEAVIInputHostLayoutChangesHandler@Shell@Internal@Windows@@$$QEAPEAVUndockedSearchAppExperienceManager@@$$QEAP87@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@33@_E$$QEAP87@EAAJ24@_E@Z @ 0x180172164 (--$MakeAndInitialize@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@V1234@PEAVUndockedS.c)
 *     ??1?$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180466218 (--1-$ComPtr@VIInputHostLayoutChangesHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801978B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInputHostLayoutC.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::IInputHostLayoutChangesHandler>::InternalRelease(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInputHostLayoutChanges>::Release(v1);
  }
  return result;
}
