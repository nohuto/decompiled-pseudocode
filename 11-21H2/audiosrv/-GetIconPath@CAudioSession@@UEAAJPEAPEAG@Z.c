/*
 * XREFs of ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800D7E90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18001AC90 (MIDL_user_allocate.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180056D74 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetIconPath(CAudioSession *this, unsigned __int16 **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const wchar_t *v5; // r9
  size_t v6; // rbx
  unsigned __int16 *v7; // rax
  int v8; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 280);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 7);
  v5 = (const wchar_t *)*((_QWORD *)this + 32);
  v10 = v2;
  v6 = 2LL * (*((_DWORD *)v5 - 4) + 1);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids, v5);
  }
  v7 = (unsigned __int16 *)MIDL_user_allocate(v6);
  *a2 = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
LABEL_9:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetIconPath", 224, v8);
    goto LABEL_10;
  }
  v8 = StringCbCopyW((char *)v7, v6, *((char **)this + 32));
  if ( v8 < 0 )
  {
    operator delete(*a2);
    *a2 = 0LL;
    goto LABEL_9;
  }
LABEL_10:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v10);
  return (unsigned int)v8;
}
