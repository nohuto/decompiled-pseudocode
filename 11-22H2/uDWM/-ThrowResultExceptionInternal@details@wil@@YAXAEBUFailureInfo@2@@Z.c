/*
 * XREFs of ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18009DEA0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180066340 (_CxxThrowException_0.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18009DA14 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall __noreturn wil::details::ThrowResultExceptionInternal(
        wil::details *this,
        const struct wil::FailureInfo *a2)
{
  _QWORD pExceptionObject[2]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v3[152]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v4; // [rsp+C8h] [rbp-30h]
  __int128 v5; // [rsp+D8h] [rbp-20h]

  pExceptionObject[1] = "unknown";
  pExceptionObject[0] = &wil::ResultException::`vftable';
  v4 = 0LL;
  wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)v3, this);
  v5 = 0LL;
  throw (wil::ResultException *)pExceptionObject;
}
