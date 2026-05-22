/*
 * XREFs of ?OnDdiDeviceUpdated@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x1800C11D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceUpdated(
        SpatialRimDeviceCollection *this,
        int a2,
        const struct MPCSourceDeviceInfo *a3)
{
  __int64 v5; // rax
  __int64 result; // rax
  _OWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  _OWORD *v10; // rdx
  _OWORD *v11; // rcx
  int v12; // eax
  const char *v13; // r9
  unsigned int v14; // ebx
  _BYTE v15[968]; // [rsp+20h] [rbp-3C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3E8h] [rbp+0h]
  __int64 v17; // [rsp+3F0h] [rbp+8h] BYREF
  int v18; // [rsp+3F8h] [rbp+10h] BYREF

  v18 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 364,
    &v17,
    (const unsigned __int8 *)&v18);
  v5 = v17;
  if ( v17 == *((_QWORD *)this + 365) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  else
  {
    v7 = v15;
    v8 = 7LL;
    v9 = 7LL;
    do
    {
      *v7 = *(_OWORD *)a3;
      v7[1] = *((_OWORD *)a3 + 1);
      v7[2] = *((_OWORD *)a3 + 2);
      v7[3] = *((_OWORD *)a3 + 3);
      v7[4] = *((_OWORD *)a3 + 4);
      v7[5] = *((_OWORD *)a3 + 5);
      v7[6] = *((_OWORD *)a3 + 6);
      v7 += 8;
      *(v7 - 1) = *((_OWORD *)a3 + 7);
      a3 = (const struct MPCSourceDeviceInfo *)((char *)a3 + 128);
      --v9;
    }
    while ( v9 );
    *v7 = *(_OWORD *)a3;
    v7[1] = *((_OWORD *)a3 + 1);
    v7[2] = *((_OWORD *)a3 + 2);
    *((_QWORD *)v7 + 6) = *((_QWORD *)a3 + 6);
    v10 = (_OWORD *)(*(_QWORD *)(v5 + 24) + 596LL);
    v11 = v15;
    do
    {
      *v10 = *v11;
      v10[1] = v11[1];
      v10[2] = v11[2];
      v10[3] = v11[3];
      v10[4] = v11[4];
      v10[5] = v11[5];
      v10[6] = v11[6];
      v10 += 8;
      *(v10 - 1) = v11[7];
      v11 += 8;
      --v8;
    }
    while ( v8 );
    *v10 = *v11;
    v10[1] = v11[1];
    v10[2] = v11[2];
    *((_QWORD *)v10 + 6) = *((_QWORD *)v11 + 6);
    try
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
      v14 = v12;
      if ( v12 >= 0 )
      {
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x361,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v12);
        result = v14;
      }
    }
    catch ( ... )
    {
      LODWORD(v17) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x364,
                       (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimde"
                                     "vicecollection.cpp",
                       v13);
      return (unsigned int)v17;
    }
  }
  return result;
}
