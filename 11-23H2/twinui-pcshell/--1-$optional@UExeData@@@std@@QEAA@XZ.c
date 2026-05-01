/*
 * XREFs of ??1?$optional@UExeData@@@std@@QEAA@XZ @ 0x180624F68
 * Callers:
 *     _Win32AppStateManager::UpdateAppViewWorker_::_1_::dtor$1 @ 0x18062729A (_Win32AppStateManager--UpdateAppViewWorker_--_1_--dtor$1.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::optional<ExeData>::~optional<ExeData>(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 72) )
  {
    std::wstring::_Tidy_deallocate(a1 + 40);
    return std::wstring::_Tidy_deallocate(a1 + 8);
  }
  return result;
}
