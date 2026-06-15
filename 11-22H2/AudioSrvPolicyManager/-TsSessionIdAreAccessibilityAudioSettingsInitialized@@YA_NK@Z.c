/*
 * XREFs of ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x18000F9EC
 * Callers:
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x18001C6F0 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18001E2E0 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180038354 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TsSessionIdAreAccessibilityAudioSettingsInitialized(DWORD a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  unsigned __int64 i; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  struct TSSession *v10; // rbx
  bool v11; // bl
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD v14; // [rsp+40h] [rbp+8h]
  struct TSSession *v15; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+58h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v17 = v2;
  v14 = a1;
  v15 = 0LL;
  EnterCriticalSection(&stru_1800636C8);
  v16 = &stru_1800636C8;
  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v3 = 0x100000001B3LL * (*((unsigned __int8 *)&v14 + i) ^ (unsigned __int64)v3);
  v5 = 2 * (qword_180063790 & v3);
  v6 = *(_QWORD *)(qword_180063778 + 8 * v5 + 8);
  if ( v6 == qword_180063768 )
  {
LABEL_7:
    v6 = 0LL;
  }
  else
  {
    while ( a1 != *(_DWORD *)(v6 + 16) )
    {
      if ( v6 == *(_QWORD *)(qword_180063778 + 8 * v5) )
        goto LABEL_7;
      v6 = *(_QWORD *)(v6 + 8);
    }
  }
  v7 = qword_180063768;
  if ( v6 )
    v7 = v6;
  if ( v7 != qword_180063768 )
  {
    v10 = *(struct TSSession **)(v7 + 24);
    LeaveCriticalSection(&stru_1800636C8);
    goto LABEL_17;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
  v8 = TsSessionCreate(a1, &v15);
  if ( v8 >= 0 )
  {
    v10 = v15;
LABEL_17:
    v11 = *((_DWORD *)v10 + 268) != 0;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
    return v11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x437,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)v8,
    v12);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0;
}
