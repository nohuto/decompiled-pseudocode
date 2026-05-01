/*
 * XREFs of ??$_Construct_in_place@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@AEAV54@AEAV54@@std@@YAXAEAUGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@22@Z @ 0x1803D2C5C
 * Callers:
 *     ??$make_shared@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@AEAV54@AEAV54@@std@@YA?AV?$shared_ptr@UGameMruItem@@@0@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@11@Z @ 0x1803D4060 (--$make_shared@UGameMruItem@@AEAV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$.c)
 * Callees:
 *     ??0GameMruItem@@QEAA@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@11@Z @ 0x1803D42D8 (--0GameMruItem@@QEAA@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@.c)
 */

__int64 __fastcall std::_Construct_in_place<GameMruItem,std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> &,std::wstring &,std::wstring &,std::wstring &>(
        int a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v5; // r10
  bool v6; // cf
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+50h] [rbp-18h] BYREF

  v5 = a5;
  if ( a5[3] >= 8uLL )
    v5 = (_QWORD *)*a5;
  v6 = a4[3] < 8uLL;
  v11[1] = a5[2];
  v7 = a4;
  v11[0] = v5;
  if ( !v6 )
    v7 = (_QWORD *)*a4;
  v6 = a3[3] < 8uLL;
  v12[0] = v7;
  v12[1] = a4[2];
  v8 = a3;
  if ( !v6 )
    v8 = (_QWORD *)*a3;
  v9 = *a2;
  v13[0] = v8;
  v13[1] = a3[2];
  return GameMruItem::GameMruItem(a1, v9, (unsigned int)v13, (unsigned int)v12, (__int64)v11);
}
