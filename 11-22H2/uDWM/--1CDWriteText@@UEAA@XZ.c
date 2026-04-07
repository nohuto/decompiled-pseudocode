/*
 * XREFs of ??1CDWriteText@@UEAA@XZ @ 0x180017CD8
 * Callers:
 *     ??_GCDWriteText@@UEAAPEAXI@Z @ 0x180017BB0 (--_GCDWriteText@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180018F98 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDWriteText::~CDWriteText(CDWriteText *this)
{
  std::wstring::_Tidy_deallocate((char *)this + 296);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 280);
  CSpriteVisual::~CSpriteVisual(this);
}
