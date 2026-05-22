/*
 * XREFs of ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18002AB0C
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18002A2EC (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18002ACE4 (-Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003A998 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18003A998.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??R?$default_delete@VSystemControlDeviceCollection@@@std@@QEBAXPEAVSystemControlDeviceCollection@@@Z @ 0x1800C6BD0 (--R-$default_delete@VSystemControlDeviceCollection@@@std@@QEBAXPEAVSystemControlDeviceCollection.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SystemControlDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct SystemControlDeviceCollection **a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  _QWORD *v10; // rax
  _DWORD *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a1 || !a3 || !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)0x80070057LL,
      v18);
    return 2147942487LL;
  }
  v8 = malloc(0xB08uLL);
  v9 = v8;
  if ( v8 )
    memset_0(v8, 0, 0xB08uLL);
  v19 = (int)v9;
  if ( v9 )
  {
    v9[2] = 1;
    *((_QWORD *)v9 + 2) = a1;
    v9[8] = 0;
    memset_0(v9 + 22, 0, 0x218uLL);
    memset_0(v9 + 156, 0, 0x800uLL);
    v9[668] = 0;
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 335) = 0LL;
    v9[672] = 0;
    *((_QWORD *)v9 + 337) = 0LL;
    *((_OWORD *)v9 + 170) = 0LL;
    *((_BYTE *)v9 + 2736) = 0;
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 343) = 0LL;
    v9[688] = 0;
    *(_QWORD *)v9 = &SystemControlDeviceCollection::`vftable';
    v9[690] = 0;
    *((_QWORD *)v9 + 346) = 0LL;
    *((_QWORD *)v9 + 347) = 0LL;
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
    *v10 = v10;
    v10[1] = v10;
    *((_QWORD *)v9 + 346) = v10;
    *((_QWORD *)v9 + 348) = 0LL;
    *((_QWORD *)v9 + 349) = 0LL;
    *((_QWORD *)v9 + 350) = 0LL;
    *((_QWORD *)v9 + 351) = 7LL;
    *((_QWORD *)v9 + 352) = 8LL;
    v9[690] = 1065353216;
    std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>>>>>::_Assign_grow(
      v9 + 696,
      16LL,
      *((_QWORD *)v9 + 346));
    *((_QWORD *)v9 + 3) = a2;
  }
  else
  {
    v9 = 0LL;
  }
  v11 = v9;
  if ( !v9 )
  {
    v14 = -2147024882;
    v16 = 2147942414LL;
    v17 = 27LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)v16,
      v19);
    goto LABEL_11;
  }
  v12 = SystemControlDeviceCollection::Initialize((SystemControlDeviceCollection *)v9, a3);
  v14 = v12;
  if ( v12 < 0 )
  {
    v16 = (unsigned int)v12;
    v17 = 29LL;
    goto LABEL_17;
  }
  v11 = 0LL;
  *a4 = (struct SystemControlDeviceCollection *)v9;
  v14 = 0;
LABEL_11:
  if ( v11 )
    std::default_delete<SystemControlDeviceCollection>::operator()(v13, v11);
  return v14;
}
