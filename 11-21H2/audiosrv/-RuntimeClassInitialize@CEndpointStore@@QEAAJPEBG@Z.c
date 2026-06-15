/*
 * XREFs of ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x180046714
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore@@AEAPEBG@Z @ 0x18005C854 (--$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Initialize@CAudioSessionManager@@QEAAJPEBG@Z @ 0x180045B50 (-Initialize@CAudioSessionManager@@QEAAJPEBG@Z.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x180047D08 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@M.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18004D0F4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$make_unique@VCAudioSessionManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@0@XZ @ 0x18005D88C (--$make_unique@VCAudioSessionManager@@$$V$0A@@std@@YA-AV-$unique_ptr@VCAudioSessionManager@@U-$d.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800DF2E0 (--1CAudioSessionManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointStore::RuntimeClassInitialize(CEndpointStore *this, unsigned __int16 *a2)
{
  __int64 v4; // rax
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  CEndpointStore *v8; // rax
  CAudioSessionManager **v9; // rbx
  CAudioSessionManager *v10; // rdx
  CAudioSessionManager *v11; // rsi
  CAudioSessionManager *v12; // rsi
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // r8
  CAudioSessionManager *v20; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int16 *v22; // [rsp+68h] [rbp+10h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+18h] BYREF
  __int64 v24; // [rsp+78h] [rbp+20h] BYREF

  v22 = a2;
  v23 = 0LL;
  v4 = *(_QWORD *)g_DeviceEnumerator;
  v23 = 0LL;
  v5 = (*(__int64 (__fastcall **)(LPVOID, unsigned __int16 *, _QWORD))(v4 + 40))(g_DeviceEnumerator, a2, &v23);
  if ( v5 < 0 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
    return (unsigned int)v5;
  }
  else
  {
    v24 = 0LL;
    v6 = (**v23)(v23, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v24);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
        (const char *)(unsigned int)v6,
        (int)v20);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
      return v7;
    }
    else
    {
      v8 = (CEndpointStore *)std::make_unique<CAudioSessionManager,,0>(&v20);
      v9 = (CAudioSessionManager **)((char *)this + 96);
      if ( (CEndpointStore *)((char *)this + 96) != v8 )
      {
        v10 = *(CAudioSessionManager **)v8;
        *(_QWORD *)v8 = 0LL;
        v11 = *v9;
        *v9 = v10;
        if ( v11 )
        {
          CAudioSessionManager::~CAudioSessionManager(v11);
          operator delete(v11, 0x120uLL);
        }
      }
      v12 = v20;
      if ( v20 )
      {
        CAudioSessionManager::~CAudioSessionManager(v20);
        operator delete(v12, 0x120uLL);
      }
      if ( *v9 )
      {
        v13 = CAudioSessionManager::Initialize(*v9, a2);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x71,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
            (const char *)(unsigned int)v13,
            (int)v20);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
          return v14;
        }
        else
        {
          v15 = *((_QWORD *)this + 13);
          *((_QWORD *)this + 13) = 0LL;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          v16 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore,unsigned short const * &>(
                  (char *)this + 104,
                  &v22);
          v17 = v16;
          if ( v16 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x73,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
              (const char *)(unsigned int)v16,
              (int)v20);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
            return v17;
          }
          else
          {
            v18 = -1LL;
            do
              ++v18;
            while ( a2[v18] );
            std::wstring::assign((char *)this + 16, a2);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
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
          (int)v20);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
        return 2147942414LL;
      }
    }
  }
}
