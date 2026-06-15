/*
 * XREFs of ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800D7CE0
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

__int64 __fastcall CAudioSession::GetDisplayName(CAudioSession *this, unsigned __int16 **a2)
{
  __int64 v4; // rax
  size_t v5; // rbx
  unsigned __int16 *v6; // rax
  int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids,
      *((const wchar_t **)this + 31));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this + 7);
  v4 = *((_QWORD *)this + 31);
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 280);
  v5 = 2LL * (*(_DWORD *)(v4 - 16) + 1);
  v6 = (unsigned __int16 *)MIDL_user_allocate(v5);
  *a2 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_9:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetDisplayName", 85, v7);
    goto LABEL_10;
  }
  v7 = StringCbCopyW((char *)v6, v5, *((char **)this + 31));
  if ( v7 < 0 )
  {
    operator delete(*a2);
    *a2 = 0LL;
    goto LABEL_9;
  }
LABEL_10:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v9);
  return (unsigned int)v7;
}
