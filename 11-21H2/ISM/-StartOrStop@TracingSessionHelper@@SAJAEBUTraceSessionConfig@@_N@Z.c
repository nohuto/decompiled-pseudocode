/*
 * XREFs of ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800C2C94
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C1400 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800C15D0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x1800C2FF0 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180038A10 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180082A64 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009440C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101U?$integral_constant@_N$00@0@@Z @ 0x1800BE128 (--$_Traits_find_last_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101U-$integral_constant@_N$00@0@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@_K$$A6AK_K@Z$1?CloseTrace@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0?0$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800BEB5C (--1-$unique_storage@U-$resource_policy@_K$$A6AK_K@Z$1-CloseTrace@@YAK0@ZU-$integral_constant@_K$.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800BF434 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800C1ED4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TracingSessionHelper::StartOrStop(
        const struct TraceSessionConfig *a1,
        char a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // r15
  _WORD *v6; // rcx
  unsigned int v7; // r13d
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
  __int64 v22; // rdi
  __int64 v23; // rsi
  const WCHAR *v25; // rdx
  signed int v26; // eax
  signed int v27; // edi
  ULONG64 TraceHandle[2]; // [rsp+50h] [rbp-31h] BYREF
  struct _ENABLE_TRACE_PARAMETERS EnableParameters; // [rsp+60h] [rbp-21h] BYREF
  LPCWSTR InstanceName[2]; // [rsp+90h] [rbp+Fh] BYREF
  int v32; // [rsp+A0h] [rbp+1Fh]
  unsigned __int64 v33; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v5 = (char *)a1 + 48;
  v6 = v5;
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v6 = *(_WORD **)v5;
  v7 = 1;
  v8 = std::_Traits_find_last_of<std::char_traits<unsigned short>>(v6, *((_QWORD *)v5 + 2), a3, a4, 1LL);
  *(_QWORD *)&EnableParameters.SourceId.Data2 = 0LL;
  *(_QWORD *)&EnableParameters.SourceId.Data4[4] = 7LL;
  LOWORD(EnableParameters.Version) = 0;
  if ( *((_QWORD *)v5 + 2) < v8 )
    v8 = *((_QWORD *)v5 + 2);
  v9 = v5;
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v9 = *(void **)v5;
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
  TraceHandle[1] = 0LL;
  std::wstring::wstring((__int64)InstanceName);
  v13 = 2 * v32;
  v14 = 2 * v32 + 644;
  v15 = (unsigned int *)operator new(v14);
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
  v16 = v5;
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v16 = *(char **)v5;
  v17 = &v16[2 * *((_QWORD *)v5 + 2)];
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v5 = *(char **)v5;
  memmove_0((char *)v15 + (unsigned int)(v13 + 122), v5, v17 - v5);
  TraceHandle[0] = -1LL;
  if ( !a2 )
  {
    v25 = (const WCHAR *)InstanceName;
    if ( v33 >= 8 )
      v25 = InstanceName[0];
    v26 = ControlTraceW(0LL, v25, (PEVENT_TRACE_PROPERTIES)v15, 1u);
    v27 = v26;
    if ( v26 > 0 )
      v27 = (unsigned __int16)v26 | 0x80070000;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (int)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
        (const char *)(unsigned int)v27);
      v7 = v27;
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  v18 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v18 = *(const WCHAR **)a1;
  if ( ControlTraceW(0LL, v18, (PEVENT_TRACE_PROPERTIES)v15, 0) != 4201 )
    goto LABEL_28;
  v19 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v19 = *(const WCHAR **)a1;
  started = StartTraceW(TraceHandle, v19, (PEVENT_TRACE_PROPERTIES)v15);
  if ( !started )
  {
    v22 = *((_QWORD *)a1 + 13);
    v23 = *((_QWORD *)a1 + 14);
    while ( v22 != v23 )
    {
      memset(&EnableParameters.ControlFlags, 0, 40);
      *(_QWORD *)&EnableParameters.Version = 2LL;
      started = EnableTraceEx2(
                  TraceHandle[0],
                  (LPCGUID)v22,
                  1u,
                  *(_BYTE *)(v22 + 16),
                  *(_QWORD *)(v22 + 24),
                  *(_QWORD *)(v22 + 32),
                  0,
                  &EnableParameters);
      if ( started )
      {
        v21 = 148LL;
        goto LABEL_30;
      }
      v22 += 40LL;
    }
LABEL_27:
    v7 = 0;
    goto LABEL_28;
  }
  v21 = 131LL;
LABEL_30:
  v7 = wil::details::in1diag3::Return_Win32(
         retaddr,
         v21,
         (__int64)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
         (const char *)started);
LABEL_28:
  wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,unsigned long (unsigned __int64),&unsigned long CloseTrace(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,-1,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64,unsigned long (unsigned __int64),&unsigned long CloseTrace(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,-1,std::nullptr_t>>(TraceHandle);
  std::wstring::_Tidy_deallocate((__int64)InstanceName);
  operator delete(v15);
  return v7;
}
