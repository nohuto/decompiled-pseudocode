/*
 * XREFs of ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18007FEA8
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x18007FD7C (--$_Emplace_reallocate@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vecto.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18007FF98 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 */

__int64 __fastcall std::_Uninitialized_move<std::wstring *>(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  _QWORD *v6; // rax

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a3 - (_QWORD)a1;
    v6 = a1 + 3;
    do
    {
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)((char *)v6 + v5 - 8) = 0LL;
      *(_QWORD *)((char *)v6 + v5) = 0LL;
      *(_OWORD *)v3 = *(_OWORD *)(v6 - 3);
      *(_OWORD *)(v3 + 16) = *(_OWORD *)(v6 - 1);
      *(v6 - 1) = 0LL;
      v3 += 32LL;
      *v6 = 7LL;
      *((_WORD *)v6 - 12) = 0;
      v6 += 4;
    }
    while ( v6 - 3 != a2 );
  }
  std::_Destroy_range<std::allocator<std::wstring>>(v3, v3);
  return v3;
}
