/*
 * XREFs of ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x180009060
 * Callers:
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x18001C6F0 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18001E2E0 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180038354 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TsSessionIdGetAccessibilityAudioMonoMixState(DWORD a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  struct TSSession *v7; // rbx
  bool v8; // bl
  int v10; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct TSSession *v14; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v15 = v2;
  v3 = 0LL;
  v14 = 0LL;
  EnterCriticalSection(&stru_1800636C8);
  v4 = (_QWORD *)(qword_180063778
                + 16
                * (qword_180063790 & (0x100000001B3LL
                                    * (HIBYTE(a1) ^ (0x100000001B3LL
                                                   * (BYTE2(a1) ^ (0x100000001B3LL
                                                                 * (BYTE1(a1) ^ (0x100000001B3LL
                                                                               * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL))))))))));
  v5 = v4[1];
  if ( v5 != qword_180063768 )
  {
    while ( a1 != *(_DWORD *)(v5 + 16) )
    {
      if ( v5 == *v4 )
        goto LABEL_4;
      v5 = *(_QWORD *)(v5 + 8);
    }
    v3 = v5;
  }
LABEL_4:
  v6 = qword_180063768;
  if ( v3 )
    v6 = v3;
  if ( v6 == qword_180063768 )
  {
    LeaveCriticalSection(&stru_1800636C8);
    v10 = TsSessionCreate(a1, &v14);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x437,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v10,
        v11);
      goto LABEL_12;
    }
    v7 = v14;
  }
  else
  {
    v7 = *(struct TSSession **)(v6 + 24);
    LeaveCriticalSection(&stru_1800636C8);
  }
  if ( *((_DWORD *)v7 + 268) )
  {
    v8 = *((_DWORD *)v7 + 269) != 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    return v8;
  }
LABEL_12:
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0;
}
