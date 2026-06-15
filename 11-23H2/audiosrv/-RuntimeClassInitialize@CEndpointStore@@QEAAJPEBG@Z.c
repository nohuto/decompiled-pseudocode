/*
 * XREFs of ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x180027660
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore@@AEAPEBG@Z @ 0x180027310 (--$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CAudioSessionManager@@QEAAJPEBG@Z @ 0x1800274A0 (-Initialize@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ??$make_unique@VCAudioSessionManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@0@XZ @ 0x1800277E8 (--$make_unique@VCAudioSessionManager@@$$V$0A@@std@@YA-AV-$unique_ptr@VCAudioSessionManager@@U-$d.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180028114 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x18002E680 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800E78D8 (--1CAudioSessionManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointStore::RuntimeClassInitialize(CEndpointStore *this, const unsigned __int16 *a2)
{
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  CEndpointStore *v8; // rax
  __int64 v9; // r8
  CAudioSessionManager **v10; // rbx
  CAudioSessionManager *v11; // rdx
  CAudioSessionManager *v12; // rsi
  CAudioSessionManager *v13; // rsi
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // ebx
  char **v20; // rcx
  unsigned __int64 v21; // rdx
  char *v23; // rsi
  __int64 v24; // rbx
  CAudioSessionManager *v25; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  const unsigned __int16 *v27; // [rsp+68h] [rbp+10h] BYREF
  __int64 v28; // [rsp+70h] [rbp+18h] BYREF
  __int64 v29; // [rsp+78h] [rbp+20h] BYREF

  v27 = a2;
  v28 = 0LL;
  lpVtbl = g_DeviceEnumerator->lpVtbl;
  v28 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, __int64 *))lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         a2,
         &v28);
  if ( v5 < 0 )
  {
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v28);
    return (unsigned int)v5;
  }
  else
  {
    v29 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v28)(
           v28,
           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
           &v29);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
        (const char *)(unsigned int)v6,
        (int)v25);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v29);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v28);
      return v7;
    }
    else
    {
      v8 = (CEndpointStore *)std::make_unique<CAudioSessionManager,,0>(&v25);
      v10 = (CAudioSessionManager **)((char *)this + 96);
      if ( (CEndpointStore *)((char *)this + 96) != v8 )
      {
        v11 = *(CAudioSessionManager **)v8;
        *(_QWORD *)v8 = 0LL;
        v12 = *v10;
        *v10 = v11;
        if ( v12 )
        {
          CAudioSessionManager::~CAudioSessionManager(v12);
          operator delete(v12, 0x130uLL);
        }
      }
      v13 = v25;
      if ( v25 )
      {
        CAudioSessionManager::~CAudioSessionManager(v25);
        operator delete(v13, 0x130uLL);
      }
      if ( *v10 )
      {
        v14 = CAudioSessionManager::Initialize(*v10, a2, v9);
        v15 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x71,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
            (const char *)(unsigned int)v14,
            (int)v25);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v29);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v28);
          return v15;
        }
        else
        {
          v16 = *((_QWORD *)this + 13);
          *((_QWORD *)this + 13) = 0LL;
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          v17 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore,unsigned short const * &>(
                  (char *)this + 104,
                  &v27);
          v19 = v17;
          if ( v17 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x73,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
              (const char *)(unsigned int)v17,
              (int)v25);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v29);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v28);
            return v19;
          }
          else
          {
            v20 = (char **)((char *)this + 16);
            v21 = -1LL;
            do
              ++v21;
            while ( a2[v21] );
            if ( v21 <= *((_QWORD *)this + 5) )
            {
              v23 = (char *)this + 16;
              if ( *((_QWORD *)this + 5) >= 8uLL )
                v23 = *v20;
              *((_QWORD *)this + 4) = v21;
              v24 = 2 * v21;
              memmove_0(v23, a2, 2 * v21);
              *(_WORD *)&v23[v24] = 0;
            }
            else
            {
              std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
                v20,
                v21,
                v18,
                a2);
            }
            if ( v29 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
            if ( v28 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            return 0LL;
          }
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x70,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
          (const char *)0x8007000ELL,
          (int)v25);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v29);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v28);
        return 2147942414LL;
      }
    }
  }
}
