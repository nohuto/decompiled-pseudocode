/*
 * XREFs of ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18000FAF0
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CCE0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x180013F40 (-UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@P.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x1800376B4 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdUpdateStreamClassPolicyGains(
        DWORD a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct IDuckingController *a5,
        int *a6)
{
  struct TSSession *v10; // rdi
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  struct TSSession *v18; // rbx
  struct IDuckingController *v19; // r13
  int updated; // eax
  unsigned int v21; // r12d
  int *v22; // r12
  int v23; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+20h] [rbp-58h]
  int v25; // [rsp+20h] [rbp-58h]
  struct TSSession *v26[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v28; // [rsp+80h] [rbp+8h] BYREF

  v28 = a1;
  v10 = (CApplicationManager *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v26[1] = v10;
  v11 = 0;
  v26[0] = 0LL;
  EnterCriticalSection(&stru_180061648);
  v12 = *(_QWORD *)(qword_1800616F8
                  + 16
                  * (qword_180061710 & (0x100000001B3LL
                                      * (HIBYTE(v28) ^ (0x100000001B3LL
                                                      * (BYTE2(v28) ^ (0x100000001B3LL
                                                                     * (BYTE1(v28) ^ (0x100000001B3LL
                                                                                    * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))
                  + 8);
  if ( v12 == qword_1800616E8 )
  {
LABEL_5:
    v12 = 0LL;
  }
  else
  {
    while ( a1 != *(_DWORD *)(v12 + 16) )
    {
      if ( v12 == *(_QWORD *)(qword_1800616F8
                            + 16
                            * (qword_180061710 & (0x100000001B3LL
                                                * (HIBYTE(v28) ^ (0x100000001B3LL
                                                                * (BYTE2(v28) ^ (0x100000001B3LL
                                                                               * (BYTE1(v28) ^ (0x100000001B3LL
                                                                                              * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))) )
        goto LABEL_5;
      v12 = *(_QWORD *)(v12 + 8);
    }
  }
  v13 = qword_1800616E8;
  if ( v12 )
    v13 = v12;
  if ( v13 == qword_1800616E8 )
  {
    LeaveCriticalSection(&stru_180061648);
    v14 = TsSessionCreate(a1, v26);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x436,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v14,
        v23);
      v16 = 1695LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v15,
        v24);
      if ( v10 )
        LeaveCriticalSection((LPCRITICAL_SECTION)v10);
      return (unsigned int)v15;
    }
    v18 = v26[0];
  }
  else
  {
    v18 = *(struct TSSession **)(v13 + 24);
    LeaveCriticalSection(&stru_180061648);
  }
  v28 = 0;
  v19 = a5;
  updated = UpdatePolicyGainsFromStreamClassPolicyTable(v18, a2, a3, 1, a4, a5, &v28);
  v21 = updated;
  if ( updated >= 0 )
  {
    v22 = a6;
    if ( a6 )
      *a6 = v28;
    v15 = UpdatePolicyGainsFromStreamClassPolicyTable(v18, a2, a3, 0, a4, v19, &v28);
    if ( v15 < 0 )
    {
      v16 = 1707LL;
      goto LABEL_11;
    }
    if ( v22 )
    {
      if ( *v22 || v28 )
        v11 = 1;
      *v22 = v11;
    }
    if ( v10 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A4,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)updated,
      v25);
    if ( v10 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v10);
    return v21;
  }
}
