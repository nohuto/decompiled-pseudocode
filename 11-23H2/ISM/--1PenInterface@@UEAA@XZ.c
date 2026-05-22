/*
 * XREFs of ??1PenInterface@@UEAA@XZ @ 0x1801A69F8
 * Callers:
 *     ??_EPenInterface@@UEAAPEAXI@Z @ 0x1801A6AB0 (--_EPenInterface@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180099AF0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@1@@Z @ 0x1800A087C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@st.c)
 */

void __fastcall PenInterface::~PenInterface(PenInterface *this)
{
  void **v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  char *v5; // rcx
  struct _HIDP_PREPARSED_DATA *v6; // rcx

  v1 = (void **)((char *)this + 152);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
    (__int64)this + 152,
    (__int64)this + 152,
    *(_QWORD *)(*((_QWORD *)this + 19) + 8LL));
  std::_Deallocate<16,0>(*v1, 0x30uLL);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 17);
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    CM_Unregister_Notification(v4, v3);
  v5 = (char *)*((_QWORD *)this + 7);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  v6 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  if ( v6 )
    HidD_FreePreparsedData(v6);
  std::wstring::_Tidy_deallocate((__int64)this + 16);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
