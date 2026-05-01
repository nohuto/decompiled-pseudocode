/*
 * XREFs of ??0?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@$$QEAV01@@Z @ 0x18058408C
 * Callers:
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x180585B70 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x180585EE0 (-CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x180239484 (-_Alloc_sentinel_and_proxy@-$list@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

_QWORD *__fastcall std::list<std::wstring>::list<std::wstring>(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  std::list<std::wstring>::_Alloc_sentinel_and_proxy(a1);
  v4 = *a1;
  *a1 = *a2;
  v5 = a2[1];
  *a2 = v4;
  v6 = a1[1];
  a1[1] = v5;
  result = a1;
  a2[1] = v6;
  return result;
}
