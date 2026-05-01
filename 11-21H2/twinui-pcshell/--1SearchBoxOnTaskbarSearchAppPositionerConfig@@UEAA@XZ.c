/*
 * XREFs of ??1SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA@XZ @ 0x1801A5070
 * Callers:
 *     ??_GSearchBoxOnTaskbarSearchAppPositionerConfig@@UEAAPEAXI@Z @ 0x1801A50E0 (--_GSearchBoxOnTaskbarSearchAppPositionerConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::~SearchBoxOnTaskbarSearchAppPositionerConfig(
        SearchBoxOnTaskbarSearchAppPositionerConfig *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 1);
  *(_QWORD *)this = &ISearchAppPositionerConfig::`vftable';
}
