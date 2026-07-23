/*
 * XREFs of sub_14092B55C @ 0x14092B55C
 * Callers:
 *     sub_14092B4E0 @ 0x14092B4E0 (sub_14092B4E0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1404299A0 (RtlCaptureContext.c)
 *     sub_1405402B4 @ 0x1405402B4 (sub_1405402B4.c)
 *     sub_1405403CC @ 0x1405403CC (sub_1405403CC.c)
 */

__int64 __fastcall sub_14092B55C(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  char v7; // di
  __int64 v8; // rax
  _CONTEXT ContextRecord; // [rsp+40h] [rbp-4F8h] BYREF

  result = sub_1405402B4((__int64)a1, a2);
  if ( (int)result >= 0 )
  {
    *a3 = 0;
    v7 = 1;
    a3[1] |= 1u;
    v8 = *a1;
    if ( *a1 )
    {
      if ( !*(_QWORD *)(v8 + 8) )
      {
        *(_QWORD *)(v8 + 8) = a2;
        v7 = 0;
        MEMORY[0x218] = 0;
      }
    }
    RtlCaptureContext(&ContextRecord);
    sub_1405402B4((__int64)a1, (__int64)&ContextRecord);
    sub_1405403CC((__int64)a1, a2, 0LL, v7, &ContextRecord);
    return 0LL;
  }
  else
  {
    *a3 = result;
  }
  return result;
}
