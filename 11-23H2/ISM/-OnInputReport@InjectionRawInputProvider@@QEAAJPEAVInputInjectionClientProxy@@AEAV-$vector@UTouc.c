/*
 * XREFs of ?OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@@Z @ 0x1800E8538
 * Callers:
 *     ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801B66B0 (-InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@1@AEBI@Z @ 0x1800985C8 (--$find@X@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x1800BA3DC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x1800BA8EC (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x1800BB7EC (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@PEAVInputInjectionClientProxy@@PEAUPointerInputInfo@@@Z @ 0x1800E8780 (-PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV-$vector@UTouchInj.c)
 *     ?OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z @ 0x1801B5130 (-OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InjectionRawInputProvider::OnInputReport(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  unsigned int SizeForPointerCount; // eax
  __int64 v9; // r8
  const char *v10; // r9
  struct InputInfo *v11; // rbp
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  bool v15; // r8
  struct InputInfo *v16[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v18) = *(_DWORD *)(a2 + 40);
  std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::find<void>(
    (_QWORD *)(a1 + 40),
    &v19,
    (const unsigned __int8 *)&v18);
  v6 = v19;
  if ( v19 == *(_QWORD *)(a1 + 48) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  SizeForPointerCount = PointerInputInfo::GetSizeForPointerCount((__int64)(a3[1] - *a3) >> 4);
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
    (__int64)v16,
    SizeForPointerCount,
    v9,
    v10);
  v11 = v16[0];
  v12 = InjectionRawInputProvider::PopulatePointerInputInfo(a1, *(_QWORD *)(v6 + 24), a3, a2, v16[0]);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 182LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_12;
  }
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)(a1 + 104),
    &v18,
    *(const unsigned __int8 **)(v6 + 24));
  if ( v18 == *(_QWORD *)(a1 + 112) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x8000FFFFLL);
    v13 = -2147418113;
LABEL_12:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v16);
    return v13;
  }
  v12 = InputInfoValidator::OnInputReport(*(InputInfoValidator **)(v18 + 24), v11, v15);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 194LL;
    goto LABEL_11;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**(_QWORD **)(a1 + 24) + 24LL))(
          *(_QWORD *)(a1 + 24),
          v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 196LL;
    goto LABEL_11;
  }
  if ( v16[0] )
    operator delete[](v16[0]);
  return 0LL;
}
