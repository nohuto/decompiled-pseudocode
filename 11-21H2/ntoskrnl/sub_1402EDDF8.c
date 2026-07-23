/*
 * XREFs of sub_1402EDDF8 @ 0x1402EDDF8
 * Callers:
 *     sub_14079EC14 @ 0x14079EC14 (sub_14079EC14.c)
 * Callees:
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_1402EDDF8(int a1)
{
  REGHANDLE v1; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+70h] [rbp+8h] BYREF

  v4 = a1;
  v1 = qword_140C15FB0;
  result = EtwProviderEnabled(qword_140C15FB0, 0, 0x100uLL);
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v4;
    return EtwWriteEx(v1, &stru_140037B80, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return result;
}
