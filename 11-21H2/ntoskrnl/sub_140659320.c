/*
 * XREFs of sub_140659320 @ 0x140659320
 * Callers:
 *     KeAddSystemServiceTable @ 0x140844150 (KeAddSystemServiceTable.c)
 *     sub_140AF2E54 @ 0x140AF2E54 (sub_140AF2E54.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1406584BC @ 0x1406584BC (sub_1406584BC.c)
 */

__int64 __fastcall sub_140659320(unsigned int a1)
{
  __int64 v3; // rdi
  struct _MDL *v4; // rsi

  if ( !byte_140D3B01E )
    return 3221225629LL;
  v3 = 2LL * a1;
  v4 = (struct _MDL *)*((_QWORD *)&xmmword_140D06F80[v3 + 1] + 1);
  if ( !v4 )
    return 3221225659LL;
  if ( a1 == 1 && (unsigned int)sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23)) == -1 )
    return 3221226581LL;
  return sub_1406584BC(a1, xmmword_140D06F80[v3 + 1], v4);
}
