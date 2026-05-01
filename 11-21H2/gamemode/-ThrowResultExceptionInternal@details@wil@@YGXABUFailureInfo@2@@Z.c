/*
 * XREFs of ?ThrowResultExceptionInternal@details@wil@@YGXABUFailureInfo@2@@Z @ 0x10002F50
 * Callers:
 *     <none>
 * Callees:
 *     ??0ResultException@wil@@QAE@ABUFailureInfo@1@@Z @ 0x10002DCD (--0ResultException@wil@@QAE@ABUFailureInfo@1@@Z.c)
 *     __CxxThrowException@8 @ 0x1000738D (__CxxThrowException@8.c)
 */

void __cdecl __noreturn wil::details::ThrowResultExceptionInternal(wil::details *this)
{
  volatile signed __int32 *pExceptionObject[29]; // [esp+0h] [ebp-74h] BYREF

  wil::ResultException::ResultException(pExceptionObject, this);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVResultException_wil__);
}
