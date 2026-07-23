/*
 * XREFs of sub_14065863C @ 0x14065863C
 * Callers:
 *     sub_14020B888 @ 0x14020B888 (sub_14020B888.c)
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     sub_1402A41A4 @ 0x1402A41A4 (sub_1402A41A4.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_1403117B0 @ 0x1403117B0 (sub_1403117B0.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_140459D9C @ 0x140459D9C (sub_140459D9C.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     NtReadFile @ 0x14073A320 (NtReadFile.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     sub_1407ADB90 @ 0x1407ADB90 (sub_1407ADB90.c)
 * Callees:
 *     sub_140417818 @ 0x140417818 (sub_140417818.c)
 */

char sub_14065863C()
{
  int v0; // eax
  char v1; // cl

  v0 = sub_140417818();
  v1 = 0;
  if ( v0 )
  {
    dword_140C0959C = 1;
    return 1;
  }
  else
  {
    dword_140C0959C = 0;
  }
  return v1;
}
