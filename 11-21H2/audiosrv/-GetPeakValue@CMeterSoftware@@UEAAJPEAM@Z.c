/*
 * XREFs of ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x1800C9850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800C9B74 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CMeterSoftware::GetPeakValue(struct _RTL_CRITICAL_SECTION *this, float *a2)
{
  int v2; // edi
  float v5; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  ULONG_PTR SpinCount; // rcx
  int v9; // eax
  __int64 LockSemaphore_low; // rcx
  float *v11; // rax
  float v12; // xmm0_4
  float v13; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v14[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v15[128]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  v7 = this + 1;
  EnterCriticalSection(this + 1);
  SpinCount = this->SpinCount;
  v14[0] = v7;
  if ( SpinCount )
  {
    if ( LODWORD(this->LockSemaphore) > 0x20 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v14);
      return 2147942487LL;
    }
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _BYTE *))(*(_QWORD *)SpinCount + 24LL))(SpinCount, v15);
    v2 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -2147417848 || v9 == -2147023174 )
      {
        ATL::CComPtrBase<IPart>::Release(&this->SpinCount);
        v2 = 0;
      }
    }
    else if ( LODWORD(this->LockSemaphore) )
    {
      LockSemaphore_low = LODWORD(this->LockSemaphore);
      v11 = (float *)v15;
      do
      {
        v12 = *v11++;
        v5 = fmaxf(v12, v5);
        --LockSemaphore_low;
      }
      while ( LockSemaphore_low );
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v14);
  v13 = fminf(v5, 1.0);
  if ( v13 <= 0.0 )
    v13 = 0.0;
  *a2 = v13;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetPeakValue", 607, v2);
  return (unsigned int)v2;
}
