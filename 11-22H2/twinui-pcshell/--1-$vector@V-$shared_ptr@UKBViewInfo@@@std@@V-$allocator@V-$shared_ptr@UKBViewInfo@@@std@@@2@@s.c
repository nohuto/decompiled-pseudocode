/*
 * XREFs of ??1?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAA@XZ @ 0x18050C2E0
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$14 @ 0x1802B6C6A (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$14.c)
 *     _TouchKeyboardExperienceManager::WorkAreaChanged_::_1_::dtor$0 @ 0x1802C4102 (_TouchKeyboardExperienceManager--WorkAreaChanged_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::HideAllInputViews_::_1_::dtor$0 @ 0x1802DB666 (_TouchKeyboardExperienceManager--HideAllInputViews_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::ClearViewInfos_::_1_::dtor$0 @ 0x18050EC44 (_TouchKeyboardExperienceManager--ClearViewInfos_--_1_--dtor$0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::shared_ptr<KBViewInfo>>::~vector<std::shared_ptr<KBViewInfo>>(void **a1)
{
  char *v1; // rbx
  char *v3; // rsi
  std::_Ref_count_base *v4; // rcx

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    while ( v1 != v3 )
    {
      v4 = (std::_Ref_count_base *)*((_QWORD *)v1 + 1);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v1 += 16;
    }
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
