/*
 * XREFs of _anonymous_namespace_::RunSynchronousInSTA__lambda_832c05d38d5c282b3aadaebeafbaeeca___ @ 0x18024F0C8
 * Callers:
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@H@Z1H@Z @ 0x180699FDC (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_28c8d881b27bf1ac2cdae8c290af34c5___ @ 0x18024E7D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_28c8d881b27bf1ac2cdae8c290af34c5___.c)
 *     ??R_lambda_832c05d38d5c282b3aadaebeafbaeeca_@@QEBA@XZ @ 0x180250058 (--R_lambda_832c05d38d5c282b3aadaebeafbaeeca_@@QEBA@XZ.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1804DF9CC (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1804E0BE0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

void __fastcall anonymous_namespace_::RunSynchronousInSTA__lambda_832c05d38d5c282b3aadaebeafbaeeca___(__int128 *a1)
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
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_28c8d881b27bf1ac2cdae8c290af34c5___(
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
  _lambda_832c05d38d5c282b3aadaebeafbaeeca_::operator()(a1);
}
