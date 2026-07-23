/*
 * XREFs of sub_1409D7A10 @ 0x1409D7A10
 * Callers:
 *     sub_1409D4BC0 @ 0x1409D4BC0 (sub_1409D4BC0.c)
 * Callees:
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405FADF8 @ 0x1405FADF8 (sub_1405FADF8.c)
 */

void __fastcall sub_1409D7A10(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rdi

  memset(a1, 0, 0x428uLL);
  sub_1405FADF8((__int64)&a1[13]);
  a1[20].Count = 0LL;
  v2 = a1 + 21;
  v3 = v2 + 48;
  if ( v2 < &v2[48] )
  {
    v4 = v2 + 2;
    do
    {
      LODWORD(v2->Count) = -1;
      ExInitializeRundownProtection(v4);
      ExWaitForRundownProtectionRelease(v4);
      v2 += 3;
      v4 += 3;
    }
    while ( v2 < v3 );
  }
}
