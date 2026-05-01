/*
 * XREFs of ??$?0AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAUhstring@winrt@@AEAU34@AEAU34@@?$_Ref_count_obj2@UGameMruItem@@@std@@QEAA@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@AEAUhstring@winrt@@11@Z @ 0x1803E1938
 * Callers:
 *     _anonymous_namespace_::JsonObjectToGameMruItem @ 0x1803E3CBC (_anonymous_namespace_--JsonObjectToGameMruItem.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??0GameMruItem@@QEAA@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@11@Z @ 0x1803D42D8 (--0GameMruItem@@QEAA@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@.c)
 */

__int64 __fastcall std::_Ref_count_obj2<GameMruItem>::_Ref_count_obj2<GameMruItem>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 *v6; // r9
  __int64 *v7; // r11
  _QWORD *v8; // rax
  __int64 *v9; // r10
  __int64 v10; // rdx
  __int128 v12; // [rsp+30h] [rbp-78h] BYREF
  __int128 v13; // [rsp+40h] [rbp-68h] BYREF
  __int128 v14; // [rsp+50h] [rbp-58h] BYREF
  __int64 v15; // [rsp+60h] [rbp-48h] BYREF
  __int64 v16; // [rsp+70h] [rbp-38h] BYREF
  __int64 v17; // [rsp+80h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<GameMruItem>::`vftable';
  v12 = *(_OWORD *)winrt::hstring::operator std::basic_string_view<unsigned short>(a5, &v15);
  v13 = *(_OWORD *)winrt::hstring::operator std::basic_string_view<unsigned short>(v6, &v16);
  v8 = winrt::hstring::operator std::basic_string_view<unsigned short>(v7, &v17);
  v10 = *v9;
  v14 = *(_OWORD *)v8;
  GameMruItem::GameMruItem((_QWORD *)(a1 + 16), v10, (void **)&v14, (void **)&v13, (void **)&v12);
  return a1;
}
