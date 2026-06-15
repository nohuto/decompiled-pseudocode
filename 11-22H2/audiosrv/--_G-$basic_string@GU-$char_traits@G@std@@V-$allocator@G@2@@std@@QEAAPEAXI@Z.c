/*
 * XREFs of ??_G?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAPEAXI@Z @ 0x1801053A4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@EEAAXXZ @ 0x18010ACD0 (-_Destroy@-$_Ref_count_obj2@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1801599EC (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::wstring::`scalar deleting destructor'(__int64 a1)
{
  unsigned __int64 v1; // rdx
  void *v3; // rcx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
  {
    v3 = *(void **)a1;
    v5 = 2 * v1 + 2;
    v6 = v3;
    if ( v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v3 = v6;
    }
    operator delete(v3);
  }
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return a1;
}
