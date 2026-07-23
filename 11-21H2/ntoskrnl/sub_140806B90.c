/*
 * XREFs of sub_140806B90 @ 0x140806B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140806BFC @ 0x140806BFC (sub_140806BFC.c)
 *     sub_14080A52C @ 0x14080A52C (sub_14080A52C.c)
 */

void sub_140806B90()
{
  _DWORD *v0; // rbx

  sub_1402D66A8((ULONG_PTR)&qword_140C1FF60);
  byte_140C1FF98 = 0;
  v0 = (_DWORD *)((char *)&unk_140C20050 + 104 * (unsigned int)dword_140C20048);
  sub_140806BFC(qword_140C1FF90);
  qword_140C1FF90 = -1LL;
  if ( (unsigned int)(*v0 - 1) <= 1 )
    sub_14080A52C();
  sub_1402935D0((ULONG_PTR)&qword_140C1FF60);
}
