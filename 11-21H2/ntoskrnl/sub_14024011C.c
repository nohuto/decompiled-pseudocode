/*
 * XREFs of sub_14024011C @ 0x14024011C
 * Callers:
 *     sub_1406B9BC0 @ 0x1406B9BC0 (sub_1406B9BC0.c)
 *     sub_1406B9F74 @ 0x1406B9F74 (sub_1406B9F74.c)
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14024011C(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 8); i; i = *(_QWORD *)(i + 8) )
    a1 = i;
  return a1;
}
