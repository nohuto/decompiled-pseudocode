/*
 * XREFs of sub_1C00B0CA4 @ 0x1C00B0CA4
 * Callers:
 *     sub_1C00A88F4 @ 0x1C00A88F4 (sub_1C00A88F4.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00B0D20 @ 0x1C00B0D20 (sub_1C00B0D20.c)
 *     sub_1C00B0E00 @ 0x1C00B0E00 (sub_1C00B0E00.c)
 */

char sub_1C00B0CA4()
{
  void *v0; // rax
  void *v1; // rdi
  char v2; // bl
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  v0 = (void *)sub_1C00B0D20();
  v1 = v0;
  if ( v0 )
  {
    v2 = sub_1C00B0E00(v0, KeyValueInformation);
    ZwClose(v1);
    LOBYTE(v0) = v2;
  }
  return (char)v0;
}
