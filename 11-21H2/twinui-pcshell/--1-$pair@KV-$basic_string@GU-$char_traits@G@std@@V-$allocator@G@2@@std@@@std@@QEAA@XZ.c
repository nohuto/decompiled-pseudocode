/*
 * XREFs of ??1?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x18032C100
 * Callers:
 *     _GamingOverlayExperienceManager::GetNonServiceProcessListAndIds_::_1_::dtor$2 @ 0x1803317AA (_GamingOverlayExperienceManager--GetNonServiceProcessListAndIds_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<unsigned long,std::wstring>::~pair<unsigned long,std::wstring>(__int64 a1)
{
  return std::wstring::_Tidy_deallocate(a1 + 8);
}
