/*
 * XREFs of sub_140989A30 @ 0x140989A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140368A78 @ 0x140368A78 (sub_140368A78.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

void sub_140989A30()
{
  int v0; // ecx
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx

  sub_140368A78((__int64)&unk_140C23FC0);
  if ( !byte_140D048DC )
  {
    sub_140A48330(v0);
    v1 = byte_140C0C644 != 0 ? 0x40 : 0;
    sub_140A47CF8(v3, v2);
    sub_1402D66A8((ULONG_PTR)&qword_140C24600);
    BYTE11(xmmword_140C54798) = v1 | BYTE11(xmmword_140C54798) & 0x3F;
    dword_140C1F7EC = BYTE11(xmmword_140C54798) >> 6;
    sub_1403697C8(1);
    sub_1402935D0((ULONG_PTR)&qword_140C24600);
  }
}
