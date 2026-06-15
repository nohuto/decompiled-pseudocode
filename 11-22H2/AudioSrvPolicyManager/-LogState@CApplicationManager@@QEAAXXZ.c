/*
 * XREFs of ?LogState@CApplicationManager@@QEAAXXZ @ 0x1800111DC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_fbe3706c53b5fc888db1b8a6d6b3f032__void_::_Do_call @ 0x18001EFF0 (std--_Func_impl_no_alloc__lambda_fbe3706c53b5fc888db1b8a6d6b3f032__void_--_Do_call.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicyManagerTelemetryProvider@@P6AXXZ@Z @ 0x180011580 (-get@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicy.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::LogState(CApplicationManager *this)
{
  CApplicationManager *v1; // rbx
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  _WORD *v6; // rdx
  __int64 v7; // rax
  int v8; // r8d
  int v9; // [rsp+38h] [rbp-79h] BYREF
  int v10; // [rsp+3Ch] [rbp-75h] BYREF
  int v11; // [rsp+40h] [rbp-71h] BYREF
  _DWORD v12[3]; // [rsp+44h] [rbp-6Dh] BYREF
  __int64 v13; // [rsp+50h] [rbp-61h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-49h] BYREF
  void *v16; // [rsp+78h] [rbp-39h]
  int v17; // [rsp+80h] [rbp-31h]
  int v18; // [rsp+84h] [rbp-2Dh]
  _WORD *v19; // [rsp+88h] [rbp-29h]
  int v20; // [rsp+90h] [rbp-21h]
  int v21; // [rsp+94h] [rbp-1Dh]
  __int64 *v22; // [rsp+98h] [rbp-19h]
  __int64 v23; // [rsp+A0h] [rbp-11h]
  _DWORD *v24; // [rsp+A8h] [rbp-9h]
  __int64 v25; // [rsp+B0h] [rbp-1h]
  int *v26; // [rsp+B8h] [rbp+7h]
  __int64 v27; // [rsp+C0h] [rbp+Fh]
  int *v28; // [rsp+C8h] [rbp+17h]
  __int64 v29; // [rsp+D0h] [rbp+1Fh]
  int *v30; // [rsp+D8h] [rbp+27h]
  __int64 v31; // [rsp+E0h] [rbp+2Fh]

  v1 = g_ApplicationManager;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v4 = (_QWORD *)*((_QWORD *)v1 + 9);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    v3 = *(_QWORD *)(wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::get(
                       v3,
                       _lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_)
                   + 8);
    if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 4) != 0 && (*(_QWORD *)(v3 + 24) & 4LL) == *(_QWORD *)(v3 + 24) )
    {
      v9 = -1;
      v10 = -1;
      v11 = -1;
      v12[0] = *(_DWORD *)(v5 + 208) != 0;
      v13 = *(_QWORD *)(v5 + 696);
      v6 = *(_WORD **)(v5 + 24);
      v30 = &v9;
      v31 = 4LL;
      v28 = &v10;
      v29 = 4LL;
      v26 = &v11;
      v27 = 4LL;
      v24 = v12;
      v25 = 4LL;
      v22 = &v13;
      v23 = 8LL;
      if ( v6 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( v6[v7] );
        v8 = 2 * v7 + 2;
      }
      else
      {
        v6 = &unk_180053328;
        v8 = 2;
      }
      v19 = v6;
      v20 = v8;
      v21 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 4;
      EventDescriptor.Keyword = 4LL;
      UserData.Ptr = *(_QWORD *)(v3 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v16 = &unk_180056840;
      v17 = 123;
      v18 = 1;
      v12[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v3 + 32), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
