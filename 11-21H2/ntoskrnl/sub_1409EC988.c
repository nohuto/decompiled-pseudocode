/*
 * XREFs of sub_1409EC988 @ 0x1409EC988
 * Callers:
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 *     sub_1409ECB90 @ 0x1409ECB90 (sub_1409ECB90.c)
 *     sub_1409ED7D4 @ 0x1409ED7D4 (sub_1409ED7D4.c)
 * Callees:
 *     sub_14024E01C @ 0x14024E01C (sub_14024E01C.c)
 */

void __fastcall sub_1409EC988(__int64 a1)
{
  __int64 v1; // rbx
  char *v3; // rdx

  v1 = *(_QWORD *)(a1 + 1088);
  if ( *(_BYTE *)(v1 + 33) )
  {
    KsrFreePersistedMemoryBlock(qword_140A37D90, *(_QWORD *)v1, 0LL);
    v3 = *(char **)(v1 + 8);
    *(_QWORD *)v1 = 0LL;
    if ( v3 )
    {
      sub_14024E01C(a1, v3);
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    *(_BYTE *)(v1 + 33) = 0;
  }
}
