/*
 * XREFs of ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x18061D310
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1801993D0 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180509684 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180620604 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std@.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppDisplayName(
        RTL_SRWLOCK *this,
        HSTRING a2,
        HSTRING *a3)
{
  PCWSTR StringRawBuffer; // rdx
  RTL_SRWLOCK *v6; // rdi
  PVOID Ptr; // rcx
  void **v8; // r8
  __int64 v9; // rbx
  void **v10; // rdx
  const WCHAR *v11; // rcx
  HRESULT String; // eax
  PCNZWCH *v13; // rbx
  void **v14; // rsi
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+20h] [rbp-B8h]
  __int64 v21; // [rsp+40h] [rbp-98h] BYREF
  __int64 v22; // [rsp+48h] [rbp-90h] BYREF
  __int64 v23; // [rsp+50h] [rbp-88h] BYREF
  PCNZWCH sourceString[2]; // [rsp+58h] [rbp-80h] BYREF
  UINT32 length[4]; // [rsp+68h] [rbp-70h]
  void *Src[3]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp-48h]
  _BYTE v28[32]; // [rsp+98h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  *a3 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  Windows::Internal::FamilySafety::AppLimits::ToLowerCase(Src, StringRawBuffer);
  sourceString[0] = 0LL;
  *(__m128i *)length = _mm_load_si128((const __m128i *)&_xmm);
  v6 = this + 18;
  AcquireSRWLockShared(this + 18);
  v22 = (__int64)&this[18];
  Ptr = this[17].Ptr;
  if ( Ptr )
  {
    v8 = Src;
    if ( v27 >= 8 )
      v8 = (void **)Src[0];
    v9 = (*(__int64 (__fastcall **)(PVOID, _BYTE *, void **))(*(_QWORD *)Ptr + 88LL))(Ptr, v28, v8);
    if ( sourceString != (PCNZWCH *)v9 )
    {
      std::wstring::_Tidy_deallocate((__int64)sourceString);
      *(_OWORD *)sourceString = *(_OWORD *)v9;
      *(_OWORD *)length = *(_OWORD *)(v9 + 16);
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_QWORD *)(v9 + 24) = 7LL;
      *(_WORD *)v9 = 0;
    }
    std::wstring::_Tidy_deallocate((__int64)v28);
  }
  else
  {
    v10 = Src;
    if ( v27 >= 8 )
      v10 = (void **)Src[0];
    std::wstring::assign((char *)sourceString, v10, (unsigned __int64)Src[2]);
  }
  v11 = (const WCHAR *)sourceString;
  if ( *(_QWORD *)&length[2] >= 8uLL )
    v11 = sourceString[0];
  String = WindowsCreateString(v11, length[0], a3);
  if ( String < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF2,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)String,
      v20);
  v13 = sourceString;
  if ( *(_QWORD *)&length[2] >= 8uLL )
    v13 = (PCNZWCH *)sourceString[0];
  v14 = Src;
  if ( v27 >= 8 )
    v14 = (void **)Src[0];
  v15 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                    (__int64)retaddr,
                    (void (__cdecl *)())_lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
  if ( *v15 > 5u && tlgKeywordOn((__int64)v15, 0x400000000000LL) )
  {
    v21 = 0x2000000LL;
    v23 = (__int64)v13;
    v22 = (__int64)v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v16,
      (unsigned __int8 *)dword_18086F702,
      v17,
      v18,
      (const WCHAR **)&v22,
      (const WCHAR **)&v23,
      (__int64)&v21);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  std::wstring::_Tidy_deallocate((__int64)sourceString);
  std::wstring::_Tidy_deallocate((__int64)Src);
  return 0LL;
}
