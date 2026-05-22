/*
 * XREFs of ??1KeyboardModifierState@@EEAA@XZ @ 0x180194EFC
 * Callers:
 *     ??_EKeyboardModifierState@@EEAAPEAXI@Z @ 0x180194F70 (--_EKeyboardModifierState@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180081048 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 */

void __fastcall KeyboardModifierState::~KeyboardModifierState(void **this)
{
  __int64 v2; // rcx

  KeyboardModifierState::s_pKeyboardModifierState = 0LL;
  *this = &KeyboardModifierState::`vftable';
  std::_Deallocate<16,0>(this[5], ((_BYTE *)this[6] - (_BYTE *)this[5]) & 0xFFFFFFFFFFFFFFF8uLL);
  this[5] = 0LL;
  this[6] = 0LL;
  this[7] = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v2,
    (_QWORD **)this[3]);
  std::_Deallocate<16,0>(this[3], 0x18uLL);
  *this = &RefCountedObject::`vftable';
}
