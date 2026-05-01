/*
 * XREFs of ??$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18040BC1C
 * Callers:
 *     _lambda_b00c0a52bd3e015b702ddb883117dd85_::operator() @ 0x18040C788 (_lambda_b00c0a52bd3e015b702ddb883117dd85_--operator().c)
 *     ?HandleSessionItemSimpleVolumeChanged@AppList@GamingAudio@@QEAAXH@Z @ 0x18040D7C8 (-HandleSessionItemSimpleVolumeChanged@AppList@GamingAudio@@QEAAXH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>(
        Microsoft::WRL::WeakRef *this,
        struct IInspectable **a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2);
  return Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_c44450f0_731e_4fdb_95fe_d031838a5b14, a2);
}
