/*
 * XREFs of ?TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z @ 0x18000DA70
 * Callers:
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x1800162F0 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180038354 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionUpdateDuckingGainForId(DWORD a1, const unsigned __int16 *a2, float a3, bool *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  struct TSSession *v14; // rbx
  _QWORD *i; // rbx
  _QWORD *v16; // rcx
  int v17; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct TSSession *v20; // [rsp+68h] [rbp+10h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x867,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL,
      (int)v7);
    if ( !v7 )
      return 2147942487LL;
    goto LABEL_31;
  }
  v8 = 0LL;
  v20 = 0LL;
  EnterCriticalSection(&stru_1800636C8);
  v9 = *(_QWORD *)(qword_180063778
                 + 16
                 * (qword_180063790 & (0x100000001B3LL
                                     * (HIBYTE(a1) ^ (0x100000001B3LL
                                                    * (BYTE2(a1) ^ (0x100000001B3LL
                                                                  * (BYTE1(a1) ^ (0x100000001B3LL
                                                                                * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))
                 + 8);
  if ( v9 != qword_180063768 )
  {
    while ( a1 != *(_DWORD *)(v9 + 16) )
    {
      if ( v9 == *(_QWORD *)(qword_180063778
                           + 16
                           * (qword_180063790 & (0x100000001B3LL
                                               * (HIBYTE(a1) ^ (0x100000001B3LL
                                                              * (BYTE2(a1) ^ (0x100000001B3LL
                                                                            * (BYTE1(a1) ^ (0x100000001B3LL
                                                                                          * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))) )
        goto LABEL_9;
      v9 = *(_QWORD *)(v9 + 8);
    }
    v8 = v9;
  }
LABEL_9:
  v10 = qword_180063768;
  if ( v8 )
    v10 = v8;
  if ( v10 != qword_180063768 )
  {
    v14 = *(struct TSSession **)(v10 + 24);
    LeaveCriticalSection(&stru_1800636C8);
LABEL_18:
    for ( i = (_QWORD *)*((_QWORD *)v14 + 133); i; i = (_QWORD *)*i )
    {
      v16 = (_QWORD *)i[1];
      if ( v16[3] >= 8uLL )
        v16 = (_QWORD *)*v16;
      if ( !(unsigned int)_o__wcsicmp(v16, a2) )
      {
        if ( *(float *)(*(_QWORD *)(i[1] + 32LL) + 8LL) == a3 )
        {
          *a4 = 0;
        }
        else
        {
          *a4 = 1;
          *(float *)(*(_QWORD *)(i[1] + 32LL) + 8LL) = a3;
        }
        if ( v7 )
          LeaveCriticalSection(v7);
        return 0LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86F,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL,
      (int)v7);
    if ( !v7 )
      return 2147942487LL;
LABEL_31:
    LeaveCriticalSection(v7);
    return 2147942487LL;
  }
  LeaveCriticalSection(&stru_1800636C8);
  v11 = TsSessionCreate(a1, &v20);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = v20;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x437,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)v11,
    (int)v7);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x86A,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)v12,
    v17);
  if ( v7 )
    LeaveCriticalSection(v7);
  return v12;
}
