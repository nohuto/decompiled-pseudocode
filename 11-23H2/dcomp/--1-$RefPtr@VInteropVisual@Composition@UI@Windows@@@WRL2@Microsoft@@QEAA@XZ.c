/*
 * XREFs of ??1?$RefPtr@VInteropVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x18010D9FC
 * Callers:
 *     ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x180075590 (-CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::InteropVisual>::~RefPtr<Windows::UI::Composition::InteropVisual>(
        volatile signed __int32 **a1,
        __int64 a2)
{
  return Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(a1, a2);
}
