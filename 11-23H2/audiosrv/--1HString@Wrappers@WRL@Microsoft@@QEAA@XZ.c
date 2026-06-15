/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18015A208
 * Callers:
 *     _ScanForInstalledSpatialAudioSubtypeAppServices_::_1_::dtor$5 @ 0x18007B5D0 (_ScanForInstalledSpatialAudioSubtypeAppServices_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
