/*
 * XREFs of RtlNewSecurityObjectEx @ 0x18007DB20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 */

__int64 RtlNewSecurityObjectEx(__int64 a1, _BYTE *a2, __int64 *a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 v6; // [rsp+80h] [rbp+28h]
  __int64 v7; // [rsp+88h] [rbp+30h]
  __int64 v8; // [rsp+90h] [rbp+38h]
  __int64 v9; // [rsp+98h] [rbp+40h]
  va_list va1; // [rsp+A0h] [rbp+48h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  v6 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  v8 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, _QWORD);
  return RtlpNewSecurityObject(a1, a2, a3, (unsigned __int64)va & -(__int64)(v4 != 0), v4 != 0, v6, v7, v8, v9);
}
