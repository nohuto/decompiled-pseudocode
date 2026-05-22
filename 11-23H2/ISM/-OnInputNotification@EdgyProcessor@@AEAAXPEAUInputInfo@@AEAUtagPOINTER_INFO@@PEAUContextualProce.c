/*
 * XREFs of ?OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18016964C
 * Callers:
 *     ?OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180168B30 (-OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUtagPOINTF@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUtagPOINTF@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18015B28C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUtagPOINTF@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180161398 (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ?AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcessorResponse@@@Z @ 0x180167638 (-AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcesso.c)
 *     ?EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z @ 0x180167F54 (-EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18016A098 (-erase@-$_Hash@V-$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V-$_Uhash_compare@KU.c)
 *     ?OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z @ 0x18016A340 (-OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z.c)
 */

void __fastcall EdgyProcessor::OnInputNotification(
        EdgyProcessor *this,
        struct InputInfo *a2,
        struct tagPOINTER_INFO *a3,
        struct ContextualProcessorResponse *a4)
{
  char *v4; // r15
  __int64 v9; // rbx
  EdgyRecognizer *v10; // rcx
  struct tagPOINT v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  _BYTE v14[16]; // [rsp+20h] [rbp-10h] BYREF
  int v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+70h] [rbp+40h] BYREF

  v4 = (char *)this + 416;
  v15 = *((_DWORD *)a3 + 1);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 52,
    &v16,
    (const unsigned __int8 *)&v15);
  v9 = v16;
  if ( v16 != *((_QWORD *)this + 53) )
  {
    if ( *(_QWORD *)(v16 + 24) )
    {
      v10 = *(EdgyRecognizer **)(v16 + 40);
      if ( (unsigned int)(*((_DWORD *)v10 + 2) - 2) <= 1 )
      {
        EdgyRecognizer::OnPointerInfoFrame(v10, a2, a3);
        if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL) + 32LL))(*(_QWORD *)(v9 + 24) + 8LL) )
        {
          if ( (*((_BYTE *)a3 + 12) & 4) != 0 )
            EdgyProcessor::AddDecisionException((__int64)v10, v15, 1u, (__int64)a4);
          else
            *(_DWORD *)(*(_QWORD *)(v9 + 40) + 8LL) = 1;
        }
      }
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 8LL) == 1 )
        EdgyProcessor::AddDecisionException((__int64)v10, v15, 0, (__int64)a4);
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 8LL) == 4 )
      {
        v11 = *(struct tagPOINT *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINTF,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTF>>,0>>::_Try_emplace<unsigned long const &,>(
                                                (float *)this + 120,
                                                (__int64)v14,
                                                (unsigned __int8 *)&v15)
                                 + 20LL);
        *(float *)&v16 = (float)v11.x;
        *((float *)&v16 + 1) = (float)v11.y;
        InputETW::Edgy::EdgyRecognized(v11);
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL) + 24LL))(
          *(_QWORD *)(v9 + 24) + 8LL,
          &v16);
        *(_DWORD *)(*(_QWORD *)(v9 + 40) + 8LL) = 5;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 8LL) == 5 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL) + 32LL))(*(_QWORD *)(v9 + 24) + 8LL) )
          v13 = 0;
        else
          v13 = 3;
        EdgyProcessor::AddDecisionException(v12, v15, v13, (__int64)a4);
      }
    }
    if ( (*((_BYTE *)a3 + 12) & 4) == 0 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyNotificationMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>>,0>>::erase(
        v4,
        &v15);
      std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
        (_QWORD *)this + 60,
        (const unsigned __int8 *)&v15);
    }
  }
}
