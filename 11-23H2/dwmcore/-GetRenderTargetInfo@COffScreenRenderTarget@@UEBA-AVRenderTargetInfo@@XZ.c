/*
 * XREFs of ?GetRenderTargetInfo@COffScreenRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x1801E99FC
 * Callers:
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@BBI@EBA?AVRenderTargetInfo@@XZ @ 0x18011C3F0 (-GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@BBI@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@GI@EBA?AVRenderTargetInfo@@XZ @ 0x18011C410 (-GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@GI@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@MI@EBA?AVRenderTargetInfo@@XZ @ 0x18011C430 (-GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@MI@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@A@EBA?AVRenderTargetInfo@@XZ @ 0x18011D310 (-GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@A@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@BAA@EBA?AVRenderTargetInfo@@XZ @ 0x18011D530 (-GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@BAA@EBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@DI@EBA?AVRenderTargetInfo@@XZ @ 0x18011E230 (-GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@DI@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1801010E8 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetRenderTargetInfo(CDisplayManager *a1, __int64 a2)
{
  CDisplayManager::GetPrimaryAdapterLuid(a1, (struct _LUID *)a2);
  *(_DWORD *)(a2 + 8) = DisplayId::None;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_BYTE *)(a2 + 20) = 0;
  return a2;
}
