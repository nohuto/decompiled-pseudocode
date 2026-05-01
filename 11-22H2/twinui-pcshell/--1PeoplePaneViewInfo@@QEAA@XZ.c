/*
 * XREFs of ??1PeoplePaneViewInfo@@QEAA@XZ @ 0x1804B201C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UPeoplePaneViewInfo@@@std@@EEAAXXZ @ 0x1804B65E0 (-_Destroy@-$_Ref_count_obj2@UPeoplePaneViewInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PeoplePaneViewInfo::~PeoplePaneViewInfo(PeoplePaneViewInfo *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 4);
  std::wstring::_Tidy_deallocate((__int64)this);
}
