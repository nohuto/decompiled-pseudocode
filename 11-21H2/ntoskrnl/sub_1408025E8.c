/*
 * XREFs of sub_1408025E8 @ 0x1408025E8
 * Callers:
 *     sub_14098BB94 @ 0x14098BB94 (sub_14098BB94.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A6927C @ 0x140A6927C (sub_140A6927C.c)
 * Callees:
 *     sub_14025DC0C @ 0x14025DC0C (sub_14025DC0C.c)
 *     sub_140395198 @ 0x140395198 (sub_140395198.c)
 *     sub_140A51484 @ 0x140A51484 (sub_140A51484.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_1408025E8()
{
  char *v0; // rbx

  v0 = (char *)qword_140C22750;
  if ( qword_140C22750 )
  {
    sub_140395198();
    xmmword_140C22740 = 0LL;
    qword_140C22750 = 0LL;
    sub_140A51484(v0 + 48);
    sub_14025DC0C(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
