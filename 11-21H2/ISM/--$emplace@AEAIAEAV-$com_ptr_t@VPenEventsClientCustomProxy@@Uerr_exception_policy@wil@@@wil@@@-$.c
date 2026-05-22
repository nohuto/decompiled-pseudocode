/*
 * XREFs of ??$emplace@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEAIAEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18003A43C
 * Callers:
 *     ?AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEventsClientProxy@@@Z @ 0x18003A120 (-AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEve.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800829B0 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::emplace<unsigned int &,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy> &>(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        void (__fastcall ****a4)(_QWORD))
{
  __int64 **v8; // r13
  unsigned __int64 v9; // rsi
  _DWORD *v10; // rbx
  void (__fastcall ***v11)(_QWORD); // rcx
  __int64 v12; // rbp
  __int64 v13; // rcx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 *v19; // rdx
  _QWORD *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 *v23; // r9
  __int64 v25; // rax

  if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v8 = (__int64 **)(a1 + 8);
  v9 = 0LL;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v10[4] = *a3;
  v11 = *a4;
  *((_QWORD *)v10 + 3) = *a4;
  if ( v11 )
    (**v11)(v11);
  v12 = 0xCBF29CE484222325uLL;
  do
  {
    v12 = 0x100000001B3LL * (*((unsigned __int8 *)v10 + v9 + 16) ^ (unsigned __int64)v12);
    ++v9;
  }
  while ( v9 < 4 );
  v13 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v13 < 0 )
    v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
        + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
  else
    v14 = (float)(int)v13;
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 < 0 )
  {
    v25 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v15 >> 1);
    v16 = (float)(int)v25 + (float)(int)v25;
  }
  else
  {
    v16 = (float)(int)v15;
  }
  if ( (float)(v14 / v16) > *(float *)a1 )
    std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Rehash_for_1(a1);
  v17 = *(_QWORD *)(a1 + 24);
  v18 = *(__int64 **)(v17 + 16 * (v12 & *(_QWORD *)(a1 + 48)) + 8);
  v19 = *v8;
  if ( v18 != *v8 )
  {
    while ( v10[4] != *((_DWORD *)v18 + 4) )
    {
      if ( v18 == *(__int64 **)(v17 + 16 * (v12 & *(_QWORD *)(a1 + 48))) )
      {
        v19 = v18;
        goto LABEL_13;
      }
      v18 = (__int64 *)v18[1];
    }
    v19 = (__int64 *)*v18;
  }
LABEL_13:
  v20 = (_QWORD *)v19[1];
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v10 = v19;
  *((_QWORD *)v10 + 1) = v20;
  *v20 = v10;
  v19[1] = (__int64)v10;
  v21 = *(_QWORD *)(a1 + 24);
  v22 = 2 * (v12 & *(_QWORD *)(a1 + 48));
  v23 = *(__int64 **)(v21 + 16 * (v12 & *(_QWORD *)(a1 + 48)));
  if ( v23 == *v8 )
  {
    *(_QWORD *)(v21 + 16 * (v12 & *(_QWORD *)(a1 + 48))) = v10;
  }
  else
  {
    if ( v23 == v19 )
    {
      *(_QWORD *)(v21 + 16 * (v12 & *(_QWORD *)(a1 + 48))) = v10;
      goto LABEL_16;
    }
    if ( *(_QWORD **)(v21 + 16 * (v12 & *(_QWORD *)(a1 + 48)) + 8) != v20 )
      goto LABEL_16;
  }
  *(_QWORD *)(v21 + 8 * v22 + 8) = v10;
LABEL_16:
  *a2 = v10;
  return a2;
}
