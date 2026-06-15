/*
 * XREFs of ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x18004A494
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180058604 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18003D570 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004716C (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHSTRING__@@@Z @ 0x18004A980 (-reset@-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YA.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x180064F3C (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall InitializeSpatialAudioFormatSubtypeInfoArray(struct SpatialAudioFormatSubtypeInfo *a1)
{
  int ActivationFactory; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rdi
  int v6; // eax
  char *StringRawBuffer; // rax
  const char *v8; // r9
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, HSTRING *); // rdi
  int v11; // eax
  char *v12; // rax
  const char *v13; // r9
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HSTRING *); // rdi
  int v16; // eax
  char *v17; // rax
  const char *v18; // r9
  struct SpatialAudioFormatSubtypeInfo *cotaskmem_string_nothrow; // rax
  struct SpatialAudioFormatSubtypeInfo *v20; // rdi
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, HSTRING *); // rdi
  int v23; // eax
  char *v24; // rax
  const char *v25; // r9
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, HSTRING *); // rdi
  int v28; // eax
  char *v29; // rax
  const char *v30; // r9
  int v31; // eax
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, HSTRING *); // rdi
  int v34; // eax
  char *v35; // rax
  const char *v36; // r9
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rdx
  void *v42; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v43; // [rsp+28h] [rbp-48h] BYREF
  __int64 v44; // [rsp+30h] [rbp-40h] BYREF
  __int64 v45; // [rsp+38h] [rbp-38h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v44 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Media.Audio.SpatialAudioFormatSubtype", 0x2Du, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_b3de8a47_83ee_4266_a945_bedf507afeed, &v44);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)ActivationFactory,
      (int)v42);
    goto LABEL_35;
  }
  v43 = 0LL;
  v4 = v44;
  v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v44 + 64LL);
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v43,
    0LL);
  v6 = v5(v4, &v43);
  v3 = v6;
  if ( v6 < 0 )
  {
    v38 = (unsigned int)v6;
    v39 = 86LL;
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (unsigned int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)v38,
      (int)v42);
    goto LABEL_34;
  }
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(v43, 0LL);
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v42,
    StringRawBuffer,
    0xFFFFFFFFFFFFFFFFuLL,
    v8);
  if ( (void **)((char *)a1 + 40) != &v42 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)a1 + 40,
      v42);
    v42 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v42);
  if ( !*((_QWORD *)a1 + 5) )
  {
    v39 = 88LL;
LABEL_48:
    v3 = -2147024882;
    v38 = 2147942414LL;
    goto LABEL_49;
  }
  *((_BYTE *)a1 + 33) = 1;
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v43,
    0LL);
  v9 = v44;
  v10 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v44 + 72LL);
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v43,
    0LL);
  v11 = v10(v9, &v43);
  v3 = v11;
  if ( v11 < 0 )
  {
    v38 = (unsigned int)v11;
    v39 = 93LL;
    goto LABEL_49;
  }
  v12 = (char *)WindowsGetStringRawBuffer(v43, 0LL);
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v42,
    v12,
    0xFFFFFFFFFFFFFFFFuLL,
    v13);
  if ( (void **)((char *)a1 + 104) != &v42 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)a1 + 104,
      v42);
    v42 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v42);
  if ( !*((_QWORD *)a1 + 13) )
  {
    v39 = 95LL;
    goto LABEL_48;
  }
  *((_BYTE *)a1 + 97) = 1;
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v43,
    0LL);
  v14 = v44;
  v15 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v44 + 56LL);
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v43,
    0LL);
  v16 = v15(v14, &v43);
  v3 = v16;
  if ( v16 < 0 )
  {
    v38 = (unsigned int)v16;
    v39 = 100LL;
    goto LABEL_49;
  }
  v17 = (char *)WindowsGetStringRawBuffer(v43, 0LL);
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v42,
    v17,
    0xFFFFFFFFFFFFFFFFuLL,
    v18);
  if ( (void **)((char *)a1 + 72) != &v42 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)a1 + 72,
      v42);
    v42 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v42);
  if ( !*((_QWORD *)a1 + 9) )
  {
    v39 = 102LL;
    goto LABEL_48;
  }
  *((_BYTE *)a1 + 65) = 1;
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v43,
    0LL);
  cotaskmem_string_nothrow = (struct SpatialAudioFormatSubtypeInfo *)wil::make_cotaskmem_string_nothrow(
                                                                       &v42,
                                                                       L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}",
                                                                       -1LL);
  v20 = cotaskmem_string_nothrow;
  if ( (struct SpatialAudioFormatSubtypeInfo *)((char *)a1 + 8) != cotaskmem_string_nothrow )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)a1 + 8,
      *(_QWORD *)cotaskmem_string_nothrow);
    *(_QWORD *)v20 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v42);
  if ( !*((_QWORD *)a1 + 1) )
  {
    v39 = 109LL;
    goto LABEL_48;
  }
  *((_BYTE *)a1 + 1) = 1;
  v21 = v44;
  v22 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v44 + 80LL);
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v43,
    0LL);
  v23 = v22(v21, &v43);
  v3 = v23;
  if ( v23 < 0 )
  {
    v38 = (unsigned int)v23;
    v39 = 113LL;
    goto LABEL_49;
  }
  v24 = (char *)WindowsGetStringRawBuffer(v43, 0LL);
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v42,
    v24,
    0xFFFFFFFFFFFFFFFFuLL,
    v25);
  if ( (void **)((char *)a1 + 136) != &v42 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)a1 + 136,
      v42);
    v42 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v42);
  if ( !*((_QWORD *)a1 + 17) )
  {
    v39 = 115LL;
    goto LABEL_48;
  }
  *((_BYTE *)a1 + 129) = 1;
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v43,
    0LL);
  v26 = v44;
  v27 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v44 + 88LL);
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v43,
    0LL);
  v28 = v27(v26, &v43);
  v3 = v28;
  if ( v28 < 0 )
  {
    v38 = (unsigned int)v28;
    v39 = 120LL;
    goto LABEL_49;
  }
  v29 = (char *)WindowsGetStringRawBuffer(v43, 0LL);
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v42,
    v29,
    0xFFFFFFFFFFFFFFFFuLL,
    v30);
  if ( (void **)((char *)a1 + 168) != &v42 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)a1 + 168,
      v42);
    v42 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v42);
  if ( !*((_QWORD *)a1 + 21) )
  {
    v39 = 122LL;
    goto LABEL_48;
  }
  *((_BYTE *)a1 + 161) = 1;
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v43,
    0LL);
  v45 = 0LL;
  v31 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v44)(
          v44,
          &GUID_4565e6cb_d95b_5621_b6af_0e8849c57c80,
          &v45);
  v3 = v31;
  if ( v31 < 0 )
  {
    v40 = (unsigned int)v31;
    v41 = 128LL;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (unsigned int)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)v40,
      (int)v42);
    goto LABEL_33;
  }
  v32 = v45;
  v33 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v45 + 48LL);
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v43,
    0LL);
  v34 = v33(v32, &v43);
  v3 = v34;
  if ( v34 < 0 )
  {
    v40 = (unsigned int)v34;
    v41 = 129LL;
    goto LABEL_53;
  }
  v35 = (char *)WindowsGetStringRawBuffer(v43, 0LL);
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v42,
    v35,
    0xFFFFFFFFFFFFFFFFuLL,
    v36);
  if ( (void **)((char *)a1 + 200) != &v42 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)a1 + 200,
      v42);
    v42 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v42);
  if ( !*((_QWORD *)a1 + 25) )
  {
    v3 = -2147024882;
    v40 = 2147942414LL;
    v41 = 131LL;
    goto LABEL_53;
  }
  *((_BYTE *)a1 + 193) = 1;
  v3 = 0;
LABEL_33:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v45);
LABEL_34:
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v43);
LABEL_35:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v44);
  return v3;
}
