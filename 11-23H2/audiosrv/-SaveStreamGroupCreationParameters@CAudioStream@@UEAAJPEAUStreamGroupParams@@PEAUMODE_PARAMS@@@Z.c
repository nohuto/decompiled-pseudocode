/*
 * XREFs of ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x18000FFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?4U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@$0A@@?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010218 (--$-4U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@$0A@@-$unique_ptr@UAUDIO_DEVICE_MODE.c)
 *     ??$?4U?$default_delete@UMODE_PARAMS@@@std@@$0A@@?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001024C (--$-4U-$default_delete@UMODE_PARAMS@@@std@@$0A@@-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMO.c)
 *     ?SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z @ 0x1800108F0 (-SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z.c)
 *     ?Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z @ 0x180010C64 (-Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z.c)
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x180016C24 (--1StreamGroupParams@@QEAA@XZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18004B11C (--1-$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U-$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@s.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x18004B140 (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EBC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::SaveStreamGroupCreationParameters(
        CAudioStream *this,
        struct StreamGroupParams *a2,
        struct MODE_PARAMS *a3)
{
  int v6; // ebx
  StreamGroupParams *v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // r14
  int v12; // edi
  void *v13; // rcx
  _DWORD *v14; // rax
  _DWORD *v15; // rcx
  LPVOID v16; // rax
  unsigned int i; // edx
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *v20; // rcx
  void *v21; // rbx
  __int64 v23; // rdx
  __int64 v24; // r9
  int v25; // eax
  void *v26; // rcx
  int v27; // [rsp+20h] [rbp-40h]
  void *v28; // [rsp+30h] [rbp-30h] BYREF
  void *v29; // [rsp+38h] [rbp-28h] BYREF
  LPVOID *p_pv; // [rsp+40h] [rbp-20h]
  struct tWAVEFORMATEX *v31; // [rsp+48h] [rbp-18h] BYREF
  char v32; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  LPVOID pv; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+58h] BYREF

  p_pv = (LPVOID *)((char *)this + 624);
  v31 = 0LL;
  v32 = 1;
  v6 = StreamGroupParams::Clone(a2, (struct StreamGroupParams **)&v31);
  if ( v32 )
  {
    v7 = (StreamGroupParams *)*p_pv;
    *p_pv = v31;
    if ( v7 )
    {
      StreamGroupParams::~StreamGroupParams(v7);
      operator delete(v7, 0x58uLL);
    }
  }
  if ( v6 < 0 )
  {
    v23 = 2094LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v6,
      v27);
    return (unsigned int)v6;
  }
  v6 = CAudioStream::SetProcessingModeParameters(this, (struct StreamGroupParams *)((char *)a2 + 56));
  if ( v6 < 0 )
  {
    v23 = 2096LL;
    goto LABEL_29;
  }
  if ( !a3 )
    return 0LL;
  v8 = (__int64 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    v28 = 0LL;
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x836,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL,
      v27);
    goto LABEL_44;
  }
  *v8 = 0LL;
  v8[1] = 0LL;
  v28 = v8;
  v10 = *((_QWORD *)a3 + 1);
  if ( !v10 )
  {
LABEL_25:
    std::unique_ptr<MODE_PARAMS>::operator=<std::default_delete<MODE_PARAMS>,0>((char *)this + 632, &v28);
    v21 = v28;
    if ( v28 )
    {
      v26 = (void *)*((_QWORD *)v28 + 1);
      if ( v26 )
        operator delete(v26, 0x50uLL);
      wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>(v21);
      operator delete(v21, 0x10uLL);
    }
    return 0LL;
  }
  v11 = 0LL;
  v35 = 0LL;
  if ( !*(_QWORD *)(v10 + 24) )
    goto LABEL_10;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &v35,
    0LL);
  v24 = -1LL;
  do
    ++v24;
  while ( *(_WORD *)(*(_QWORD *)(v10 + 24) + 2 * v24) );
  v25 = _AllocStringWorker<CTCoAllocPolicy>();
  v12 = v25;
  if ( v25 >= 0 )
  {
    v11 = v35;
LABEL_10:
    pv = 0LL;
    p_pv = &pv;
    v31 = 0LL;
    v32 = 1;
    v12 = CloneWaveFormat(*(const struct tWAVEFORMATEX **)(v10 + 16), &v31);
    if ( v32 )
    {
      v13 = *p_pv;
      *p_pv = v31;
      if ( v13 )
        CoTaskMemFree(v13);
    }
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x842,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v12,
        v27);
    }
    else
    {
      v14 = operator new[](16 * (*(unsigned int *)(v10 + 60) + 4LL), (const struct std::nothrow_t *)&std::nothrow);
      v15 = v14;
      v29 = v14;
      if ( v14 )
      {
        *v14 = *(_DWORD *)v10;
        v14[1] = *(_DWORD *)(v10 + 4);
        v14[2] = *(_DWORD *)(v10 + 8);
        v16 = pv;
        pv = 0LL;
        *((_QWORD *)v15 + 2) = v16;
        *((_QWORD *)v15 + 3) = v11;
        v15[8] = *(_DWORD *)(v10 + 32);
        *(_OWORD *)(v15 + 9) = *(_OWORD *)(v10 + 36);
        v15[13] = *(_DWORD *)(v10 + 52);
        v15[14] = *(_DWORD *)(v10 + 56);
        v15[15] = *(_DWORD *)(v10 + 60);
        for ( i = 0; i < *(_DWORD *)(v10 + 60); ++i )
          *(_OWORD *)&v15[4 * i + 16] = *(_OWORD *)(v10 + 16 * (i + 4LL));
        std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::operator=<std::default_delete<AUDIO_DEVICE_MODE_DESCRIPTOR>,0>(
          v9 + 1,
          &v29);
        v18 = *v9;
        *v9 = 0LL;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v19 = *(_QWORD *)a3;
        if ( *(_QWORD *)a3 )
        {
          *v9 = v19;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        }
        else
        {
          *v9 = 0LL;
        }
        if ( v29 )
          operator delete(v29, 0x50uLL);
        v20 = pv;
        pv = 0LL;
        if ( v20 )
          CoTaskMemFree(v20);
        goto LABEL_25;
      }
      v12 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x846,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)0x8007000ELL,
        v27);
      std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>(&v29);
    }
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    goto LABEL_36;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v25,
    v27);
LABEL_36:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v35);
LABEL_44:
  std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>(&v28);
  return (unsigned int)v12;
}
