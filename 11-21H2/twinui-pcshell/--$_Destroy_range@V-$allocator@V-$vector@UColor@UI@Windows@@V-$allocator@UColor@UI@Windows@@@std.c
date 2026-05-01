/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x18012EF48
 * Callers:
 *     ?_Tidy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18012EEE8 (-_Tidy@-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allo.c)
 *     ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180560EF4 (--$_Assign_range@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@-$.c)
 *     ??1?$_Uninitialized_backout_al@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180561320 (--1-$_Uninitialized_backout_al@V-$allocator@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18056186C (-_Clear_and_reserve_geometric@-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windo.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::vector<Windows::UI::Color>>>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rbx
  void *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 != a2 )
  {
    v9 = a3;
    v4 = a1;
    do
    {
      v5 = *(void **)v4;
      if ( *(_QWORD *)v4 )
      {
        v6 = *(_QWORD *)(v4 + 16) - (_QWORD)v5;
        v8 = *(void **)v4;
        v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
        v9 = v7;
        if ( v7 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v8, &v9);
          v7 = v9;
          v5 = v8;
        }
        operator delete(v5, v7);
        *(_QWORD *)v4 = 0LL;
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_QWORD *)(v4 + 16) = 0LL;
      }
      v4 += 24LL;
    }
    while ( v4 != a2 );
  }
}
