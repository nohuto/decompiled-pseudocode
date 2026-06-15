/*
 * XREFs of ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x1800C9530
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800C9B74 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CMeterSoftware::GetChannelsPeakValues(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        float *a3)
{
  __int64 v3; // rsi
  float *v4; // rbp
  int v6; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  ULONG_PTR SpinCount; // rcx
  int v9; // eax
  __int64 v10; // rcx
  _BYTE *v11; // rax
  float v12; // xmm0_4
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v15[128]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a2;
  v4 = a3;
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_22:
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetChannelsPeakValues", 688, v6);
    return (unsigned int)v6;
  }
  if ( a2 != LODWORD(this->LockSemaphore) )
  {
    v6 = -2147024809;
    goto LABEL_22;
  }
  v7 = this + 1;
  v6 = 0;
  EnterCriticalSection(this + 1);
  SpinCount = this->SpinCount;
  v14 = v7;
  if ( SpinCount && LODWORD(this->LockSemaphore) <= 0x20 )
  {
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _BYTE *, _QWORD))(*(_QWORD *)SpinCount + 24LL))(
           SpinCount,
           v15,
           (unsigned int)v3);
    v6 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -2147417848 || v9 == -2147023174 )
      {
        if ( (_DWORD)v3 )
          memset_0(v4, 0, 4 * v3);
        ATL::CComPtrBase<IPart>::Release(&this->SpinCount);
        v6 = 0;
      }
    }
    else if ( (_DWORD)v3 )
    {
      v10 = v3;
      v11 = (_BYTE *)(v15 - (_BYTE *)v4);
      do
      {
        v12 = fminf(*(float *)((char *)v4 + (_QWORD)v11), 1.0);
        if ( v12 <= 0.0 )
          v12 = 0.0;
        *v4++ = v12;
        --v10;
      }
      while ( v10 );
    }
  }
  else if ( (_DWORD)v3 )
  {
    memset_0(v4, 0, 4 * v3);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
  if ( v6 < 0 )
    goto LABEL_22;
  return (unsigned int)v6;
}
