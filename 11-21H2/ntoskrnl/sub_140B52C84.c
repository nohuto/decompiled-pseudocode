/*
 * XREFs of sub_140B52C84 @ 0x140B52C84
 * Callers:
 *     sub_140983EF0 @ 0x140983EF0 (sub_140983EF0.c)
 * Callees:
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 */

NTSTATUS sub_140B52C84()
{
  REGHANDLE v0; // rcx

  v0 = qword_140C03028;
  qword_140C03028 = 0LL;
  dword_140C03008 = 0;
  return EtwUnregister(v0);
}
