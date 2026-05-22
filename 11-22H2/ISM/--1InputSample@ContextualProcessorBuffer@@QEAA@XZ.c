/*
 * XREFs of ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1801CD64C
 * Callers:
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18000A740 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x1801CC36C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1801CDC10 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800A951C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AA918 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180105B5C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@UIInputTarget@@@WRL@Microso.c)
 */

void __fastcall ContextualProcessorBuffer::InputSample::~InputSample(void **this)
{
  __int64 v2; // rcx
  _BYTE *v3; // rcx
  signed __int64 v4; // rdx
  __int64 v5; // rcx
  _BYTE *v6; // rcx
  signed __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+30h] [rbp+10h] BYREF
  void *v10; // [rsp+38h] [rbp+18h] BYREF

  std::_Deallocate<16,0>(this[21], ((_BYTE *)this[22] - (_BYTE *)this[21]) & 0xFFFFFFFFFFFFFFF8uLL);
  this[21] = 0LL;
  this[22] = 0LL;
  this[23] = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v2,
    (_QWORD **)this[19]);
  std::_Deallocate<16,0>(this[19], 0x18uLL);
  v3 = this[13];
  v4 = (_BYTE *)this[14] - v3;
  v10 = v3;
  v9 = v4 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v4 & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v10, &v9);
    v3 = v10;
  }
  operator delete(v3);
  this[13] = 0LL;
  this[14] = 0LL;
  this[15] = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
    v5,
    (_QWORD **)this[11]);
  std::_Deallocate<16,0>(this[11], 0x20uLL);
  v6 = this[5];
  v7 = (_BYTE *)this[6] - v6;
  v10 = v6;
  v9 = v7 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v7 & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v10, &v9);
    v6 = v10;
  }
  operator delete(v6);
  this[5] = 0LL;
  this[6] = 0LL;
  this[7] = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
    v8,
    (_QWORD **)this[3]);
  std::_Deallocate<16,0>(this[3], 0x20uLL);
  if ( *this )
    operator delete[](*this);
}
