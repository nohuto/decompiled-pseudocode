/*
 * XREFs of ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14006829C
 * Callers:
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140067408 (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140006EE0 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x140006F0C (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007080 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1400210E4 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A200 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14005C650 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFormatConverterPipe::Initialize(
        CPipeInstance **this,
        struct IUnknown *a2,
        const struct tWAVEFORMATEX *a3,
        const WAVEFORMATEX **a4)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  CPipeInstance *v11; // rsi
  void *v12; // rcx
  CPipeInstance *v13; // rax
  void *v14; // rcx
  CPipeInstance *v15; // rdx
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  CPipeInstance *v18; // [rsp+28h] [rbp-28h] BYREF
  LPVOID *p_pv; // [rsp+30h] [rbp-20h]
  struct tWAVEFORMATEX *v20; // [rsp+38h] [rbp-18h] BYREF
  char v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  CFormatConverterPipe::Reset(this);
  v18 = 0LL;
  v8 = CPipeInstance::CreateFormatConverterPipeInstance(a2, a4, &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 49LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_18;
  }
  v11 = v18;
  v8 = CPipeInstance::Initialize(v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 50LL;
    goto LABEL_5;
  }
  v8 = CPipeInstance::ConnectAPOs(v11, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 51LL;
    goto LABEL_5;
  }
  pv = 0LL;
  p_pv = &pv;
  v20 = 0LL;
  v21 = 1;
  v9 = CloneWaveFormat(a3, &v20);
  if ( v21 )
  {
    v12 = *p_pv;
    *p_pv = v20;
    if ( v12 )
      CoTaskMemFree(v12);
  }
  if ( v9 >= 0 )
  {
    v18 = 0LL;
    *this = v11;
    v13 = (CPipeInstance *)pv;
    v14 = 0LL;
    pv = 0LL;
    v15 = this[1];
    this[1] = v13;
    if ( v15 )
    {
      CoTaskMemFree(v15);
      v14 = pv;
    }
    this[2] = (CPipeInstance *)a4[3];
    *((_BYTE *)this + 24) = 0;
    pv = 0LL;
    if ( v14 )
      CoTaskMemFree(v14);
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9);
    wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
  }
LABEL_18:
  ATL::CAutoPtr<CPipeInstance>::Free(&v18);
  return (unsigned int)v9;
}
