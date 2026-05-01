/*
 * XREFs of ??1_tip_RemoteSessionActivationTipTest@@QEAA@XZ @ 0x180720354
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@@std@@EEAAXXZ @ 0x180723A30 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@t.c)
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

void __fastcall _tip_RemoteSessionActivationTipTest::~_tip_RemoteSessionActivationTipTest(
        _tip_RemoteSessionActivationTipTest *this,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx

  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((char *)this + 112, a2);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((char *)this + 80, v3);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((char *)this + 48, v4);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((char *)this + 16, v5);
}
