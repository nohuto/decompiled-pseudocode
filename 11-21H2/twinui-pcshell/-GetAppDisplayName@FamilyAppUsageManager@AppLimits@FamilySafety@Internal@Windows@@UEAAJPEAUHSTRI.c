/*
 * XREFs of ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x180562C40
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1800AF200 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180458780 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180563B68 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std@.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppDisplayName(
        RTL_SRWLOCK *this,
        HSTRING a2,
        HSTRING *a3)
{
  PCWSTR StringRawBuffer; // rdx
  PVOID Ptr; // rcx
  _QWORD *v7; // r8
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  const WCHAR *v10; // rcx
  HRESULT String; // eax
  PCNZWCH *v12; // rbx
  _QWORD *v13; // rdi
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+20h] [rbp-C8h]
  __int64 v20; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-98h] BYREF
  RTL_SRWLOCK *v23; // [rsp+58h] [rbp-90h] BYREF
  PCNZWCH sourceString[2]; // [rsp+60h] [rbp-88h] BYREF
  UINT32 length[4]; // [rsp+70h] [rbp-78h]
  _QWORD v26[3]; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v27; // [rsp+98h] [rbp-50h]
  _BYTE v28[32]; // [rsp+A0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  *a3 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  Windows::Internal::FamilySafety::AppLimits::ToLowerCase(v26, StringRawBuffer);
  *(_QWORD *)length = 0LL;
  *(_QWORD *)&length[2] = 7LL;
  LOWORD(sourceString[0]) = 0;
  AcquireSRWLockShared(this + 18);
  v23 = this + 18;
  Ptr = this[17].Ptr;
  if ( Ptr )
  {
    v7 = v26;
    if ( v27 >= 8 )
      v7 = (_QWORD *)v26[0];
    v8 = (*(__int64 (__fastcall **)(PVOID, _BYTE *, _QWORD *))(*(_QWORD *)Ptr + 88LL))(Ptr, v28, v7);
    if ( sourceString != (PCNZWCH *)v8 )
    {
      std::wstring::_Tidy_deallocate((__int64)sourceString);
      *(_OWORD *)sourceString = *(_OWORD *)v8;
      *(_OWORD *)length = *(_OWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 16) = 0LL;
      *(_QWORD *)(v8 + 24) = 7LL;
      *(_WORD *)v8 = 0;
    }
    std::wstring::_Tidy_deallocate((__int64)v28);
  }
  else
  {
    v9 = v26;
    if ( v27 >= 8 )
      v9 = (_QWORD *)v26[0];
    std::wstring::assign((char *)sourceString, v9, v26[2]);
  }
  v10 = (const WCHAR *)sourceString;
  if ( *(_QWORD *)&length[2] >= 8uLL )
    v10 = sourceString[0];
  String = WindowsCreateString(v10, length[0], a3);
  if ( String < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB2,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)String,
      v19);
  v12 = sourceString;
  if ( *(_QWORD *)&length[2] >= 8uLL )
    v12 = (PCNZWCH *)sourceString[0];
  v13 = v26;
  if ( v27 >= 8 )
    v13 = (_QWORD *)v26[0];
  v14 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                    (__int64)retaddr,
                    _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
  if ( *v14 > 5u && tlgKeywordOn((__int64)v14, 0x400000000000LL) )
  {
    v20 = 0x2000000LL;
    v21 = (__int64)v12;
    v22 = (__int64)v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v15,
      (unsigned __int8 *)dword_1806C7240,
      v16,
      v17,
      (const WCHAR **)&v22,
      (const WCHAR **)&v21,
      (__int64)&v20);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v23);
  std::wstring::_Tidy_deallocate((__int64)sourceString);
  std::wstring::_Tidy_deallocate((__int64)v26);
  return 0LL;
}
