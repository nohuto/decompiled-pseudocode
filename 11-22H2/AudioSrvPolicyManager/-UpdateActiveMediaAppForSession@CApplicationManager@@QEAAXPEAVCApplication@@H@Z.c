/*
 * XREFs of ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18000F730
 * Callers:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180028230 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0006@@@Z @ 0x18002DB60 (-OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv.c)
 *     ?ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z @ 0x18002E8F0 (-ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180015518 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasPlayToStreams@CApplication@@QEAAHXZ @ 0x18002770C (-HasPlayToStreams@CApplication@@QEAAHXZ.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180038AB8 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18003A34C (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     memmove_0 @ 0x180048B28 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationManager::UpdateActiveMediaAppForSession(
        CApplicationManager *this,
        struct CApplication *a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r15
  unsigned int v6; // r13d
  __int64 v7; // rsi
  int v8; // edi
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // edi
  _QWORD *v13; // rax
  __int64 v14; // r8
  int v15; // edi
  struct _RTL_CRITICAL_SECTION *v16; // rbx
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  struct TSSession *v20; // rdi
  struct CApplication **v21; // r8
  struct CApplication **v22; // rcx
  struct CApplication **v23; // rdx
  int v24; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v6 = *((_DWORD *)a2 + 53);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  v7 = 0LL;
  v8 = 0;
  v9 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( v9 )
  {
    v10 = v9[2];
    v9 = (_QWORD *)*v9;
    if ( !*(_DWORD *)(v10 + 416) && *(_DWORD *)(v10 + 496) )
    {
      v11 = 1;
      v8 = 1;
      goto LABEL_7;
    }
  }
  v11 = 1;
LABEL_7:
  if ( a2 != (struct CApplication *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  if ( v8 && *((_DWORD *)a2 + 52) )
    goto LABEL_20;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  v12 = 0;
  v13 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( v13 )
  {
    v14 = v13[2];
    v13 = (_QWORD *)*v13;
    if ( !*(_DWORD *)(v14 + 416) && *(_DWORD *)(v14 + 500) )
    {
      v12 = 1;
      break;
    }
  }
  if ( a2 != (struct CApplication *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  if ( v12 && (unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
LABEL_20:
    v15 = 1;
  else
    v15 = 0;
  if ( !a3 && !(unsigned int)CApplication::HasPlayToStreams(a2) )
    v11 = 0;
  if ( v15 && !v11 )
  {
    TsSessionIdAddActiveMediaApp(v6, a2);
    goto LABEL_45;
  }
  v16 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  EnterCriticalSection(&stru_1800636C8);
  v17 = (_QWORD *)(qword_180063778
                 + 16
                 * (qword_180063790 & (0x100000001B3LL
                                     * (HIBYTE(v6) ^ (0x100000001B3LL
                                                    * (BYTE2(v6) ^ (0x100000001B3LL
                                                                  * (BYTE1(v6) ^ (0x100000001B3LL
                                                                                * ((unsigned __int8)v6 ^ 0xCBF29CE484222325uLL))))))))));
  v18 = v17[1];
  if ( v18 != qword_180063768 )
  {
    while ( v6 != *(_DWORD *)(v18 + 16) )
    {
      if ( v18 == *v17 )
        goto LABEL_33;
      v18 = *(_QWORD *)(v18 + 8);
    }
    v7 = v18;
  }
LABEL_33:
  v19 = qword_180063768;
  if ( v7 )
    v19 = v7;
  if ( v19 == qword_180063768 )
  {
    LeaveCriticalSection(&stru_1800636C8);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52B,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070490LL,
      v24);
    if ( !v16 )
      goto LABEL_45;
LABEL_44:
    LeaveCriticalSection(v16);
    goto LABEL_45;
  }
  v20 = *(struct TSSession **)(v19 + 24);
  LeaveCriticalSection(&stru_1800636C8);
  v21 = (struct CApplication **)*((_QWORD *)v20 + 7);
  v22 = (struct CApplication **)*((_QWORD *)v20 + 6);
  if ( v22 != v21 )
  {
    while ( 1 )
    {
      v23 = v22 + 1;
      if ( *v22 == a2 )
        break;
      ++v22;
      if ( v23 == v21 )
        goto LABEL_43;
    }
    memmove_0(v22, v23, (char *)v21 - (char *)v23);
    *((_QWORD *)v20 + 7) -= 8LL;
    TsSessionSendAppManagerNotification(v20);
  }
LABEL_43:
  if ( v16 )
    goto LABEL_44;
LABEL_45:
  if ( v5 )
    LeaveCriticalSection(v5);
}
