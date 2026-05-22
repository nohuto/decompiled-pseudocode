/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UtagCOMPOSITION_TARGET_ID@@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18007276C
 * Callers:
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180072EC4 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x1800606E4 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@YAPEAUtagCOMPOSITION_TARGET_ID@@PEAU1@_KAEAV?$allocator@UtagCOMPOSITION_TARGET_ID@@@0@@Z @ 0x180072888 (--$_Uninitialized_value_construct_n@V-$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@YAPEAUta.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::vector<tagCOMPOSITION_TARGET_ID>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  char *v8; // rsi

  if ( a2 > 0x924924924924924LL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v4 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2);
  v5 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2);
  v6 = v5 >> 1;
  if ( v5 <= 0x924924924924924LL - (v5 >> 1) )
  {
    v7 = v6 + v5;
    if ( v6 + v5 >= a2 )
    {
      if ( v7 > 0x924924924924924LL )
        std::_Throw_bad_array_new_length();
    }
    else
    {
      v7 = a2;
    }
  }
  else
  {
    v7 = 0x924924924924924LL;
  }
  v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(28 * v7);
  std::_Uninitialized_value_construct_n<std::allocator<tagCOMPOSITION_TARGET_ID>>(&v8[28 * v4], a2 - v4);
  memmove_0(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<tagCOMPOSITION_TARGET_ID>::_Change_array(a1, v8, a2, v7);
}
