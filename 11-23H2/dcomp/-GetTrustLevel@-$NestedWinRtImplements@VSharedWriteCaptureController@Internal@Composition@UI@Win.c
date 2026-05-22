/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@UIWriteCaptureController@2345@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FE30
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AE810 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UIComp.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800B0B60 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Wi_ea_1800B0B60.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@UICompositionVirtualDrawingSurface@234@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800B0B80 (-GetTrustLevel@-$NestedWinRtImplements@VCompositionVirtualDrawingSurface@Composition@UI@Windows@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Internal::SharedWriteCaptureController,Windows::UI::Composition::Internal::IWriteCaptureController>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 184) + 32LL);
  return result;
}
