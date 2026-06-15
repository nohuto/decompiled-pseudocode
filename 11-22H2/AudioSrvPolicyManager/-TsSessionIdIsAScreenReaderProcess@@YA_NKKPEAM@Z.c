/*
 * XREFs of ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x18000A1F0
 * Callers:
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180025F74 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x180027B60 (-IsScreenReaderProcess@CProcess@@UEAA_NXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002E318 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180038354 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TsSessionIdIsAScreenReaderProcess(DWORD a1, int a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  struct TSSession *v12; // rbx
  _DWORD *v13; // rdx
  _DWORD *i; // rcx
  bool v15; // bl
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct TSSession *v18; // [rsp+68h] [rbp+20h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v7 = 0LL;
  v18 = 0LL;
  EnterCriticalSection(&stru_1800636C8);
  v8 = *(_QWORD *)(qword_180063778
                 + 16
                 * (qword_180063790 & (0x100000001B3LL
                                     * (HIBYTE(a1) ^ (0x100000001B3LL
                                                    * (BYTE2(a1) ^ (0x100000001B3LL
                                                                  * (BYTE1(a1) ^ (0x100000001B3LL
                                                                                * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))
                 + 8);
  if ( v8 != qword_180063768 )
  {
    while ( a1 != *(_DWORD *)(v8 + 16) )
    {
      if ( v8 == *(_QWORD *)(qword_180063778
                           + 16
                           * (qword_180063790 & (0x100000001B3LL
                                               * (HIBYTE(a1) ^ (0x100000001B3LL
                                                              * (BYTE2(a1) ^ (0x100000001B3LL
                                                                            * (BYTE1(a1) ^ (0x100000001B3LL
                                                                                          * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))))) )
        goto LABEL_6;
      v8 = *(_QWORD *)(v8 + 8);
    }
    v7 = v8;
  }
LABEL_6:
  v9 = qword_180063768;
  if ( v7 )
    v9 = v7;
  if ( v9 == qword_180063768 )
  {
    LeaveCriticalSection(&stru_1800636C8);
    v10 = TsSessionCreate(a1, &v18);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x437,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v10,
        (int)v6);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 0;
    }
    v12 = v18;
  }
  else
  {
    v12 = *(struct TSSession **)(v9 + 24);
    LeaveCriticalSection(&stru_1800636C8);
  }
  v13 = (_DWORD *)*((_QWORD *)v12 + 124);
  for ( i = (_DWORD *)*((_QWORD *)v12 + 123); i != v13; ++i )
  {
    if ( *i == a2 )
      break;
  }
  if ( a3 )
    *a3 = *((float *)v12 + 252);
  v15 = i != v13;
  if ( v6 )
    LeaveCriticalSection(v6);
  return v15;
}
