/*
 * XREFs of ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180002C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180002860 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033A0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x18001C970 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x1800376B4 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::HasAccessibilityAudioStateChanged(__int64 a1)
{
  unsigned int v2; // edi
  struct CProcess *v3; // rbx
  int Process; // eax
  volatile signed __int32 *v5; // r8
  DWORD v6; // ebp
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  unsigned __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  struct TSSession *v11; // r15
  CWindowsPolicyManager *v12; // rcx
  signed __int32 i; // edx
  BOOL v14; // eax
  int v16; // r13d
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rsi
  struct _RTL_CRITICAL_SECTION *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  struct TSSession *v24; // r15
  struct _RTL_CRITICAL_SECTION *v25; // r15
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rax
  struct TSSession *v29; // rsi
  int v30; // esi
  int v31; // eax
  int v32; // r15d
  int v33; // eax
  bool v34; // zf
  int v35; // r15d
  int v36; // eax
  struct TSSession *v37; // [rsp+20h] [rbp-48h] BYREF
  struct TSSession *v38; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v40; // [rsp+78h] [rbp+10h]
  struct TSSession *v41; // [rsp+80h] [rbp+18h] BYREF
  struct CProcess *v42; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v42 = 0LL;
  Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, 0LL, &v42);
  if ( Process < 0 )
  {
    if ( Process != -2147416387 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13D,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)Process,
        (int)v37);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v42);
    goto LABEL_21;
  }
  v3 = v42;
  (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v42 + 8LL))(v42);
  v40 = 1;
  v5 = (volatile signed __int32 *)v42;
  if ( v42 )
  {
    for ( i = *((_DWORD *)v42 + 5); i != 0x7FFFFFFF; i = *((_DWORD *)v5 + 5) )
    {
      if ( i == _InterlockedCompareExchange(v5 + 5, i - 1, i) )
        break;
    }
    if ( i == 1 )
    {
      if ( v5 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 560LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v6 = (*(__int64 (__fastcall **)(struct CProcess *))(*(_QWORD *)v3 + 48LL))(v3);
  LODWORD(v41) = v6;
  if ( !v6 )
    goto LABEL_21;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v37 = 0LL;
  EnterCriticalSection(&stru_180061648);
  v8 = 0x100000001B3LL
     * (BYTE3(v41) ^ (0x100000001B3LL
                    * (BYTE2(v41) ^ (0x100000001B3LL
                                   * (BYTE1(v41) ^ (0x100000001B3LL * ((unsigned __int8)v6 ^ 0xCBF29CE484222325uLL)))))));
  v9 = *(_QWORD *)(qword_1800616F8 + 16 * (qword_180061710 & v8) + 8);
  if ( v9 == qword_1800616E8 )
  {
LABEL_10:
    v9 = 0LL;
  }
  else
  {
    while ( v6 != *(_DWORD *)(v9 + 16) )
    {
      if ( v9 == *(_QWORD *)(qword_1800616F8
                           + 16
                           * (qword_180061710 & (0x100000001B3LL
                                               * (BYTE3(v41) ^ (0x100000001B3LL
                                                              * (BYTE2(v41) ^ (0x100000001B3LL
                                                                             * (BYTE1(v41) ^ (0x100000001B3LL
                                                                                            * ((unsigned __int8)v6 ^ 0xCBF29CE484222325uLL)))))))))) )
        goto LABEL_10;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  v10 = qword_1800616E8;
  if ( v9 )
    v10 = v9;
  if ( v10 == qword_1800616E8 )
  {
    LeaveCriticalSection(&stru_180061648);
    v31 = TsSessionCreate(v6, &v37);
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x436,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v31,
        (int)v37);
      if ( v7 )
        LeaveCriticalSection(v7);
LABEL_53:
      if ( (int)CWindowsPolicyManager::InitAccessibilityAudioSettings(v12, v6) < 0 )
        goto LABEL_21;
      goto LABEL_25;
    }
    v11 = v37;
  }
  else
  {
    v11 = *(struct TSSession **)(v10 + 24);
    v37 = v11;
    LeaveCriticalSection(&stru_180061648);
  }
  v32 = *((_DWORD *)v11 + 268);
  if ( v7 )
    LeaveCriticalSection(v7);
  if ( !v32 )
    goto LABEL_53;
LABEL_25:
  v16 = 0xFFFF;
  EnterCriticalSection(&stru_180061648);
  EnterCriticalSection(&stru_180061648);
  v17 = (_QWORD *)(qword_1800616F8 + 16 * (qword_180061710 & v8));
  v18 = v17[1];
  if ( v18 == qword_1800616E8 )
  {
LABEL_38:
    v18 = 0LL;
  }
  else
  {
    while ( v6 != *(_DWORD *)(v18 + 16) )
    {
      if ( v18 == *v17 )
        goto LABEL_38;
      v18 = *(_QWORD *)(v18 + 8);
    }
  }
  v19 = qword_1800616E8;
  if ( v18 )
    v19 = v18;
  if ( v19 == qword_1800616E8 )
  {
    LeaveCriticalSection(&stru_180061648);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46B,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070490LL,
      (int)v37);
  }
  else
  {
    v20 = *(_QWORD *)(v19 + 24);
    LeaveCriticalSection(&stru_180061648);
    v16 = *(_DWORD *)(v20 + 4);
  }
  LeaveCriticalSection(&stru_180061648);
  v21 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v41 = 0LL;
  EnterCriticalSection(&stru_180061648);
  v22 = *(_QWORD *)(qword_1800616F8 + 16 * (qword_180061710 & v8) + 8);
  if ( v22 == qword_1800616E8 )
  {
LABEL_39:
    v22 = 0LL;
  }
  else
  {
    while ( v6 != *(_DWORD *)(v22 + 16) )
    {
      if ( v22 == *(_QWORD *)(qword_1800616F8 + 16 * (qword_180061710 & v8)) )
        goto LABEL_39;
      v22 = *(_QWORD *)(v22 + 8);
    }
  }
  v23 = qword_1800616E8;
  if ( v22 )
    v23 = v22;
  if ( v23 == qword_1800616E8 )
  {
    LeaveCriticalSection(&stru_180061648);
    v33 = TsSessionCreate(v6, &v41);
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x436,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v33,
        (int)v37);
      if ( v21 )
        LeaveCriticalSection(v21);
LABEL_41:
      v25 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      v38 = 0LL;
      EnterCriticalSection(&stru_180061648);
      v26 = 2 * (qword_180061710 & v8);
      v27 = *(_QWORD *)(qword_1800616F8 + 8 * v26 + 8);
      if ( v27 == qword_1800616E8 )
      {
LABEL_50:
        v27 = 0LL;
      }
      else
      {
        while ( v6 != *(_DWORD *)(v27 + 16) )
        {
          if ( v27 == *(_QWORD *)(qword_1800616F8 + 8 * v26) )
            goto LABEL_50;
          v27 = *(_QWORD *)(v27 + 8);
        }
      }
      v28 = qword_1800616E8;
      if ( v27 )
        v28 = v27;
      if ( v28 == qword_1800616E8 )
      {
        LeaveCriticalSection(&stru_180061648);
        v36 = TsSessionCreate(v6, &v38);
        if ( v36 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x436,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)(unsigned int)v36,
            (int)v37);
          goto LABEL_57;
        }
        v29 = v38;
      }
      else
      {
        v29 = *(struct TSSession **)(v28 + 24);
        v38 = v29;
        LeaveCriticalSection(&stru_180061648);
      }
      if ( *((_DWORD *)v29 + 268) )
      {
        v30 = *((_DWORD *)v29 + 269);
        if ( v25 )
          LeaveCriticalSection(v25);
        v14 = v30 != 0;
LABEL_19:
        if ( _InterlockedExchange((volatile __int32 *)(a1 + 48), v14) != *(_DWORD *)(a1 + 48) )
        {
          LOBYTE(v2) = v40 != 0;
          ++v2;
        }
        goto LABEL_21;
      }
LABEL_57:
      if ( v25 )
        LeaveCriticalSection(v25);
      v14 = 0;
      goto LABEL_19;
    }
    v24 = v41;
  }
  else
  {
    v24 = *(struct TSSession **)(v23 + 24);
    v41 = v24;
    LeaveCriticalSection(&stru_180061648);
  }
  if ( !*(_DWORD *)v24 || (v34 = *((_DWORD *)v24 + 278) == 0, v35 = 1, v34) )
    v35 = 0;
  v40 = v35;
  if ( v21 )
    LeaveCriticalSection(v21);
  if ( v35 )
    goto LABEL_41;
  if ( v16 )
  {
    v40 = 0;
    if ( v16 != 0xFFFF )
      goto LABEL_41;
  }
LABEL_21:
  if ( v3 )
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
