/*
 * XREFs of ?OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z @ 0x1800E0050
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800DFEE0 (-CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800E5670 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall SystemControlDeviceCollection::OnDeviceRemoval(SystemControlDeviceCollection *this, unsigned int a2)
{
  unsigned __int8 *v4; // rbx
  unsigned __int16 *v6; // rsi
  unsigned __int16 *v7; // r14
  DWORD TickCount; // edi
  int ButtonInfo; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 appended; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+40h] [rbp-C18h] BYREF
  unsigned __int16 *v18; // [rsp+48h] [rbp-C10h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-C08h] BYREF
  union _LARGE_INTEGER v20[3]; // [rsp+60h] [rbp-BF8h] BYREF
  int v21; // [rsp+78h] [rbp-BE0h]
  wil::details::in1diag3 *retaddr; // [rsp+C58h] [rbp+0h]

  v17 = a2;
  memset_0(v20, 0, 0xBC0uLL);
  v21 = 3008;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 345,
    &v18,
    (const unsigned __int8 *)&v17);
  v4 = (unsigned __int8 *)v18;
  if ( v18 == *((unsigned __int16 **)this + 346) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  else
  {
    v6 = v18 + 10;
    v7 = v18 + 30;
    while ( v6 != v7 )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      ButtonInfo = SystemControlDeviceCollection::CreateButtonInfo(
                     (SystemControlDeviceCollection *)*v6,
                     a2,
                     TickCount,
                     PerformanceCount,
                     *v6,
                     0,
                     v20);
      if ( ButtonInfo < 0 )
      {
        v11 = 131LL;
        goto LABEL_12;
      }
      ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v20);
      if ( ButtonInfo < 0 )
      {
        v11 = 137LL;
        goto LABEL_12;
      }
      ++v6;
    }
    ButtonInfo = HIDDeviceCollection::OnDeviceRemoval(this, a2);
    if ( ButtonInfo < 0 )
    {
      v11 = 141LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
        (const char *)(unsigned int)ButtonInfo);
      return (unsigned int)ButtonInfo;
    }
    appended = std::_Fnv1a_append_bytes(v10, v4 + 16, 4uLL);
    v13 = *((_QWORD *)this + 348);
    v14 = 2 * (*((_QWORD *)this + 351) & appended);
    if ( *(unsigned __int8 **)(v13 + 16 * (*((_QWORD *)this + 351) & appended) + 8) == v4 )
    {
      if ( *(unsigned __int8 **)(v13 + 16 * (*((_QWORD *)this + 351) & appended)) == v4 )
      {
        v15 = *((_QWORD *)this + 346);
        *(_QWORD *)(v13 + 8 * v14) = v15;
      }
      else
      {
        v15 = *((_QWORD *)v4 + 1);
      }
      *(_QWORD *)(v13 + 8 * v14 + 8) = v15;
    }
    else if ( *(unsigned __int8 **)(v13 + 16 * (*((_QWORD *)this + 351) & appended)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (*((_QWORD *)this + 351) & appended)) = *(_QWORD *)v4;
    }
    v16 = *(_QWORD *)v4;
    --*((_QWORD *)this + 347);
    **((_QWORD **)v4 + 1) = v16;
    *(_QWORD *)(v16 + 8) = *((_QWORD *)v4 + 1);
    std::_Deallocate<16,0>(v4, 0x40uLL);
    return 0LL;
  }
}
