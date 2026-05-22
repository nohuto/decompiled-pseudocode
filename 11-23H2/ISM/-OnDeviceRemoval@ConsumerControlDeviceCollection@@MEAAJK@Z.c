/*
 * XREFs of ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x1800DF4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800DF150 (-CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800E5670 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnDeviceRemoval(
        ConsumerControlDeviceCollection *this,
        unsigned int a2)
{
  unsigned __int8 *v4; // rbx
  __int64 v6; // rbp
  _WORD *QuadPart; // r12
  unsigned int v8; // r14d
  DWORD TickCount; // edi
  int ButtonInfo; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 appended; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // [rsp+40h] [rbp-C18h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C10h] BYREF
  LARGE_INTEGER PerformanceCount[2]; // [rsp+50h] [rbp-C08h] BYREF
  _BYTE v21[24]; // [rsp+60h] [rbp-BF8h] BYREF
  int v22; // [rsp+78h] [rbp-BE0h]
  wil::details::in1diag3 *retaddr; // [rsp+C58h] [rbp+0h]

  v18 = a2;
  memset_0(v21, 0, 0xBC0uLL);
  v22 = 3008;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 345,
    &v19,
    (const unsigned __int8 *)&v18);
  v4 = (unsigned __int8 *)v19;
  if ( v19 == *((_QWORD *)this + 346) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v6 = 0LL;
  *(_OWORD *)&PerformanceCount[0].LowPart = *(_OWORD *)(v19 + 24);
  QuadPart = (_WORD *)PerformanceCount[0].QuadPart;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&PerformanceCount[0].LowPart, 8));
  if ( v8 )
  {
    while ( 1 )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(PerformanceCount);
      ButtonInfo = ConsumerControlDeviceCollection::CreateButtonInfo(
                     (ConsumerControlDeviceCollection *)(unsigned __int16)QuadPart[v6],
                     a2,
                     TickCount,
                     PerformanceCount[0],
                     QuadPart[v6],
                     0,
                     (struct InputInfo *)v21);
      if ( ButtonInfo < 0 )
        break;
      ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v21);
      if ( ButtonInfo < 0 )
      {
        v12 = 161LL;
        goto LABEL_11;
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v8 )
        goto LABEL_7;
    }
    v12 = 155LL;
    goto LABEL_11;
  }
LABEL_7:
  ButtonInfo = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  if ( ButtonInfo < 0 )
  {
    v12 = 165LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)(unsigned int)ButtonInfo);
    return (unsigned int)ButtonInfo;
  }
  appended = std::_Fnv1a_append_bytes(v11, v4 + 16, 4uLL);
  v14 = *((_QWORD *)this + 348);
  v15 = 2 * (*((_QWORD *)this + 351) & appended);
  if ( *(unsigned __int8 **)(v14 + 16 * (*((_QWORD *)this + 351) & appended) + 8) == v4 )
  {
    if ( *(unsigned __int8 **)(v14 + 16 * (*((_QWORD *)this + 351) & appended)) == v4 )
    {
      v16 = *((_QWORD *)this + 346);
      *(_QWORD *)(v14 + 8 * v15) = v16;
    }
    else
    {
      v16 = *((_QWORD *)v4 + 1);
    }
    *(_QWORD *)(v14 + 8 * v15 + 8) = v16;
  }
  else if ( *(unsigned __int8 **)(v14 + 16 * (*((_QWORD *)this + 351) & appended)) == v4 )
  {
    *(_QWORD *)(v14 + 16 * (*((_QWORD *)this + 351) & appended)) = *(_QWORD *)v4;
  }
  v17 = *(_QWORD *)v4;
  --*((_QWORD *)this + 347);
  **((_QWORD **)v4 + 1) = v17;
  *(_QWORD *)(v17 + 8) = *((_QWORD *)v4 + 1);
  std::_Deallocate<16,0>(v4, 0x28uLL);
  operator delete[](QuadPart);
  return 0LL;
}
