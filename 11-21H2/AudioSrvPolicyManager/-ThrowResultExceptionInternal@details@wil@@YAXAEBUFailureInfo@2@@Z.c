/*
 * XREFs of ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180007460
 * Callers:
 *     <none>
 * Callees:
 *     ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x180004C3C (--0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 *     _CxxThrowException_0 @ 0x180044437 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn wil::details::ThrowResultExceptionInternal(
        wil::details *this,
        const struct wil::FailureInfo *a2)
{
  _BYTE pExceptionObject[216]; // [rsp+20h] [rbp-D8h] BYREF

  wil::ResultException::ResultException((wil::ResultException *)pExceptionObject, this);
  throw (wil::ResultException *)pExceptionObject;
}
