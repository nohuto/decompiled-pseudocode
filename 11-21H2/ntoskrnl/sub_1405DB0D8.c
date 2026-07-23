/*
 * XREFs of sub_1405DB0D8 @ 0x1405DB0D8
 * Callers:
 *     sub_140293320 @ 0x140293320 (sub_140293320.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 */

void sub_1405DB0D8()
{
  REGHANDLE v0; // rbx

  if ( byte_140C5AE30 )
  {
    v0 = qword_140C1F580;
    if ( EtwEventEnabled(qword_140C1F580, &stru_140037918) )
      EtwWriteEx(v0, &stru_140037918, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}
