/*
 * XREFs of sub_1C00AC0D4 @ 0x1C00AC0D4
 * Callers:
 *     sub_1C00A9738 @ 0x1C00A9738 (sub_1C00A9738.c)
 * Callees:
 *     sub_1C00739F0 @ 0x1C00739F0 (sub_1C00739F0.c)
 */

void sub_1C00AC0D4()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx

  if ( byte_1C0094160 == 1 )
  {
    v0 = qword_1C0093058;
    qword_1C0093058 = 0LL;
    dword_1C0093038 = 0;
    EtwUnregister(v0);
    byte_1C0094160 = 0;
  }
  if ( byte_1C0094161 == 1 )
  {
    v1 = qword_1C0093020;
    qword_1C0093020 = 0LL;
    dword_1C0093000 = 0;
    EtwUnregister(v1);
    byte_1C0094161 = 0;
  }
  if ( byte_1C0094162 == 1 )
  {
    KeCancelTimer(&stru_1C00935A0);
    KeCancelTimer(&stru_1C00936A0);
    if ( dword_1C0093400 || dword_1C0093408 )
      KeCancelTimer(&Timer);
    if ( dword_1C0093428 )
      KeCancelTimer(&stru_1C0093760);
    KeCancelTimer(&stru_1C0093660);
    v2 = qword_1C00930E8;
    qword_1C00930E8 = 0LL;
    dword_1C00930C8 = 0;
    EtwUnregister(v2);
    sub_1C00739F0();
    byte_1C0094162 = 0;
  }
}
