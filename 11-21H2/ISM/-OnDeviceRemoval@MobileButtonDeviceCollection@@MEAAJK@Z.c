/*
 * XREFs of ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800C4C80
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18004C898 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800C4720 (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800CC060 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnDeviceRemoval(MobileButtonDeviceCollection *this, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int8 *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // r15
  unsigned __int16 *v13; // r12
  unsigned __int16 *i; // rsi
  DWORD TickCount; // edi
  int ButtonInfo; // edi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 appended; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-A8h] BYREF
  void *v27[2]; // [rsp+60h] [rbp-A0h]
  _BYTE v28[24]; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+88h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+C78h] [rbp+B78h]

  v24 = a2;
  memset_0(v28, 0, 0xBC0uLL);
  v29 = 3008;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 345,
    v25,
    (const unsigned __int8 *)&v24);
  v6 = (unsigned __int8 *)v25[0];
  if ( v25[0] == *((_QWORD *)this + 346) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  *(_OWORD *)v27 = *(_OWORD *)(v25[0] + 24LL);
  gsl::details::extent_type<-1>::extent_type<-1>(
    v25,
    (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v27, 8)),
    v4,
    v5);
  if ( v25[0] == -1LL || (v12 = v27[0], v9 = 0LL, !v27[0]) && v25[0] )
  {
    _o_terminate(v9, v8, v10, v11);
    __debugbreak();
    JUMPOUT(0x1800C4EF0LL);
  }
  v13 = (unsigned __int16 *)((char *)v27[0] + 2 * v25[0]);
  for ( i = (unsigned __int16 *)v27[0]; i != v13; ++i )
  {
    if ( *i )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      ButtonInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                     (MobileButtonDeviceCollection *)*i,
                     a2,
                     TickCount,
                     PerformanceCount,
                     *i,
                     0,
                     (struct InputInfo *)v28);
      if ( ButtonInfo < 0 )
      {
        v18 = 173LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
          (const char *)(unsigned int)ButtonInfo);
        return (unsigned int)ButtonInfo;
      }
      ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v28);
      if ( ButtonInfo < 0 )
      {
        v18 = 179LL;
        goto LABEL_15;
      }
    }
  }
  ButtonInfo = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  if ( ButtonInfo < 0 )
  {
    v18 = 183LL;
    goto LABEL_15;
  }
  appended = std::_Fnv1a_append_bytes(v17, v6 + 16, 4uLL);
  v20 = *((_QWORD *)this + 348);
  v21 = 2 * (*((_QWORD *)this + 351) & appended);
  if ( *(unsigned __int8 **)(v20 + 16 * (*((_QWORD *)this + 351) & appended) + 8) == v6 )
  {
    if ( *(unsigned __int8 **)(v20 + 16 * (*((_QWORD *)this + 351) & appended)) == v6 )
    {
      v22 = *((_QWORD *)this + 346);
      *(_QWORD *)(v20 + 8 * v21) = v22;
    }
    else
    {
      v22 = *((_QWORD *)v6 + 1);
    }
    *(_QWORD *)(v20 + 8 * v21 + 8) = v22;
  }
  else if ( *(unsigned __int8 **)(v20 + 16 * (*((_QWORD *)this + 351) & appended)) == v6 )
  {
    *(_QWORD *)(v20 + 16 * (*((_QWORD *)this + 351) & appended)) = *(_QWORD *)v6;
  }
  v23 = *(_QWORD *)v6;
  --*((_QWORD *)this + 347);
  **((_QWORD **)v6 + 1) = v23;
  *(_QWORD *)(v23 + 8) = *((_QWORD *)v6 + 1);
  std::_Deallocate<16,0>(v6, 0x28uLL);
  operator delete[](v12);
  return 0LL;
}
