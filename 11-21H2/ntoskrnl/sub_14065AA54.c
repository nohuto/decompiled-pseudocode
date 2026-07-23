/*
 * XREFs of sub_14065AA54 @ 0x14065AA54
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN sub_14065AA54()
{
  REGHANDLE v0; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-28h] BYREF

  v0 = qword_140D3B010;
  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_140015A90;
  result = EtwEventEnabled(qword_140D3B010, &EventDescriptor);
  if ( result )
    return EtwWrite(v0, &EventDescriptor, 0LL, 0, 0LL);
  return result;
}
