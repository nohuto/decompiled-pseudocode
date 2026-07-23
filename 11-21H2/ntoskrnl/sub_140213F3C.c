/*
 * XREFs of sub_140213F3C @ 0x140213F3C
 * Callers:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN __fastcall sub_140213F3C(__int64 a1, __int64 a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  _QWORD v6[2]; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-28h] BYREF

  v2 = qword_140C15FB0;
  result = EtwEventEnabled(qword_140C15FB0, &stru_14000E6C0);
  if ( result )
  {
    v6[0] = a1;
    UserData.Ptr = (ULONGLONG)v6;
    v6[1] = a2;
    *(_QWORD *)&UserData.Size = 16LL;
    return EtwWriteEx(v2, &stru_14000E6C0, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return result;
}
