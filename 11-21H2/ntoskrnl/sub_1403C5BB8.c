/*
 * XREFs of sub_1403C5BB8 @ 0x1403C5BB8
 * Callers:
 *     sub_140B12720 @ 0x140B12720 (sub_140B12720.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1403C5BB8(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  REGHANDLE v2; // rdi
  unsigned int v3; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = a2;
  v2 = qword_140C54EA8;
  v3 = 0;
  if ( qword_140C54EA8 && EtwEventEnabled(qword_140C54EA8, EventDescriptor) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v7;
    return (unsigned int)EtwWriteEx(v2, EventDescriptor, 0LL, 0, 0LL, 0LL, 1u, &UserData);
  }
  return v3;
}
