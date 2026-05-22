/*
 * XREFs of ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1801C00B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180046B30 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x1800473E0 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009BA10 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x1800F79A0 (--0-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@XZ @ 0x1800F79D0 (--0-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@K@2@@std@@QEAA@XZ.c)
 *     ??$_Try_emplace@K$$V@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@_N@1@$$QEAK@Z @ 0x1801BEEE0 (--$_Try_emplace@K$$V@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorState@@V-$_Uhash_compare@KU-$.c)
 *     ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x1801BFBD4 (--1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIContextualProcessor@@@Z @ 0x1801BFF1C (--4-$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIContextualProcessor@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContextualProcessorBuffer::AddProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[16]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v9[8]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v10[64]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v11; // [rsp+B8h] [rbp-48h]
  _BYTE v12[64]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v13; // [rsp+100h] [rbp+0h] BYREF
  int v14; // [rsp+130h] [rbp+30h] BYREF
  __int64 v15; // [rsp+140h] [rbp+40h]

  v15 = a3;
  v8 = 0LL;
  std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>((__int64)v9);
  std::unordered_set<unsigned long>::unordered_set<unsigned long>((__int64)v10);
  v11 = 0LL;
  std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>((__int64)v12);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IContextualProcessor>::operator=(&v8, a2);
  LODWORD(a2) = *(_DWORD *)a3;
  v14 = 0;
  *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Try_emplace<unsigned long,>(
                           v9,
                           (__int64)v7,
                           (unsigned __int8 *)&v14)
            + 20LL) = a2;
  Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)&v13, (__int64 *)(a3 + 8));
  LODWORD(v11) = 0;
  BYTE8(v13) = 0;
  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 40) )
  {
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
      (_QWORD *)(a1 + 24),
      *(__int64 **)(a1 + 32),
      (const struct ContextualProcessorBuffer::ContextualProcessorMetadata *)&v8);
  }
  else
  {
    ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(
      *(ContextualProcessorBuffer::ContextualProcessorMetadata **)(a1 + 32),
      (const struct ContextualProcessorBuffer::ContextualProcessorMetadata *)&v8);
    *(_QWORD *)(a1 + 32) += 224LL;
  }
  ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata((ContextualProcessorBuffer::ContextualProcessorMetadata *)&v8);
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(a3 + 8));
}
