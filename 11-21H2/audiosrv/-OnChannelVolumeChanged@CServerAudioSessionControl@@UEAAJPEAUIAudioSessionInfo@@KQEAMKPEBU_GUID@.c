/*
 * XREFs of ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800DBF60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180056D74 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 *     WPP_SF_Sdg @ 0x1800CF0FC (WPP_SF_Sdg.c)
 *     WPP_SF_Sdd @ 0x1800DB64C (WPP_SF_Sdd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnChannelVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        unsigned int a3,
        float *const a4,
        unsigned int a5,
        const struct _GUID *a6)
{
  int MediaEvent; // edi
  CEndpointStoreCache *v10; // rcx
  unsigned int v11; // r12d
  __int64 v12; // rax
  unsigned int v13; // r13d
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  const struct _GUID *v16; // rcx
  GUID *v17; // rax
  __int64 v18; // r14
  GUID v19; // xmm0
  char *v20; // r14
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // r9
  int v25; // [rsp+20h] [rbp-38h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+60h] [rbp+8h] BYREF

  MediaEvent = 0;
  v10 = WPP_GLOBAL_Control;
  v11 = a5;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x24u,
        (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
        0LL);
      v10 = WPP_GLOBAL_Control;
    }
    if ( v10 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v10 + 28) & 0x40) != 0
      && *((_BYTE *)v10 + 25) >= 4u )
    {
      WPP_SF_Sdd(*((_QWORD *)v10 + 2), 0x25u, (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v12 = *((_QWORD *)this + 9);
  v26 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  if ( v12 )
  {
    v13 = 2 * *(_DWORD *)(*(_QWORD *)(v12 + 656) - 16LL) + 2;
    v14 = operator new[]((v13 + 4 * a3 + 75) & 0xFFFFFFFC, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      v16 = a6;
      *v14 = (v13 + 4 * a3 + 75) & 0xFFFFFFFC;
      v17 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( v16 )
        v17 = (GUID *)v16;
      v18 = (v13 + 75) & 0xFFFFFFFC;
      v19 = *v17;
      v15[12] = v18;
      v20 = (char *)v15 + v18;
      v15[13] = v11;
      v15[1] = 2;
      v15[6] = v13;
      v15[14] = a3;
      *(GUID *)(v15 + 7) = v19;
      if ( a3 )
      {
        v21 = v20 - (char *)a4;
        do
        {
          if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_Sdg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x26u,
              (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
              0LL);
          }
          ++MediaEvent;
          *(float *const)((char *)a4 + v21) = *a4;
          ++a4;
        }
        while ( MediaEvent < a3 );
      }
      StringCbCopyW((char *)v15 + 72, v13, *(char **)(*((_QWORD *)this + 9) + 656LL));
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v25 = *((_DWORD *)this + 20);
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x27u,
          (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
          v15,
          v25);
      }
      MediaEvent = GenerateMediaEvent(v15, *((unsigned int *)this + 20), v22, v23);
      operator delete(v15);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnChannelVolumeChanged", 1373, MediaEvent);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v26);
  return (unsigned int)MediaEvent;
}
