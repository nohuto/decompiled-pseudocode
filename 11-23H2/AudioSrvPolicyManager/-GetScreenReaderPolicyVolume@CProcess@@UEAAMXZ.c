/*
 * XREFs of ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x18000A3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x1800376B4 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

float __fastcall CProcess::GetScreenReaderPolicyVolume(CProcess *this)
{
  int v1; // r14d
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  DWORD v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
  struct TSSession *v9; // rbx
  _DWORD *v10; // rsi
  _DWORD *i; // rbp
  float v12; // xmm6_4
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct TSSession *v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 40);
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v3 = *((_DWORD *)this + 41);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v4 = 0LL;
  v15 = 0LL;
  EnterCriticalSection(&stru_180061648);
  v5 = *(_QWORD *)(qword_1800616F8
                 + 16
                 * (qword_180061710 & (0x100000001B3LL
                                     * (((unsigned __int64)v3 >> 24) ^ (0x100000001B3LL
                                                                      * (BYTE2(v3) ^ (0x100000001B3LL
                                                                                    * ((0x100000001B3LL
                                                                                      * ((unsigned __int8)v3 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v3))))))))
                 + 8);
  if ( v5 != qword_1800616E8 )
  {
    while ( v3 != *(_DWORD *)(v5 + 16) )
    {
      if ( v5 == *(_QWORD *)(qword_1800616F8
                           + 16
                           * (qword_180061710 & (0x100000001B3LL
                                               * (((unsigned __int64)v3 >> 24) ^ (0x100000001B3LL
                                                                                * (BYTE2(v3) ^ (0x100000001B3LL
                                                                                              * ((0x100000001B3LL
                                                                                                * ((unsigned __int8)v3 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v3))))))))) )
        goto LABEL_6;
      v5 = *(_QWORD *)(v5 + 8);
    }
    v4 = v5;
  }
LABEL_6:
  v6 = qword_1800616E8;
  if ( v4 )
    v6 = v4;
  if ( v6 == qword_1800616E8 )
  {
    LeaveCriticalSection(&stru_180061648);
    v7 = TsSessionCreate(v3, &v15);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x436,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v7,
        v13);
      if ( v2 )
        LeaveCriticalSection(v2);
      return *(float *)&v15;
    }
    v9 = v15;
  }
  else
  {
    v9 = *(struct TSSession **)(v6 + 24);
    LeaveCriticalSection(&stru_180061648);
  }
  v10 = (_DWORD *)*((_QWORD *)v9 + 123);
  for ( i = (_DWORD *)*((_QWORD *)v9 + 124); v10 != i; ++v10 )
  {
    if ( *v10 == v1 )
      break;
  }
  v12 = *((float *)v9 + 252);
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v10 == i )
    return v12;
  else
    return FLOAT_1_0;
}
