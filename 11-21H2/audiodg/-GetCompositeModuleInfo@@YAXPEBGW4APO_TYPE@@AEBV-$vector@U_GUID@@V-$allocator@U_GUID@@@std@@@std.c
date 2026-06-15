/*
 * XREFs of ?GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@PEAUIComCatalog@@AEAV?$vector@EV?$allocator@E@std@@@3@@Z @ 0x14002DD48
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBG@Z @ 0x140008CF0 (-PublishApoTelemetry@@YAJPEBG@Z.c)
 * Callees:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG4PEA_N@Z @ 0x140008030 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG4PEA_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140009BF4 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140009C1C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x140031E10 (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     ??$insert@PEBE$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1@Z @ 0x140060C88 (--$insert@PEBE$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GetCompositeModuleInfo(__int64 a1, unsigned int a2, __int64 *a3, struct IComCatalog *a4, __int64 a5)
{
  __int64 v5; // rdx
  char *v6; // rbx
  _WORD *v7; // rbx
  void **cotaskmem_string_nothrow; // r14
  __int64 v9; // rax
  _WORD *v10; // rbx
  void **v11; // r14
  __int64 v12; // rax
  _BYTE v13[2]; // [rsp+40h] [rbp-78h] BYREF
  char v14[6]; // [rsp+42h] [rbp-76h] BYREF
  _WORD *v15; // [rsp+48h] [rbp-70h] BYREF
  _WORD *v16; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-60h]
  void *v18; // [rsp+60h] [rbp-58h] BYREF
  void *v19; // [rsp+68h] [rbp-50h] BYREF
  char v20; // [rsp+70h] [rbp-48h] BYREF
  char v21; // [rsp+78h] [rbp-40h] BYREF
  char v22; // [rsp+80h] [rbp-38h] BYREF
  char v23; // [rsp+88h] [rbp-30h] BYREF

  v17 = 0;
  v5 = *a3;
  if ( (a3[1] - *a3) >> 4 )
  {
    v6 = (char *)(16LL * v17);
    v15 = v6;
    std::vector<unsigned char>::insert<unsigned char const *,0>(
      a5,
      (unsigned int)&v20,
      *(_QWORD *)(a5 + 8),
      v5 + (_DWORD)v6,
      (__int64)&v6[v5 + 16]);
    v15 = 0LL;
    v16 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v16,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v15,
      0LL);
    GetModuleInfo(a1, a2, (const struct _GUID *)&v6[*a3], a4, &v15, &v16, v13);
    v7 = v15;
    if ( v15 )
      goto LABEL_6;
    cotaskmem_string_nothrow = (void **)wil::make_cotaskmem_string_nothrow(&v18, &unk_1400A9588);
    if ( &v15 != (_WORD **)cotaskmem_string_nothrow )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&v15,
        *cotaskmem_string_nothrow);
      *cotaskmem_string_nothrow = 0LL;
      v7 = v15;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v18);
    if ( v7 )
    {
LABEL_6:
      v9 = -1LL;
      do
        ++v9;
      while ( v7[v9] );
      std::vector<unsigned char>::insert<unsigned char const *,0>(
        a5,
        (unsigned int)&v21,
        *(_QWORD *)(a5 + 8),
        (_DWORD)v7,
        (__int64)&v7[v9 + 1]);
      v10 = v16;
      if ( v16 )
        goto LABEL_13;
      v11 = (void **)wil::make_cotaskmem_string_nothrow(&v19, &unk_1400A9588);
      if ( &v16 != (_WORD **)v11 )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&v16,
          *v11);
        *v11 = 0LL;
        v10 = v16;
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v19);
      if ( v10 )
      {
LABEL_13:
        v12 = -1LL;
        do
          ++v12;
        while ( v10[v12] );
        std::vector<unsigned char>::insert<unsigned char const *,0>(
          a5,
          (unsigned int)&v22,
          *(_QWORD *)(a5 + 8),
          (_DWORD)v10,
          (__int64)&v10[v12 + 1]);
        std::vector<unsigned char>::insert<unsigned char const *,0>(
          a5,
          (unsigned int)&v23,
          *(_QWORD *)(a5 + 8),
          (unsigned int)v13,
          (__int64)v14);
        JUMPOUT(0x14004CC05LL);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v16);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v15);
  }
}
