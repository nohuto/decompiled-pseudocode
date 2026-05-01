/*
 * XREFs of ??4?$vector@HV?$allocator@H@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801ACF8C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1801AD008 (-_Clear_and_reserve_geometric@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 */

__int64 *__fastcall std::vector<int>::operator=(__int64 *a1, __int64 *a2)
{
  const void *v3; // rbp
  signed __int64 v4; // rsi
  __int64 v5; // rbx

  if ( a1 != a2 )
  {
    v3 = (const void *)*a2;
    v4 = a2[1] - *a2;
    if ( v4 >> 2 > (unsigned __int64)((a1[2] - *a1) >> 2) )
      std::vector<int>::_Clear_and_reserve_geometric(a1, v4 >> 2);
    v5 = *a1;
    memmove_0((void *)*a1, v3, v4);
    a1[1] = v4 + v5;
  }
  return a1;
}
