/*
 * XREFs of ??1SearchBoxOnTaskbarSearchAppPositioner@@UEAA@XZ @ 0x1801A5044
 * Callers:
 *     ??_ESearchBoxOnTaskbarSearchAppPositioner@@UEAAPEAXI@Z @ 0x1801A50A0 (--_ESearchBoxOnTaskbarSearchAppPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VISearchAppPositionerConfig@@U?$default_delete@VISearchAppPositionerConfig@@@wistd@@@wistd@@QEAAXPEAVISearchAppPositionerConfig@@@Z @ 0x180390324 (-reset@-$unique_ptr@VISearchAppPositionerConfig@@U-$default_delete@VISearchAppPositionerConfig@@.c)
 */

void __fastcall SearchBoxOnTaskbarSearchAppPositioner::~SearchBoxOnTaskbarSearchAppPositioner(
        SearchBoxOnTaskbarSearchAppPositioner *this)
{
  wistd::unique_ptr<ISearchAppPositionerConfig,wistd::default_delete<ISearchAppPositionerConfig>>::reset(
    (char *)this + 8,
    0LL);
  *(_QWORD *)this = &ISearchAppPositioner::`vftable';
}
