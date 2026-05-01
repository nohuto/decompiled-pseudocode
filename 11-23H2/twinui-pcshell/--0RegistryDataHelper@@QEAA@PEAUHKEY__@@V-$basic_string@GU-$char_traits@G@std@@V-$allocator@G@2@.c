/*
 * XREFs of ??0RegistryDataHelper@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1801B6E64
 * Callers:
 *     CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1 @ 0x1801DF350 (CControlCenterExperienceManager--PrelaunchExperienceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

_QWORD *__fastcall RegistryDataHelper::RegistryDataHelper(_QWORD *a1, __int64 a2, __int64 a3)
{
  *a1 = -2147483646LL;
  a1[1] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  *(_OWORD *)(a1 + 1) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 3) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 7LL;
  *(_WORD *)a3 = 0;
  a1[5] = 0LL;
  std::wstring::_Tidy_deallocate(a3);
  return a1;
}
