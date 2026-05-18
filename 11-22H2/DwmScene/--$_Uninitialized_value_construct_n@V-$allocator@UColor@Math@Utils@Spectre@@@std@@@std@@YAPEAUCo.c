/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@YAPEAUColor@Math@Utils@Spectre@@PEAU1234@_KAEAV?$allocator@UColor@Math@Utils@Spectre@@@0@@Z @ 0x18008F49C
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008EFD8 (--$_Construct_n@$$V@-$vector@UColor@Math@Utils@Spectre@@V-$allocator@UColor@Math@Utils@Spectre@@.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F1B0 (--$_Resize@U_Value_init_tag@std@@@-$vector@UColor@Math@Utils@Spectre@@V-$allocator@UColor@Math@U.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F2C0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UColor@Math@Utils@Spectre@@V-$allocator@UC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_value_construct_n<std::allocator<Spectre::Utils::Math::Color>>(
        __int64 a1,
        __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 1065353216;
    a1 += 16LL;
  }
  return a1;
}
