/*
 * XREFs of sub_140399068 @ 0x140399068
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1402246C0 @ 0x1402246C0 (sub_1402246C0.c)
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_14081A3AC @ 0x14081A3AC (sub_14081A3AC.c)
 */

void sub_140399068()
{
  unsigned int v0; // r8d

  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  if ( byte_140D068E2 )
  {
    v0 = 1;
    __writemsr(0x17D0u, (*(_QWORD *)(qword_140D06FD0 + 48) << 12) | 1LL);
    if ( byte_140D068E3 )
      v0 = 3;
    __writemsr(0x17D1u, v0);
  }
  byte_140C203A0 = 0;
  sub_14081A3AC();
  sub_1402246C0(0LL);
  byte_140D07398 = 0;
  sub_140224C00(&qword_140C22FE0);
}
