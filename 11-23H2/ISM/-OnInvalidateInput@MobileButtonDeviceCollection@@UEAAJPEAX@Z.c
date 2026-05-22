/*
 * XREFs of ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800DE400
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180059188 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     memcpy_0 @ 0x180065920 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800D50AC (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x1800DCA04 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z @ 0x1800DCDB4 (--$_Emplace_reallocate@AEBG@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAGAEBG@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEBA_KAEBW4_Button@@@Z @ 0x1800DD128 (--$count@X@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@s.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800DD808 (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z @ 0x1800DD92C (-HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MobileButtonDeviceCollection::OnInvalidateInput(MobileButtonDeviceCollection *this, void *a2)
{
  int v3; // edx
  int Device; // ebx
  __int64 v5; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rbx
  _BYTE *v10; // r13
  __int64 v11; // rdx
  MobileButtonDeviceCollection *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // r14
  unsigned __int16 *v16; // rsi
  unsigned __int16 *v17; // r12
  _BYTE *v18; // rdi
  DWORD TickCount; // ebx
  int ButtonInfo; // eax
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  unsigned int v23; // [rsp+40h] [rbp-C0h] BYREF
  struct RIMDevice *v24; // [rsp+48h] [rbp-B8h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v26; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v27[16]; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-88h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h]
  void *v30[2]; // [rsp+88h] [rbp-78h]
  _BYTE v31[24]; // [rsp+A0h] [rbp-60h] BYREF
  int v32; // [rsp+B8h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+CA8h] [rbp+BA8h]

  v24 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, 0, a2, &v24, 0LL);
  if ( Device < 0 )
  {
    v5 = 354LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  LODWORD(v24) = **((_DWORD **)v24 + 4);
  v23 = (unsigned int)v24;
  memset_0(v31, v3, 0xBC0uLL);
  v32 = 3008;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 345,
    v27,
    (const unsigned __int8 *)&v23);
  if ( *(_QWORD *)v27 == *((_QWORD *)this + 346) )
  {
    Device = -2147467259;
    v5 = 367LL;
    goto LABEL_3;
  }
  *(_OWORD *)v30 = *(_OWORD *)(*(_QWORD *)v27 + 24LL);
  v9 = (char *)this + 2824;
  *(_OWORD *)Src = 0LL;
  v10 = 0LL;
  v26 = 0LL;
  v29 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v30, 8));
  gsl::details::extent_type<-1>::extent_type<-1>(v27, (unsigned int)v29, v7, v8);
  if ( *(_QWORD *)v27 == -1LL || (v15 = v30[0]) == 0LL && *(_QWORD *)v27 )
  {
    _o_terminate(v12, v11, v13, v14);
    __debugbreak();
    return MobileButtonDeviceCollection::OnInvalidateInput_::_1_::dtor_0();
  }
  v16 = (unsigned __int16 *)v30[0];
  v17 = (unsigned __int16 *)((char *)v30[0] + 2 * *(_QWORD *)v27);
  v18 = Src[1];
  if ( v30[0] == v17 )
  {
LABEL_17:
    memset_0(v15, 0, 2 * v29);
    memcpy_0(v15, Src[0], 2 * ((v18 - (char *)Src[0]) >> 1));
    std::vector<unsigned short>::_Tidy((__int64)Src);
    return 0LL;
  }
  while ( 1 )
  {
    if ( !*v16 || (int)MobileButtonDeviceCollection::HIDUsageToButtonMapping(v12, *v16, &v23) < 0 )
      goto LABEL_16;
    *(_DWORD *)v27 = v23;
    if ( std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::count<void>(
           (__int64)v9,
           v27) )
    {
      if ( v18 == v10 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short const &>((const void **)Src, v18, v16);
        v10 = v26;
        v18 = Src[1];
      }
      else
      {
        *(_WORD *)v18 = *v16;
        v18 += 2;
        Src[1] = v18;
      }
      goto LABEL_16;
    }
    TickCount = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    ButtonInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                   (MobileButtonDeviceCollection *)*v16,
                   (int)v24,
                   TickCount,
                   PerformanceCount,
                   *v16,
                   0,
                   (struct InputInfo *)v31);
    Device = ButtonInfo;
    if ( ButtonInfo < 0 )
      break;
    Device = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v31);
    if ( Device < 0 )
    {
      v21 = (unsigned int)Device;
      v22 = 422LL;
      goto LABEL_24;
    }
    v9 = (char *)this + 2824;
LABEL_16:
    if ( ++v16 == v17 )
      goto LABEL_17;
  }
  v21 = (unsigned int)ButtonInfo;
  v22 = 417LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
    (const char *)v21);
  std::vector<unsigned short>::_Tidy((__int64)Src);
  return (unsigned int)Device;
}
