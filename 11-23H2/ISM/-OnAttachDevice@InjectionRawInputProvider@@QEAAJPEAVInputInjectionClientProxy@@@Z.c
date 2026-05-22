/*
 * XREFs of ?OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800E83B4
 * Callers:
 *     ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801B66B0 (-InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@1@AEBI@Z @ 0x1800985C8 (--$find@X@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$.c)
 *     ??$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@0@XZ @ 0x1800B416C (--$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA-AV-$unique_ptr@ULegacyDeviceInfo@@U-$default_d.c)
 *     ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800B41F8 (--1-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??$emplace@AEAKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@1@@Z @ 0x1800E7670 (--$emplace@AEAKV-$unique_ptr@VInputInfoValidator@@U-$default_delete@VInputInfoValidator@@@std@@@.c)
 *     ??$emplace@IV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAI$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x1800E7824 (--$emplace@IV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@@-.c)
 *     ??$make_unique@VInputInfoValidator@@$$V$0A@@std@@YA?AV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@0@XZ @ 0x1800E79D8 (--$make_unique@VInputInfoValidator@@$$V$0A@@std@@YA-AV-$unique_ptr@VInputInfoValidator@@U-$defau.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InjectionRawInputProvider::OnAttachDevice(
        InjectionRawInputProvider *this,
        struct InputInjectionClientProxy *a2)
{
  int v5; // eax
  unsigned __int8 *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  _BYTE v9[16]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v11; // [rsp+60h] [rbp+30h] BYREF
  void *v12; // [rsp+68h] [rbp+38h] BYREF
  InputInfoValidator *v13; // [rsp+70h] [rbp+40h] BYREF

  v11 = *((_DWORD *)a2 + 10);
  std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::find<void>(
    (_QWORD *)this + 5,
    &v12,
    (const unsigned __int8 *)&v11);
  if ( v12 == *((void **)this + 6) )
  {
    std::make_unique<LegacyDeviceInfo,,0>(&v12);
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
    v6 = (unsigned __int8 *)v12;
    *(_DWORD *)v12 = v5;
    *((_DWORD *)v6 + 1) = 8;
    v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, InjectionRawInputProvider *))(**((_QWORD **)this + 3)
                                                                                           + 40LL))(
           *((_QWORD *)this + 3),
           v6,
           this);
    v8 = v7;
    if ( v7 >= 0 )
    {
      std::make_unique<InputInfoValidator,,0>(&v13);
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<InputInfoValidator>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>>,0>>::emplace<unsigned long &,std::unique_ptr<InputInfoValidator>>(
        (float *)this + 26,
        (__int64)v9,
        v6,
        (__int64 *)&v13);
      v11 = *((_DWORD *)a2 + 10);
      std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::emplace<unsigned int,std::unique_ptr<LegacyDeviceInfo>>(
        (float *)this + 10,
        (__int64)v9,
        (unsigned __int8 *)&v11,
        (__int64 *)&v12);
      if ( v13 )
        (*(void (__fastcall **)(InputInfoValidator *, __int64))(*(_QWORD *)v13 + 24LL))(v13, 1LL);
      if ( v12 )
        operator delete(v12);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x82,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
        (const char *)(unsigned int)v7);
      std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(&v12);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
