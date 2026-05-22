/*
 * XREFs of ?OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014AD38
 * Callers:
 *     ?OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014A270 (-OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800B367C (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUtagPOINTF@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUtagPOINTF@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C0B0 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUtagPOINTF@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ?AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcessorResponse@@@Z @ 0x180148A8C (-AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcesso.c)
 *     ?EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z @ 0x180149508 (-EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18014B854 (-erase@-$_Hash@V-$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V-$_Uhash_compare@KU.c)
 *     ?OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z @ 0x18014BAFC (-OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z.c)
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
  __int64 v11; // rax
  struct tagPOINT v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  _BYTE v15[16]; // [rsp+20h] [rbp-10h] BYREF
  int v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF

  v4 = (char *)this + 416;
  v16 = *((_DWORD *)a3 + 1);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 52,
    &v17,
    (const unsigned __int8 *)&v16);
  v9 = v17;
  if ( v17 != *((_QWORD *)this + 53) )
  {
    if ( *(_QWORD *)(v17 + 24) )
    {
      v10 = *(EdgyRecognizer **)(v17 + 40);
      if ( (unsigned int)(*((_DWORD *)v10 + 2) - 2) <= 1 )
      {
        EdgyRecognizer::OnPointerInfoFrame(v10, a2, a3);
        if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL) + 32LL))(*(_QWORD *)(v9 + 24) + 8LL) )
        {
          if ( (*((_BYTE *)a3 + 12) & 4) != 0 )
            EdgyProcessor::AddDecisionException((__int64)v10, v16, 1u, (__int64)a4);
          else
            *(_DWORD *)(*(_QWORD *)(v9 + 40) + 8LL) = 1;
        }
      }
      v11 = *(_QWORD *)(v9 + 40);
      if ( *(_DWORD *)(v11 + 8) == 1 )
      {
        EdgyProcessor::AddDecisionException((__int64)v10, v16, 0, (__int64)a4);
        v11 = *(_QWORD *)(v9 + 40);
      }
      if ( *(_DWORD *)(v11 + 8) == 4 )
      {
        v12 = *(struct tagPOINT *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINTF,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTF>>,0>>::_Try_emplace<unsigned long const &,>(
                                                (float *)this + 120,
                                                (__int64)v15,
                                                (unsigned __int8 *)&v16)
                                 + 20LL);
        *(float *)&v17 = (float)v12.x;
        *((float *)&v17 + 1) = (float)v12.y;
        InputETW::Edgy::EdgyRecognized(v12);
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL) + 24LL))(
          *(_QWORD *)(v9 + 24) + 8LL,
          &v17);
        *(_DWORD *)(*(_QWORD *)(v9 + 40) + 8LL) = 5;
        v11 = *(_QWORD *)(v9 + 40);
      }
      if ( *(_DWORD *)(v11 + 8) == 5 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL) + 32LL))(*(_QWORD *)(v9 + 24) + 8LL) )
          v14 = 0;
        else
          v14 = 3;
        EdgyProcessor::AddDecisionException(v13, v16, v14, (__int64)a4);
      }
    }
    if ( (*((_BYTE *)a3 + 12) & 4) == 0 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyNotificationMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>>,0>>::erase(
        v4,
        &v16);
      std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
        (_QWORD *)this + 60,
        (const unsigned __int8 *)&v16);
    }
  }
}
