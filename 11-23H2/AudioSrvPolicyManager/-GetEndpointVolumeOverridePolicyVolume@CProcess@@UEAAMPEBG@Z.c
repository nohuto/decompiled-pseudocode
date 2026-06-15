/*
 * XREFs of ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x1800125E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x1800376B4 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

float __fastcall CProcess::GetEndpointVolumeOverridePolicyVolume(CProcess *this, const unsigned __int16 *a2)
{
  DWORD v3; // ebp
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  double v9; // xmm0_8
  struct TSSession *v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct TSSession *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 41);
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = 0LL;
  v13 = 0LL;
  EnterCriticalSection(&stru_180061648);
  v6 = *(_QWORD *)(qword_1800616F8
                 + 16
                 * (qword_180061710 & (0x100000001B3LL
                                     * (((unsigned __int64)v3 >> 24) ^ (0x100000001B3LL
                                                                      * (BYTE2(v3) ^ (0x100000001B3LL
                                                                                    * ((0x100000001B3LL
                                                                                      * ((unsigned __int8)v3 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v3))))))))
                 + 8);
  if ( v6 != qword_1800616E8 )
  {
    while ( v3 != *(_DWORD *)(v6 + 16) )
    {
      if ( v6 == *(_QWORD *)(qword_1800616F8
                           + 16
                           * (qword_180061710 & (0x100000001B3LL
                                               * (((unsigned __int64)v3 >> 24) ^ (0x100000001B3LL
                                                                                * (BYTE2(v3) ^ (0x100000001B3LL
                                                                                              * ((0x100000001B3LL
                                                                                                * ((unsigned __int8)v3 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(v3))))))))) )
        goto LABEL_6;
      v6 = *(_QWORD *)(v6 + 8);
    }
    v5 = v6;
  }
LABEL_6:
  v7 = qword_1800616E8;
  if ( v5 )
    v7 = v5;
  if ( v7 == qword_1800616E8 )
  {
    LeaveCriticalSection(&stru_180061648);
    v8 = TsSessionCreate(v3, &v13);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x436,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v8);
      if ( v4 )
        LeaveCriticalSection(v4);
      *(float *)&v9 = FLOAT_1_0;
      return *(float *)&v9;
    }
    v10 = v13;
  }
  else
  {
    v10 = *(struct TSSession **)(v7 + 24);
    LeaveCriticalSection(&stru_180061648);
  }
  v9 = (*(double (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)v10 + 130) + 24LL))(
         *((_QWORD *)v10 + 130),
         a2);
  if ( v4 )
    LeaveCriticalSection(v4);
  return *(float *)&v9;
}
