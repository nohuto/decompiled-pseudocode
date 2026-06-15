/*
 * XREFs of ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x18000EE70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::get_AudioSession(CVADServer *this, struct CServerAudioSessionControl **a2)
{
  unsigned int v2; // esi
  _QWORD *v5; // r14
  char *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rbx
  char *v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 46) )
  {
    v5 = (_QWORD *)((char *)this + 160);
    if ( !*((_QWORD *)this + 20) )
    {
      v6 = (char *)this + 224;
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
      v12 = v6;
      if ( !*v5 )
      {
        LOBYTE(v7) = 1;
        v2 = (***((__int64 (__fastcall ****)(_QWORD, _QWORD, __int64, _QWORD, _QWORD *))this + 19))(
               *((_QWORD *)this + 19),
               *((unsigned int *)this + 16),
               v7,
               *((_QWORD *)this + 21),
               v5);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v12);
      if ( v2 )
      {
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids, v2);
        }
        goto LABEL_10;
      }
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids, *v5);
      }
    }
    v8 = (*v5 + 8LL) & -(__int64)(*v5 != 0LL);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v9 >= 0x3FFFFFFF )
    {
      v2 = -2147024882;
      goto LABEL_24;
    }
    *a2 = (struct CServerAudioSessionControl *)*v5;
    v10 = *v5;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 24));
LABEL_10:
    if ( (v2 & 0x80000000) == 0 )
      return v2;
LABEL_24:
    AudSrvTraceLoggingErrorHelper("CVADServer::get_AudioSession", 0x507u, v2);
    return v2;
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids);
  }
  return 2290679809LL;
}
