/*
 * XREFs of ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x18006C3DC
 * Callers:
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180052258 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@st.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800523D8 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_1800523D8.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180052558 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_180052558.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x180052998 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x180052C94 (_anonymous_namespace_--PlacementHealth--HandleEvent_10_unsigned_int_unsigned___int64_.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 */

unsigned __int64 *__fastcall std::to_wstring(unsigned __int64 *a1, unsigned int a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  wchar_t Buffer[64]; // [rsp+30h] [rbp-98h] BYREF

  swprintf_s(Buffer, 0x40uLL, L"%u", a2, a1);
  v3 = 0LL;
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  if ( Buffer[0] )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Buffer[v4] );
    v3 = v4;
  }
  std::wstring::assign(a1, (char *)Buffer, v3);
  return a1;
}
