/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180093D94
 * Callers:
 *     ??1CAnimationLoggingManager@@UEAA@XZ @ 0x180093DC4 (--1CAnimationLoggingManager@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18009597C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800DC75C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::wstring::_Tidy_deallocate(v3 + 4);
      result = (_QWORD *)std::_Deallocate<16,0>(v3, 72LL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
