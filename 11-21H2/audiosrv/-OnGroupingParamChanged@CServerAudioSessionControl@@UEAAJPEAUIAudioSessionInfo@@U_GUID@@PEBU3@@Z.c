/*
 * XREFs of ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x18000A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnGroupingParamChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        struct _GUID *a3,
        const struct _GUID *a4)
{
  int MediaEvent; // r14d
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  char *v12; // rax
  unsigned __int64 v13; // r8
  void *v14; // r15
  unsigned __int64 v15; // rdx
  __int128 v16; // xmm0
  __int64 v17; // r9
  _WORD *v18; // rax
  __int16 v19; // cx
  HANDLE ProcessHeap; // rax
  char *v22; // [rsp+60h] [rbp+8h] BYREF

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v8 = *((_QWORD *)this + 9);
  v22 = (char *)this + 32;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 656);
    v10 = 2 * *(_DWORD *)(v9 - 16) + 2;
    v11 = 2 * *(_DWORD *)(v9 - 16) + 74;
    v12 = (char *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v12;
    if ( v12 )
    {
      *(_DWORD *)v12 = v11;
      if ( !a4 )
        a4 = &GUID_00000000_0000_0000_0000_000000000000;
      v15 = (unsigned __int64)v10 >> 1;
      v16 = (__int128)*a4;
      *((_DWORD *)v12 + 6) = v10;
      *((_DWORD *)v12 + 1) = 4;
      *(_OWORD *)(v12 + 28) = v16;
      *((struct _GUID *)v12 + 3) = *a3;
      v17 = *(_QWORD *)(*((_QWORD *)this + 9) + 656LL);
      v18 = v12 + 72;
      if ( v15 )
      {
        v13 = 2147483646 - v15;
        v17 -= (__int64)v18;
        while ( v13 + v15 )
        {
          v19 = *(_WORD *)((char *)v18 + v17);
          if ( !v19 )
            break;
          *v18++ = v19;
          if ( !--v15 )
          {
            --v18;
            break;
          }
        }
        *v18 = 0;
      }
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          23LL,
          &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
          v14,
          *((_DWORD *)this + 20));
      }
      MediaEvent = GenerateMediaEvent(v14, *((unsigned int *)this + 20), v13, v17);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v14);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnGroupingParamChanged", 0x2ABu, MediaEvent);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v22);
  return (unsigned int)MediaEvent;
}
