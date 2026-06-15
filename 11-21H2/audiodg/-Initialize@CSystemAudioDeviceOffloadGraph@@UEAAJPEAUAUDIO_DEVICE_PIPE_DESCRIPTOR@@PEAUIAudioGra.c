/*
 * XREFs of ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140058650
 * Callers:
 *     <none>
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140003810 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140003B20 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000C240 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140051850 (WPP_SF_.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140053D84 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x140096008 (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceOffloadGraph::Initialize(
        CSystemAudioDeviceOffloadGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        unsigned int a4)
{
  char v8; // bp
  __int128 v9; // xmm0
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  void *v20; // rdx
  unsigned int v21; // ecx
  unsigned __int8 v22; // r8
  unsigned __int64 v24; // [rsp+20h] [rbp-88h]
  unsigned __int64 v25; // [rsp+28h] [rbp-80h]
  __int64 v26; // [rsp+30h] [rbp-78h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+38h] [rbp-70h] BYREF
  __int128 v28; // [rsp+48h] [rbp-60h]
  __int128 v29; // [rsp+58h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v8 = 1;
  v9 = *(_OWORD *)((char *)a2 + 152);
  *(_OWORD *)((char *)this + 248) = v9;
  v28 = v9;
  v29 = v9;
  EtwEventActivityIdControl(4LL, &v29);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v27 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  *((_DWORD *)this + 56) = a4;
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_6a6aaf124706356e0ec6025c89b7f8a8_Traceguids);
  }
  v10 = CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  v11 = v10;
  if ( v10 == -2005139389 || v10 > -2005139365 && v10 <= -2005139360 )
  {
    v11 = -2005139370;
    v12 = 2289827926LL;
    v13 = 70LL;
  }
  else if ( v10 >= 0 )
  {
    v14 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
            *((_QWORD *)this + 29),
            &GUID_64f1dd49_71ca_4281_8672_3a9eddd1d0b6,
            (char *)this + 448);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
              *((_QWORD *)this + 29),
              &GUID_dfe21355_5ec2_40e0_8d6b_710ac3c00249,
              (char *)this + 456);
      v11 = v15;
      if ( v15 >= 0 )
      {
        v16 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
                *((_QWORD *)this + 29),
                &GUID_e1546dce_9dd1_418b_9ab2_348ced161c86,
                (char *)this + 464);
        v11 = v16;
        if ( v16 >= 0 )
        {
          v17 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
                  *((_QWORD *)this + 29),
                  &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
                  (char *)this + 472);
          v11 = v17;
          if ( v17 >= 0 )
          {
            v18 = *((_QWORD *)this + 29);
            *((_QWORD *)this + 29) = 0LL;
            *((_QWORD *)a2 + 8) = v18;
            v19 = CSystemAudioDeviceSharedBase::Initialize(this, a2, a3, a4);
            v11 = v19;
            if ( v19 >= 0 )
            {
              v8 = 0;
              v11 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x5E,
                (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
                (const char *)(unsigned int)v19);
            }
            v26 = *((_QWORD *)a2 + 8);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v26);
            goto LABEL_24;
          }
          v12 = (unsigned int)v17;
          v13 = 81LL;
        }
        else
        {
          v12 = (unsigned int)v16;
          v13 = 79LL;
        }
      }
      else
      {
        v12 = (unsigned int)v15;
        v13 = 77LL;
      }
    }
    else
    {
      v12 = (unsigned int)v14;
      v13 = 75LL;
    }
  }
  else
  {
    v12 = (unsigned int)v10;
    v13 = 71LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
    (const char *)v12);
LABEL_24:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v27);
  EtwEventActivityIdControl(4LL, &v29);
  if ( v8 )
    CSystemAudioDeviceSharedBase::Cleanup(this);
  AEWMILOG_PERFORMANCE(v21, v20, v22, 0xAu, v24, v25);
  PublishDeviceGraphWnfState();
  return v11;
}
