/*
 * XREFs of sub_140291EB8 @ 0x140291EB8
 * Callers:
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     sub_140210580 @ 0x140210580 (sub_140210580.c)
 *     sub_140291C10 @ 0x140291C10 (sub_140291C10.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_14035C1C0 @ 0x14035C1C0 (sub_14035C1C0.c)
 *     sub_14035D00C @ 0x14035D00C (sub_14035D00C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140291EB8(_WORD *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(unsigned __int8 *)(a2 + 208);
  if ( (unsigned __int16)v2 >= *a1 )
    return 0;
  else
    return (*(_QWORD *)&a1[4 * v2 + 4] >> *(_BYTE *)(a2 + 209)) & 1;
}
