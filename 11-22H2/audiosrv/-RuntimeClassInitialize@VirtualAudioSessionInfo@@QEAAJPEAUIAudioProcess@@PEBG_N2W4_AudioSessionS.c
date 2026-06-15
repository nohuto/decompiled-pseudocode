/*
 * XREFs of ?RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBG_N2W4_AudioSessionState@@@Z @ 0x180126A84
 * Callers:
 *     ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x1801263E4 (--$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessi.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x18000C918 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall VirtualAudioSessionInfo::RuntimeClassInitialize(
        VirtualAudioSessionInfo *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3,
        char a4,
        bool a5,
        enum _AudioSessionState a6)
{
  void **v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)this + 2, (__int64)a2);
  *((_BYTE *)this + 33) = a5;
  *((_DWORD *)this + 9) = a6;
  *((_BYTE *)this + 32) = a4;
  v9 = (void **)((char *)this + 24);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    v9,
    0LL);
  v12 = -1LL;
  do
    ++v12;
  while ( a3[v12] );
  v13 = _AllocStringWorker<CTCoAllocPolicy>(v11, v10, a3, v12, v16, (unsigned __int16 **)v9);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\VirtualAudioStream.h",
    (const char *)(unsigned int)v13);
  return v14;
}
