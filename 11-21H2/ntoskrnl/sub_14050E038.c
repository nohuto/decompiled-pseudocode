/*
 * XREFs of sub_14050E038 @ 0x14050E038
 * Callers:
 *     sub_1403BC388 @ 0x1403BC388 (sub_1403BC388.c)
 *     sub_14050FC10 @ 0x14050FC10 (sub_14050FC10.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void sub_14050E038()
{
  __int64 v0; // rax
  __int64 v1; // rdx

  if ( qword_140C4E380 && ((*(_DWORD *)(qword_140C4E380 + 224) & 1) != 0 || !HIDWORD(KeGetPcr()[1].LockArray)) )
  {
    v0 = sub_140303720(qword_140C4E380);
    sub_14042A5E0(v0, v1);
  }
  dword_140D01740 = 0;
}
