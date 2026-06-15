/*
 * XREFs of ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180010070
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x1800259B0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180028040 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002D32C (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18003969C (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     memmove_0 @ 0x180047698 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdRemoveActiveMediaApp(int a1, struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct TSSession *v8; // rdi
  struct CApplication **v9; // r8
  struct CApplication **v10; // rcx
  struct CApplication **v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  EnterCriticalSection(&stru_180061648);
  v5 = *(_QWORD *)(qword_1800616F8
                 + 16
                 * (qword_180061710 & (0x100000001B3LL
                                     * (HIBYTE(a1) ^ (0x100000001B3LL
                                                    * (BYTE2(a1) ^ (0x100000001B3LL
                                                                  * (BYTE1(a1) ^ (0x100000001B3LL
                                                                                * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))
                 + 8);
  if ( v5 == qword_1800616E8 )
  {
LABEL_5:
    v5 = 0LL;
  }
  else
  {
    while ( a1 != *(_DWORD *)(v5 + 16) )
    {
      if ( v5 == *(_QWORD *)(qword_1800616F8
                           + 16
                           * (qword_180061710 & (0x100000001B3LL
                                               * (HIBYTE(a1) ^ (0x100000001B3LL
                                                              * (BYTE2(a1) ^ (0x100000001B3LL
                                                                            * (BYTE1(a1) ^ (0x100000001B3LL
                                                                                          * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))) )
        goto LABEL_5;
      v5 = *(_QWORD *)(v5 + 8);
    }
  }
  v6 = qword_1800616E8;
  if ( v5 )
    v6 = v5;
  if ( v6 == qword_1800616E8 )
  {
    LeaveCriticalSection(&stru_180061648);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52A,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070490LL,
      v12);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2147943568LL;
  }
  else
  {
    v8 = *(struct TSSession **)(v6 + 24);
    LeaveCriticalSection(&stru_180061648);
    v9 = (struct CApplication **)*((_QWORD *)v8 + 7);
    v10 = (struct CApplication **)*((_QWORD *)v8 + 6);
    if ( v10 != v9 )
    {
      while ( 1 )
      {
        v11 = v10 + 1;
        if ( *v10 == a2 )
          break;
        ++v10;
        if ( v11 == v9 )
          goto LABEL_17;
      }
      memmove_0(v10, v11, (char *)v9 - (char *)v11);
      *((_QWORD *)v8 + 7) -= 8LL;
      TsSessionSendAppManagerNotification(v8);
    }
LABEL_17:
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
}
