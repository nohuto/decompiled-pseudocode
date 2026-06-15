/*
 * XREFs of ?RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBG_N2W4_AudioSessionState@@@Z @ 0x180110000
 * Callers:
 *     ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x18010F96C (--$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessi.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800D6354 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 */

__int64 __fastcall VirtualAudioSessionInfo::RuntimeClassInitialize(
        VirtualAudioSessionInfo *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3,
        char a4,
        bool a5,
        enum _AudioSessionState a6)
{
  void **v9; // r14
  void *v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)this + 2, (__int64)a2);
  v9 = (void **)((char *)this + 24);
  *((_BYTE *)this + 33) = a5;
  *((_DWORD *)this + 9) = a6;
  *((_BYTE *)this + 32) = a4;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 3,
    0LL);
  v11 = -1LL;
  do
    ++v11;
  while ( a3[v11] );
  v12 = v11 + 1;
  *v9 = 0LL;
  if ( v11 + 1 >= v11 && is_mul_ok(v12, 2uLL) )
  {
    v13 = CTCoAllocPolicy::Alloc(v10, (v12 * (unsigned __int128)2uLL) >> 64, 2 * v12, v9);
    if ( v13 >= 0 )
    {
      StringCchCopyNExW((char *)*v9, v11 + 1, a3, v11);
      return 0LL;
    }
  }
  else
  {
    v13 = -2147024362;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\VirtualAudioStream.h",
    (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
