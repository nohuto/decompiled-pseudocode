/*
 * XREFs of ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180560EF4
 * Callers:
 *     ?HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z @ 0x180561650 (-HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x18012EF48 (--$_Destroy_range@V-$allocator@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180560108 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Copy_unchecked@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@PEAV12@@std@@YAPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@PEAV10@00@Z @ 0x180561004 (--$_Copy_unchecked@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@P.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18056186C (-_Clear_and_reserve_geometric@-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::vector<std::vector<Windows::UI::Color>>::_Assign_range<std::vector<Windows::UI::Color> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // r8
  __int64 *v11; // rbx
  __int64 v12; // rdx

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a3 - a2) >> 3);
  v7 = *a1;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( v6 <= v8 )
  {
    v11 = (__int64 *)(v7 + 24 * v6);
    std::_Copy_unchecked<std::vector<Windows::UI::Color> *,std::vector<Windows::UI::Color> *>(a2, a3);
    v12 = a1[1];
  }
  else
  {
    if ( v6 > 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - v7) >> 3) )
    {
      std::vector<std::vector<Windows::UI::Color>>::_Clear_and_reserve_geometric(a1, v6);
      v8 = 0LL;
    }
    v9 = a2 + 24 * v8;
    std::_Copy_unchecked<std::vector<Windows::UI::Color> *,std::vector<Windows::UI::Color> *>(a2, v9);
    v11 = (__int64 *)a1[1];
    while ( v9 != a3 )
    {
      std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(v11, v9);
      v11 += 3;
      v9 += 24LL;
    }
    v12 = (__int64)v11;
  }
  std::_Destroy_range<std::allocator<std::vector<Windows::UI::Color>>>((__int64)v11, v12, v10);
  a1[1] = (__int64)v11;
}
