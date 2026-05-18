/*
 * XREFs of ??RFindResourceWithID@ResourceManager@Engine@Spectre@@QEBA_NAEBVResourceData@23@@Z @ 0x18007013C
 * Callers:
 *     ??$find_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VResourceData@Engine@Spectre@@@std@@@std@@@std@@VFindResourceWithID@ResourceManager@Engine@Spectre@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VResourceData@Engine@Spectre@@@std@@@std@@@0@V10@V10@VFindResourceWithID@ResourceManager@Engine@Spectre@@@Z @ 0x18006FF90 (--$find_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@VResourceData@Engine@Spectre@@@st.c)
 * Callees:
 *     ?GetResourceID@ResourceData@Engine@Spectre@@QEBA?B_KXZ @ 0x180097610 (-GetResourceID@ResourceData@Engine@Spectre@@QEBA-B_KXZ.c)
 */

bool __fastcall Spectre::Engine::ResourceManager::FindResourceWithID::operator()(
        _QWORD *a1,
        Spectre::Engine::ResourceData *a2)
{
  return Spectre::Engine::ResourceData::GetResourceID(a2) == *a1;
}
