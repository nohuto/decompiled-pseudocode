/*
 * XREFs of _lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator() @ 0x1800B4154
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x1800B7230 (Windows--Internal--COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3___ea_1800B7230.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180075B18 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA @ 0x1800B4240 (--_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  int v4; // eax
  DWORD v5; // edx
  int v6; // r8d
  int v7; // eax
  const char *v8; // r9
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+18h] BYREF

  try
  {
    v2 = a2;
    v3 = a1;
    v18 = 0LL;
    v4 =  Windows::Services::TargetedContent::ITargetedContentAction::`vcall'{48,{flat}}(*a1, &v18);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1671LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
        (const char *)(unsigned int)v4,
        v12);
    v7 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v18, v5, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1639LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)v7,
        v12);
    v9 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4E,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      v8);
    v3 = a1;
    v2 = a2;
  }
  *(_BYTE *)(v2 + 16) = 1;
  v10 = v3[1];
  v3[1] = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
