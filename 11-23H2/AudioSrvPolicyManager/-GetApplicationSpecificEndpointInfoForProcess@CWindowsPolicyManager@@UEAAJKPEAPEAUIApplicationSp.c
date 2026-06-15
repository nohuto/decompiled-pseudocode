/*
 * XREFs of ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000CA60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180002860 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000A660 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::GetApplicationSpecificEndpointInfoForProcess(
        CWindowsPolicyManager *this,
        int a2,
        struct IApplicationSpecificEndpointInfo **a3)
{
  CProcess *v5; // rbx
  CApplicationManager *v6; // rdi
  RTL_SRWLOCK *v7; // rsi
  _QWORD *v8; // rax
  signed __int32 *v9; // rdx
  signed __int32 i; // eax
  int ApplicationSpecificEndpointInfo; // eax
  unsigned int v12; // ebx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v16; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  *a3 = 0LL;
  v6 = g_ApplicationManager;
  v16 = 0LL;
  v7 = (RTL_SRWLOCK *)((char *)g_ApplicationManager + 120);
  AcquireSRWLockShared((PSRWLOCK)g_ApplicationManager + 15);
  v8 = (_QWORD *)*((_QWORD *)v6 + 16);
  while ( v8 )
  {
    v9 = (signed __int32 *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( !v9[104] && v9[40] == a2 )
    {
      for ( i = v9[5]; i != 0x7FFFFFFF; i = v9[5] )
      {
        if ( i == _InterlockedCompareExchange(v9 + 5, i + 1, i) )
          break;
      }
      v5 = (CProcess *)v9;
      v16 = v9;
      break;
    }
  }
  if ( v7 )
    ReleaseSRWLockShared(v7);
  if ( v5
    && (ApplicationSpecificEndpointInfo = CProcess::GetApplicationSpecificEndpointInfo(v5, a3),
        v12 = ApplicationSpecificEndpointInfo,
        ApplicationSpecificEndpointInfo < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)ApplicationSpecificEndpointInfo,
      v14);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v16);
    return v12;
  }
  else
  {
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v16);
    return 0LL;
  }
}
