/*
 * XREFs of ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180003870
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180003CC8 (-ForEachEntry@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJ$$QEAV.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180003DA0 (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@5555555@Z @ 0x180003E7C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A6E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006706C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x180083D46 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_BLOCK@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_B.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x180083D68 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_DA.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 */

__int64 __fastcall CVolumeStrip::OnNotify(CVolumeStrip *this, __int64 a2, struct _GUID *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // edi
  size_t v9; // r15
  unsigned int v10; // r13d
  _DWORD *v11; // r14
  char *v12; // rax
  char *v13; // rdi
  __int64 v14; // r12
  GUID *v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  int *v18; // r13
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  int v23; // r8d
  int v24; // r9d
  int v25; // eax
  void *v26; // rdx
  __int64 v28; // rdx
  __int64 v29; // r9
  int v30; // [rsp+20h] [rbp-79h]
  int v31; // [rsp+70h] [rbp-29h] BYREF
  int v32; // [rsp+74h] [rbp-25h] BYREF
  int v33; // [rsp+78h] [rbp-21h] BYREF
  int v34; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v35; // [rsp+80h] [rbp-19h] BYREF
  int v36; // [rsp+84h] [rbp-15h] BYREF
  _DWORD *v37; // [rsp+88h] [rbp-11h] BYREF
  int v38[2]; // [rsp+90h] [rbp-9h] BYREF
  char *v39; // [rsp+98h] [rbp-1h]
  void *Src; // [rsp+A0h] [rbp+7h]
  _DWORD *v41; // [rsp+A8h] [rbp+Fh]
  char *v42; // [rsp+B0h] [rbp+17h] BYREF
  void *v43; // [rsp+B8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  unsigned __int64 v45; // [rsp+110h] [rbp+77h] BYREF
  int v46; // [rsp+118h] [rbp+7Fh] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_3a53c1b98d243e7fdf5f1bbdfd5ff184_Traceguids,
      (char *)this - 8);
  }
  if ( a3 )
  {
    v5 = *(_QWORD *)&a3->Data1 - PBM_INITIATED_ENDPOINT_VOLUME_CHANGE;
    if ( *(_QWORD *)&a3->Data1 == PBM_INITIATED_ENDPOINT_VOLUME_CHANGE )
      v5 = *(_QWORD *)a3->Data4 - 0x5936EC8617E85EAALL;
    if ( !v5 )
      return 0LL;
  }
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(*((_QWORD *)this + 18) + 2 * v6) );
  v7 = *((_QWORD *)this + 20);
  v8 = 2 * v6 + 2;
  LODWORD(v45) = v8;
  v9 = 4 * (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
  v10 = v8 + 2 * (v9 + 40);
  v37 = operator new[]((unsigned int)(v9 + 28), (const struct std::nothrow_t *)&std::nothrow);
  v11 = v37;
  if ( v37 )
  {
    v12 = (char *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v43 = v12;
    v13 = v12;
    if ( v12 )
    {
      memset_0(v12, 0, v10);
      v14 = (unsigned int)v45;
      v15 = &GUID_00000000_0000_0000_0000_000000000000;
      *(_DWORD *)v13 = v10;
      *((_DWORD *)v13 + 1) = 128;
      if ( a3 )
        v15 = a3;
      *(GUID *)(v13 + 24) = *v15;
      *((_DWORD *)v13 + 19) = v14;
      v16 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 21) + 80LL))(
              *((_QWORD *)this + 21),
              v13 + 40);
      v17 = v16;
      if ( v16 < 0 )
      {
        v28 = 478LL;
      }
      else
      {
        v18 = (int *)(v13 + 44);
        v16 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 20) + 120LL))(
                *((_QWORD *)this + 20),
                v13 + 44);
        v17 = v16;
        if ( v16 < 0 )
        {
          v28 = 479LL;
        }
        else
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 40LL))(*((_QWORD *)this + 20));
          *((_DWORD *)v13 + 12) = v19;
          v20 = *((_QWORD *)this + 20);
          Src = &v13[v14 + 80];
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 48LL))(v20, v19);
          v16 = StringCbCopyW((unsigned __int16 *)v13 + 40, (unsigned int)v14, *((const unsigned __int16 **)this + 18));
          v17 = v16;
          if ( v16 < 0 )
          {
            v28 = 485LL;
          }
          else
          {
            v16 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 20) + 112LL))(
                    *((_QWORD *)this + 20),
                    v13 + 52);
            v17 = v16;
            if ( v16 < 0 )
            {
              v28 = 487LL;
            }
            else
            {
              v30 = (_DWORD)v13 + 64;
              v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(**((_QWORD **)this + 20) + 160LL))(
                      *((_QWORD *)this + 20),
                      0xFFFFFFFFLL,
                      v13 + 56,
                      v13 + 60);
              v17 = v16;
              if ( v16 < 0 )
              {
                v28 = 488LL;
              }
              else
              {
                v16 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 20) + 168LL))(
                        *((_QWORD *)this + 20),
                        v13 + 68,
                        v13 + 72);
                v17 = v16;
                if ( v16 < 0 )
                {
                  v28 = 489LL;
                }
                else
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 20) + 56LL))(
                    *((_QWORD *)this + 20),
                    *((unsigned int *)v13 + 12),
                    &v13[(unsigned int)v14 + 80 + v9]);
                  v22 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                       v21,
                                       _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                   + 8);
                  if ( *v22 > 4u )
                  {
                    LODWORD(v45) = *((_DWORD *)v13 + 18);
                    v46 = *((_DWORD *)v13 + 17);
                    v31 = *((_DWORD *)v13 + 16);
                    v32 = *((_DWORD *)v13 + 15);
                    v33 = *((_DWORD *)v13 + 14);
                    v34 = *((_DWORD *)v13 + 13);
                    v35 = *v18;
                    v36 = *((_DWORD *)v13 + 10);
                    *(_QWORD *)v38 = v13 + 80;
                    v42 = v13 + 24;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      (_DWORD)v22,
                      (unsigned int)&unk_180194675,
                      v23,
                      v24,
                      (__int64)v38,
                      (__int64)&v42,
                      (__int64)&v36,
                      (__int64)&v35,
                      (__int64)&v34,
                      (__int64)&v33,
                      (__int64)&v32,
                      (__int64)&v31,
                      (__int64)&v46,
                      (__int64)&v45);
                  }
                  v39 = v13;
                  *(_QWORD *)v38 = &CMasterVolumeNotification::`vftable';
                  v16 = CLockedList<CMasterVolumeNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 16));
                  v17 = v16;
                  if ( v16 < 0 )
                  {
                    v28 = 509LL;
                  }
                  else
                  {
                    *(_OWORD *)v11 = *(_OWORD *)(v13 + 24);
                    v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 40LL))(*((_QWORD *)this + 20));
                    v26 = Src;
                    v11[6] = v25;
                    v11[4] = *((_DWORD *)v13 + 10);
                    v11[5] = *v18;
                    memcpy_0(v11 + 7, v26, v9);
                    v41 = v11;
                    Src = &CInternalVolumeNotification::`vftable';
                    v16 = CLockedList<ATL::CComPtr<IAudioEndpointVolumeCallback>,1,0>::ForEachEntry((LPCRITICAL_SECTION)this + 2);
                    v17 = v16;
                    if ( v16 >= 0 )
                    {
                      operator delete(v13, 0x58uLL);
                      operator delete(v11, 0x20uLL);
                      return 0LL;
                    }
                    v28 = 517LL;
                  }
                }
              }
            }
          }
        }
      }
      v29 = (unsigned int)v16;
    }
    else
    {
      v17 = -2147024882;
      v28 = 470LL;
      v29 = 2147942414LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)v29,
      v30);
    std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_BLOCK>(&v43);
  }
  else
  {
    v17 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)0x8007000ELL,
      v30);
  }
  std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>(&v37);
  return v17;
}
