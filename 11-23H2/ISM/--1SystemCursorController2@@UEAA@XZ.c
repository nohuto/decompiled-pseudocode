/*
 * XREFs of ??1SystemCursorController2@@UEAA@XZ @ 0x180100FCC
 * Callers:
 *     ??_GSystemCursorController2@@UEAAPEAXI@Z @ 0x180101180 (--_GSystemCursorController2@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180097BC8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemCursorController2::~SystemCursorController2(void **this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  std::_Ref_count_base *v6; // rcx
  void *v7; // rcx
  Microsoft::BamoImpl::BamoImplObject *v8; // rcx

  std::_Deallocate<16,0>(this[15], ((_BYTE *)this[16] - (_BYTE *)this[15]) & 0xFFFFFFFFFFFFFFF8uLL);
  this[15] = 0LL;
  this[16] = 0LL;
  this[17] = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v2,
    (_QWORD **)this[13]);
  std::_Deallocate<16,0>(this[13], 0x20uLL);
  v6 = (std::_Ref_count_base *)this[11];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = this[8];
  if ( v7 )
  {
    this[8] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v8 = (Microsoft::BamoImpl::BamoImplObject *)this[4];
  if ( v8 )
    Microsoft::BamoImpl::BamoImplObject::Release(v8, v3, v4, v5);
}
