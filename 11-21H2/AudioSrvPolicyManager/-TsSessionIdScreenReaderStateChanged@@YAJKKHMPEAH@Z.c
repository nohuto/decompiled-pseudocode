/*
 * XREFs of ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18002F7A4
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_::_Do_call @ 0x180027D20 (std--_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_--_Do_call.c)
 * Callees:
 *     pow @ 0x180003494 (pow.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z @ 0x18002A7A8 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEAK@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     memmove_0 @ 0x18004444F (memmove_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TsSessionIdScreenReaderStateChanged(DWORD SessionId, int a2, int a3, float a4, float *a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  float *v9; // r13
  int v10; // r15d
  int v11; // eax
  const char *v12; // r9
  unsigned int v13; // ebx
  __int64 result; // rax
  float *v15; // rsi
  float v16; // xmm9_4
  int *v17; // rbx
  char *v18; // rax
  char *i; // rcx
  float v20; // xmm6_4
  float v21; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v23; // [rsp+98h] [rbp+10h] BYREF

  v23 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v9 = a5;
  *a5 = 0.0;
  v10 = 1;
  try
  {
    v11 = TsSessionFromSessionId(SessionId, 1, (struct TSSession **)&a5);
    v13 = v11;
    if ( v11 >= 0 )
    {
      v15 = a5;
      v16 = a5[252];
      v17 = (int *)(a5 + 246);
      v18 = (char *)*((_QWORD *)a5 + 124);
      for ( i = (char *)*((_QWORD *)a5 + 123); i != v18 && *(_DWORD *)i != a2; i += 4 )
        ;
      if ( a3 )
      {
        if ( i == v18 )
        {
          if ( v18 == *((char **)a5 + 125) )
          {
            std::vector<unsigned long>::_Emplace_reallocate<unsigned long &>(
              (__int64)(a5 + 246),
              *((_BYTE **)a5 + 124),
              &v23);
          }
          else
          {
            *(_DWORD *)v18 = a2;
            *((_QWORD *)v17 + 1) += 4LL;
          }
        }
        v20 = pow(10.0, 0.0);
        if ( a4 <= v20 )
          v20 = a4;
        v21 = pow(10.0, -1.2);
        if ( v21 <= v20 )
          v21 = v20;
        v15[252] = v21;
      }
      else
      {
        if ( i != v18 )
        {
          memmove_0(i, i + 4, v18 - (i + 4));
          *((_QWORD *)v17 + 1) -= 4LL;
          v18 = (char *)*((_QWORD *)v17 + 1);
        }
        if ( (unsigned __int64)&v18[-*(_QWORD *)v17] < 4 )
          v15[252] = 1.0;
      }
      if ( v16 == v15[252] )
        v10 = 0;
      *(_DWORD *)v9 = v10;
      if ( v8 )
        LeaveCriticalSection(v8);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x725,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v11);
      if ( v8 )
        LeaveCriticalSection(v8);
      result = v13;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x746,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                           v12);
  }
  return result;
}
