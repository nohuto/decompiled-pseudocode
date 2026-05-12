/*
 * XREFs of sub_1C0078D4C @ 0x1C0078D4C
 * Callers:
 *     sub_1C00A88F4 @ 0x1C00A88F4 (sub_1C00A88F4.c)
 * Callees:
 *     sub_1C00B0AFC @ 0x1C00B0AFC (sub_1C00B0AFC.c)
 *     sub_1C00B106C @ 0x1C00B106C (sub_1C00B106C.c)
 */

int __fastcall sub_1C0078D4C(__int64 a1, unsigned int a2)
{
  void *v4; // rax
  void *v5; // rbx
  void *v6; // rax
  void *v7; // rbx

  v4 = (void *)sub_1C00B0AFC(a1, 0xFFFFFFFFLL);
  v5 = v4;
  if ( v4 )
  {
    sub_1C00B106C(v4);
    ZwClose(v5);
  }
  v6 = (void *)sub_1C00B0AFC(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    sub_1C00B106C(v6);
    LODWORD(v6) = ZwClose(v7);
  }
  return (int)v6;
}
