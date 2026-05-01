/*
 * XREFs of ??1SizeConversionViewInfo@@UEAA@XZ @ 0x1800689CC
 * Callers:
 *     ??_GSizeConversionViewInfo@@UEAAPEAXI@Z @ 0x180068990 (--_GSizeConversionViewInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SizeConversionViewInfo::~SizeConversionViewInfo(SizeConversionViewInfo *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
