/*
 * XREFs of ?GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@PEAUIComCatalog@@AEAV?$vector@EV?$allocator@E@std@@@3@PEAUIPropertyStore@@@Z @ 0x140065144
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x14002B690 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140006E98 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z @ 0x14002D320 (-make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z.c)
 *     ??$insert@PEBE$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1@Z @ 0x140064AF8 (--$insert@PEBE$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@@@Z @ 0x1400656B8 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
void __fastcall GetCompositeModuleInfo(__int64 a1, unsigned int a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  const char *v8; // r9
  char *v9; // rbx
  char **v10; // r12
  _BYTE *v11; // rbx
  void **cotaskmem_string_nothrow; // rdi
  __int64 v13; // rax
  const char *v14; // r9
  _BYTE *v15; // rdi
  void **v16; // rsi
  __int64 v17; // rax
  _BYTE *v18; // rsi
  void **v19; // r13
  __int64 v20; // rax
  const char *v21; // r9
  const char *v22; // r9
  LPVOID v23; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v24[2]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v25[6]; // [rsp+5Ah] [rbp-9Eh] BYREF
  LPVOID v26; // [rsp+60h] [rbp-98h] BYREF
  LPVOID v27; // [rsp+68h] [rbp-90h] BYREF
  unsigned int v28; // [rsp+70h] [rbp-88h]
  char **v29; // [rsp+78h] [rbp-80h]
  LPVOID pv; // [rsp+80h] [rbp-78h] BYREF
  LPVOID v31; // [rsp+88h] [rbp-70h] BYREF
  LPVOID v32; // [rsp+90h] [rbp-68h] BYREF
  __int64 v33; // [rsp+98h] [rbp-60h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-48h] BYREF
  _QWORD v37[8]; // [rsp+B8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v28 = 0;
  v6 = a5;
  while ( 1 )
  {
    v7 = *a3;
    if ( v28 >= (unsigned __int64)((a3[1] - *a3) >> 4) )
      return;
    try
    {
      v9 = (char *)(16LL * v28);
      v23 = v9;
      v10 = (char **)(v6 + 8);
      v29 = (char **)(v6 + 8);
      std::vector<unsigned char>::insert<unsigned char const *,0>(
        (_QWORD *)v6,
        &v33,
        *(char **)(v6 + 8),
        &v9[v7],
        &v9[v7 + 16]);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xFC,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
        v8);
      v6 = a5;
      v9 = (char *)v23;
      v10 = v29;
    }
    v26 = 0LL;
    v27 = 0LL;
    v23 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v23,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v27,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v26,
      0LL);
    GetModuleInfo(a1, a2, &v9[*a3], a4, &v26, &v27, &v23, v24, a6);
    v11 = v26;
    if ( !v26 )
    {
      cotaskmem_string_nothrow = (void **)wil::make_cotaskmem_string_nothrow((wil *)&pv, &word_1400B6CA8);
      if ( &v26 != cotaskmem_string_nothrow )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v26,
          *cotaskmem_string_nothrow);
        *cotaskmem_string_nothrow = 0LL;
        v11 = v26;
      }
      if ( pv )
        CoTaskMemFree(pv);
      if ( !v11 )
        break;
    }
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)&v11[2 * v13] );
    try
    {
      std::vector<unsigned char>::insert<unsigned char const *,0>((_QWORD *)v6, &v34, *v10, v11, &v11[2 * v13 + 2]);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x117,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
        v14);
      v6 = a5;
      v11 = v26;
      v10 = v29;
    }
    v15 = v27;
    if ( !v27 )
    {
      v16 = (void **)wil::make_cotaskmem_string_nothrow((wil *)&v31, &word_1400B6CA8);
      if ( &v27 != v16 )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v27,
          *v16);
        *v16 = 0LL;
        v15 = v27;
      }
      if ( v31 )
        CoTaskMemFree(v31);
      if ( !v15 )
      {
        if ( v23 )
          CoTaskMemFree(v23);
        goto LABEL_26;
      }
    }
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)&v15[2 * v17] );
    std::vector<unsigned char>::insert<unsigned char const *,0>((_QWORD *)v6, &v35, *v10, v15, &v15[2 * v17 + 2]);
    v18 = v23;
    if ( !v23 )
    {
      v19 = (void **)wil::make_cotaskmem_string_nothrow((wil *)&v32, &word_1400B6CA8);
      if ( &v23 != v19 )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v23,
          *v19);
        *v19 = 0LL;
        v18 = v23;
      }
      if ( v32 )
        CoTaskMemFree(v32);
      if ( !v18 )
      {
        CoTaskMemFree(v15);
LABEL_26:
        CoTaskMemFree(v11);
        return;
      }
    }
    v20 = -1LL;
    do
      ++v20;
    while ( *(_WORD *)&v18[2 * v20] );
    try
    {
      std::vector<unsigned char>::insert<unsigned char const *,0>((_QWORD *)v6, &v36, *v10, v18, &v18[2 * v20 + 2]);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x13F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
        v21);
      v6 = a5;
      v11 = v26;
      v15 = v27;
      v18 = v23;
      v10 = v29;
    }
    try
    {
      std::vector<unsigned char>::insert<unsigned char const *,0>((_QWORD *)v6, v37, *v10, v24, v25);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x148,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
        v22);
      v6 = a5;
      v11 = v26;
      v15 = v27;
      v18 = v23;
    }
    CoTaskMemFree(v18);
    CoTaskMemFree(v15);
    CoTaskMemFree(v11);
    ++v28;
  }
  if ( v23 )
    CoTaskMemFree(v23);
  if ( v27 )
    CoTaskMemFree(v27);
}
