/*
 * XREFs of _anonymous_namespace_::RunSynchronousInSTA__lambda_49390bb1d2cae92a58be327124002af0___ @ 0x18024ED14
 * Callers:
 *     _anonymous_namespace_::PinShellItem @ 0x1806A49CC (_anonymous_namespace_--PinShellItem.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c339d120b376647924ab8d58f8f10fc7___ @ 0x18024EA18 (Windows--Internal--ComTaskPool--QueueTask__lambda_c339d120b376647924ab8d58f8f10fc7___.c)
 *     _lambda_49390bb1d2cae92a58be327124002af0_::operator() @ 0x18024FBE4 (_lambda_49390bb1d2cae92a58be327124002af0_--operator().c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1804DF9CC (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1804E0BE0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall anonymous_namespace_::RunSynchronousInSTA__lambda_49390bb1d2cae92a58be327124002af0___(__int128 *a1)
{
  HRESULT ApartmentType; // eax
  wil::details::in1diag3 *v3; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  int v9[4]; // [rsp+20h] [rbp-60h] BYREF
  __int128 *v10; // [rsp+30h] [rbp-50h] BYREF
  __int128 v11; // [rsp+38h] [rbp-48h]
  __int128 v12; // [rsp+48h] [rbp-38h]
  APTTYPE pAptType; // [rsp+58h] [rbp-28h] BYREF
  __int128 v14; // [rsp+60h] [rbp-20h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = retaddr;
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType && pAptType != APTTYPE_MAINSTA )
  {
    v14 = 0LL;
    __ExceptionPtrCreate(&v14);
    v10 = &v14;
    v11 = *a1;
    v12 = a1[1];
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_c339d120b376647924ab8d58f8f10fc7___(
           v6,
           v5,
           CurrentThreadId,
           (__int64)&v10);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7F,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v7,
        v9[0]);
    if ( !__ExceptionPtrToBool(&v14) )
    {
      __ExceptionPtrDestroy(&v14);
      return;
    }
    v8 = std::exception_ptr::exception_ptr((std::exception_ptr *)v9, (const struct std::exception_ptr *)&v14);
    ApartmentType = std::rethrow_exception(v8);
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x6B,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)ApartmentType,
      v9[0]);
  }
  lambda_49390bb1d2cae92a58be327124002af0_::operator()(a1);
}
