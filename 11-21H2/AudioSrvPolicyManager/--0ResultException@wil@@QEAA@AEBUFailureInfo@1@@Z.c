/*
 * XREFs of ??0ResultException@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x180004C3C
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180007460 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180006C4C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

wil::ResultException *__fastcall wil::ResultException::ResultException(
        wil::ResultException *this,
        const struct wil::FailureInfo *a2)
{
  wil::StoredFailureInfo *v3; // rcx
  wil::ResultException *result; // rax

  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_QWORD *)this = &wil::ResultException::`vftable';
  *((_QWORD *)this + 22) = 0LL;
  v3 = (wil::ResultException *)((char *)this + 24);
  *((_QWORD *)v3 + 20) = 0LL;
  wil::StoredFailureInfo::SetFailureInfo(v3, a2);
  *((_QWORD *)this + 24) = 0LL;
  result = this;
  *((_QWORD *)this + 25) = 0LL;
  return result;
}
