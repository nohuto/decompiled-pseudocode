/*
 * XREFs of _lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator() @ 0x1800A55FC
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x1800A72C0 (Windows--Internal--COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3___ea_1800A72C0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800724D8 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$wait_for_completion@UIAsyncAction@Foundation@Windows@@@wil@@YAXPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800A1810 (--$wait_for_completion@UIAsyncAction@Foundation@Windows@@@wil@@YAXPEAUIAsyncAction@Foundation@Wi.c)
 *     ??_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA @ 0x1800A5690 (--_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  int v5; // eax
  DWORD v6; // edx
  int v7; // r8d
  const char *v8; // r9
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = *a1;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  try
  {
    v5 =  Windows::Services::TargetedContent::ITargetedContentAction::`vcall'{48,{flat}}(v4, &v16);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x687,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
        (const char *)(unsigned int)v5,
        v10);
    wil::wait_for_completion<Windows::Foundation::IAsyncAction>(v16, v6, v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
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
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset(v3 + 1);
  return 0LL;
}
