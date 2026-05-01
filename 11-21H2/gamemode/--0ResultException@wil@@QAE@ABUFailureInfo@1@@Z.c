/*
 * XREFs of ??0ResultException@wil@@QAE@ABUFailureInfo@1@@Z @ 0x10002DCD
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YGXABUFailureInfo@2@@Z @ 0x10002F50 (-ThrowResultExceptionInternal@details@wil@@YGXABUFailureInfo@2@@Z.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z @ 0x10002C3F (-SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

volatile signed __int32 **__thiscall wil::ResultException::ResultException(
        volatile signed __int32 **this,
        const struct wil::FailureInfo *a2)
{
  volatile signed __int32 **result; // eax

  exception::exception((exception *)this);
  *this = (volatile signed __int32 *)&wil::ResultException::`vftable';
  this[25] = 0;
  this[26] = 0;
  wil::StoredFailureInfo::SetFailureInfo(this + 3, a2);
  this[27] = 0;
  result = this;
  this[28] = 0;
  return result;
}
