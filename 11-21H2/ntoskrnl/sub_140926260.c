/*
 * XREFs of sub_140926260 @ 0x140926260
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x1409AB6D0 (PsFreeSiloContextSlot.c)
 */

NTSTATUS sub_140926260()
{
  REGHANDLE v0; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(qword_140D00A20);
  qword_140D00A20 = 0LL;
  PsFreeSiloContextSlot((unsigned int)dword_140C48D10);
  if ( (unsigned int)dword_140C038A0 > 5 )
    sub_14020A9C4((__int64)&dword_140C038A0, (unsigned __int8 *)byte_14002A5B3, 0LL, 0LL, 2u, &v2);
  v0 = qword_140C038C0;
  qword_140C038C0 = 0LL;
  dword_140C038A0 = 0;
  return EtwUnregister(v0);
}
