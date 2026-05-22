/*
 * XREFs of ??1InputInfoValidator@@UEAA@XZ @ 0x1801B506C
 * Callers:
 *     ??_EInputInfoValidator@@UEAAPEAXI@Z @ 0x1801B50E0 (--_EInputInfoValidator@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180097BC8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall InputInfoValidator::~InputInfoValidator(void **this)
{
  __int64 v2; // rcx

  *this = &InputInfoValidator::`vftable';
  std::_Deallocate<16,0>(this[5], ((_BYTE *)this[6] - (_BYTE *)this[5]) & 0xFFFFFFFFFFFFFFF8uLL);
  this[5] = 0LL;
  this[6] = 0LL;
  this[7] = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v2,
    (_QWORD **)this[3]);
  std::_Deallocate<16,0>(this[3], 0x20uLL);
  *this = &RefCountedObject::`vftable';
}
