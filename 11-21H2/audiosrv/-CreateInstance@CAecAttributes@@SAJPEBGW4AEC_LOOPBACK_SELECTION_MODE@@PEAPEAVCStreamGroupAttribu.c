/*
 * XREFs of ?CreateInstance@CAecAttributes@@SAJPEBGW4AEC_LOOPBACK_SELECTION_MODE@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x1801053D8
 * Callers:
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HHAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18002BA30 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?Clone@CAecAttributes@@UEBAJPEAPEAVCStreamGroupAttributes@@@Z @ 0x1801053C0 (-Clone@CAecAttributes@@UEBAJPEAPEAVCStreamGroupAttributes@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAecAttributes::CreateInstance(const unsigned __int16 *a1, int a2, _QWORD *a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  int v7; // esi
  void (__fastcall ***v8)(_QWORD, __int64); // rbx
  __int64 v9; // rdx
  char **v10; // r14
  void *v11; // rcx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r12
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v7 = 0;
  if ( v5 )
  {
    v5[2] = 0;
    *(_QWORD *)v5 = &CAecAttributes::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  v8 = (void (__fastcall ***)(_QWORD, __int64))v6;
  if ( v6 )
  {
    if ( a1 )
    {
      v10 = (char **)(v6 + 4);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)v6 + 2,
        0LL);
      v12 = -1LL;
      do
        ++v12;
      while ( a1[v12] );
      *v10 = 0LL;
      v13 = v12 + 1;
      if ( v12 + 1 >= v12 && is_mul_ok(v13, 2uLL) )
      {
        v7 = CTCoAllocPolicy::Alloc(v11, (v13 * (unsigned __int128)2uLL) >> 64, 2 * v13, (void **)v6 + 2);
        if ( v7 >= 0 )
        {
          StringCchCopyNExW(*v10, v12 + 1, a1, v12);
          v7 = 0;
          goto LABEL_13;
        }
      }
      else
      {
        v7 = -2147024362;
      }
      v9 = 29LL;
      goto LABEL_19;
    }
LABEL_13:
    v6[6] = a2;
    v8 = 0LL;
    *a3 = v6;
    goto LABEL_14;
  }
  v7 = -2147024882;
  v9 = 25LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp",
    (const char *)(unsigned int)v7);
LABEL_14:
  if ( v8 )
    (**v8)(v8, 1LL);
  return (unsigned int)v7;
}
