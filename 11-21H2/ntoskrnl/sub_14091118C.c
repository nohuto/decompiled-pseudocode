/*
 * XREFs of sub_14091118C @ 0x14091118C
 * Callers:
 *     sub_14053EE38 @ 0x14053EE38 (sub_14053EE38.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN sub_14091118C()
{
  REGHANDLE v0; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-28h] BYREF

  v0 = qword_140D3B010;
  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_140039628;
  result = EtwEventEnabled(qword_140D3B010, &EventDescriptor);
  if ( result )
    return EtwWrite(v0, &EventDescriptor, 0LL, 0, 0LL);
  return result;
}
