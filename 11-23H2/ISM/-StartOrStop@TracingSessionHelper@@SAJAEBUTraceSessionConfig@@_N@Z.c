/*
 * XREFs of ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800DBC78
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DA3C0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800DA590 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x1800DC010 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180047E38 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180099AF0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800AAA90 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101U?$integral_constant@_N$00@0@@Z @ 0x1800D70A0 (--$_Traits_find_last_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101U-$integral_constant@_N$00@0@@Z.c)
 *     ??1?$unique_ptr@U_EVENT_TRACE_PROPERTIES@@U?$default_delete@U_EVENT_TRACE_PROPERTIES@@@std@@@std@@QEAA@XZ @ 0x1800D7A80 (--1-$unique_ptr@U_EVENT_TRACE_PROPERTIES@@U-$default_delete@U_EVENT_TRACE_PROPERTIES@@@std@@@std.c)
 *     ??1?$unique_storage@U?$resource_policy@_K$$A6AK_K@Z$1?CloseTrace@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0?0$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800D7AC4 (--1-$unique_storage@U-$resource_policy@_K$$A6AK_K@Z$1-CloseTrace@@YAK0@ZU-$integral_constant@_K$.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D8364 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DAE94 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TracingSessionHelper::StartOrStop(
        const struct TraceSessionConfig *a1,
        char a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // r15
  _WORD *v7; // rcx
  unsigned __int64 v8; // rax
  void *v9; // rdx
  const unsigned __int16 *v10; // rdx
  struct _ENABLE_TRACE_PARAMETERS *p_EnableParameters; // rcx
  int DirectoryDeepNoThrow; // eax
  int v13; // r14d
  unsigned int v14; // esi
  unsigned int *v15; // rbx
  char *v16; // rcx
  char *v17; // r8
  const WCHAR *v18; // rdx
  const WCHAR *v19; // rdx
  ULONG started; // eax
  __int64 v21; // rdx
  int v22; // edi
  __int64 v23; // rdi
  __int64 v24; // rsi
  const WCHAR *v26; // rdx
  signed int v27; // eax
  ULONG64 TraceHandle; // [rsp+48h] [rbp-39h] BYREF
  unsigned int *v29; // [rsp+50h] [rbp-31h] BYREF
  struct _ENABLE_TRACE_PARAMETERS EnableParameters; // [rsp+58h] [rbp-29h] BYREF
  LPCWSTR InstanceName[2]; // [rsp+88h] [rbp+7h] BYREF
  int v32; // [rsp+98h] [rbp+17h]
  unsigned __int64 v33; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v6 = (char *)a1 + 48;
  v7 = v6;
  if ( *((_QWORD *)v6 + 3) >= 8uLL )
    v7 = *(_WORD **)v6;
  v8 = std::_Traits_find_last_of<std::char_traits<unsigned short>>(v7, *((_QWORD *)v6 + 2), a3, a4, 1LL);
  *(_QWORD *)&EnableParameters.Version = 0LL;
  *(__m128i *)&EnableParameters.SourceId.Data2 = _mm_load_si128((const __m128i *)&_xmm);
  if ( *((_QWORD *)v6 + 2) < v8 )
    v8 = *((_QWORD *)v6 + 2);
  v9 = v6;
  if ( *((_QWORD *)v6 + 3) >= 8uLL )
    v9 = *(void **)v6;
  std::wstring::assign((void **)&EnableParameters, v9, v8);
  p_EnableParameters = &EnableParameters;
  if ( *(_QWORD *)&EnableParameters.SourceId.Data4[4] >= 8uLL )
    p_EnableParameters = *(struct _ENABLE_TRACE_PARAMETERS **)&EnableParameters.Version;
  DirectoryDeepNoThrow = wil::CreateDirectoryDeepNoThrow((wil *)p_EnableParameters, v10);
  if ( DirectoryDeepNoThrow < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      86LL,
      (__int64)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
      (const char *)(unsigned int)DirectoryDeepNoThrow);
  std::wstring::_Tidy_deallocate((__int64)&EnableParameters);
  std::wstring::wstring(InstanceName, (__int64)a1);
  v13 = 2 * v32;
  v14 = 2 * v32 + 644;
  v15 = (unsigned int *)operator new(v14);
  v29 = v15;
  memset_0(v15, 0, v14);
  *v15 = v14;
  v15[11] = 0x20000;
  v15[10] = 1;
  *(_OWORD *)(v15 + 6) = *((_OWORD *)a1 + 2);
  v15[12] = *((_DWORD *)a1 + 20);
  v15[17] = *((_DWORD *)a1 + 21);
  v15[16] = *((_DWORD *)a1 + 22);
  v15[14] = *((_DWORD *)a1 + 23);
  v15[13] = *((_DWORD *)a1 + 24);
  v15[15] = *((_DWORD *)a1 + 25);
  v15[29] = 120;
  v15[28] = v13 + 122;
  v16 = v6;
  if ( *((_QWORD *)v6 + 3) >= 8uLL )
    v16 = *(char **)v6;
  v17 = &v16[2 * *((_QWORD *)v6 + 2)];
  if ( *((_QWORD *)v6 + 3) >= 8uLL )
    v6 = *(char **)v6;
  memmove_0((char *)v15 + (unsigned int)(v13 + 122), v6, v17 - v6);
  TraceHandle = -1LL;
  if ( a2 )
  {
    v18 = (const WCHAR *)a1;
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      v18 = *(const WCHAR **)a1;
    if ( ControlTraceW(0LL, v18, (PEVENT_TRACE_PROPERTIES)v15, 0) == 4201 )
    {
      v19 = (const WCHAR *)a1;
      if ( *((_QWORD *)a1 + 3) >= 8uLL )
        v19 = *(const WCHAR **)a1;
      started = StartTraceW(&TraceHandle, v19, (PEVENT_TRACE_PROPERTIES)v15);
      if ( started )
      {
        v21 = 131LL;
LABEL_23:
        v22 = wil::details::in1diag3::Return_Win32(
                retaddr,
                v21,
                (__int64)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
                (const char *)started);
        goto LABEL_37;
      }
      v23 = *((_QWORD *)a1 + 13);
      v24 = *((_QWORD *)a1 + 14);
      while ( v23 != v24 )
      {
        memset(&EnableParameters.ControlFlags, 0, 40);
        *(_QWORD *)&EnableParameters.Version = 2LL;
        started = EnableTraceEx2(
                    TraceHandle,
                    (LPCGUID)v23,
                    1u,
                    *(_BYTE *)(v23 + 16),
                    *(_QWORD *)(v23 + 24),
                    *(_QWORD *)(v23 + 32),
                    0,
                    &EnableParameters);
        if ( started )
        {
          v21 = 148LL;
          goto LABEL_23;
        }
        v23 += 40LL;
      }
LABEL_28:
      wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,unsigned long (unsigned __int64),&unsigned long CloseTrace(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,-1,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64,unsigned long (unsigned __int64),&unsigned long CloseTrace(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,-1,std::nullptr_t>>(&TraceHandle);
      std::wstring::_Tidy_deallocate((__int64)InstanceName);
      operator delete(v15);
      return 0LL;
    }
    v22 = 1;
  }
  else
  {
    v26 = (const WCHAR *)InstanceName;
    if ( v33 >= 8 )
      v26 = InstanceName[0];
    v27 = ControlTraceW(0LL, v26, (PEVENT_TRACE_PROPERTIES)v15, 1u);
    v22 = v27;
    if ( v27 > 0 )
      v22 = (unsigned __int16)v27 | 0x80070000;
    if ( v22 >= 0 )
      goto LABEL_28;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (__int64)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
      (const char *)(unsigned int)v22);
  }
LABEL_37:
  wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,unsigned long (unsigned __int64),&unsigned long CloseTrace(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,-1,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64,unsigned long (unsigned __int64),&unsigned long CloseTrace(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,-1,std::nullptr_t>>(&TraceHandle);
  std::wstring::_Tidy_deallocate((__int64)InstanceName);
  std::unique_ptr<_EVENT_TRACE_PROPERTIES>::~unique_ptr<_EVENT_TRACE_PROPERTIES>((void **)&v29);
  return (unsigned int)v22;
}
