/*
 * XREFs of ?_Tidy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18016620C
 * Callers:
 *     _dynamic_atexit_destructor_for__error__ @ 0x1802C7D80 (_dynamic_atexit_destructor_for__error__.c)
 *     _dynamic_atexit_destructor_for__idle__ @ 0x1802C7DA0 (_dynamic_atexit_destructor_for__idle__.c)
 *     _dynamic_atexit_destructor_for__listening__ @ 0x1802C7DC0 (_dynamic_atexit_destructor_for__listening__.c)
 *     _dynamic_atexit_destructor_for__responding__ @ 0x1802C7DE0 (_dynamic_atexit_destructor_for__responding__.c)
 *     _dynamic_atexit_destructor_for__thinking__ @ 0x1802C7E00 (_dynamic_atexit_destructor_for__thinking__.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x18061A3E8 (--1-$_Tidy_guard@V-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@s.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x18016626C (--$_Destroy_range@V-$allocator@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::vector<Windows::UI::Color>>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::vector<Windows::UI::Color>>>(v2, a1[1]);
    result = std::_Deallocate<16,0>(*a1, 8 * ((__int64)(a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
