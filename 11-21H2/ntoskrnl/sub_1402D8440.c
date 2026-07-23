/*
 * XREFs of sub_1402D8440 @ 0x1402D8440
 * Callers:
 *     sub_1402D83B4 @ 0x1402D83B4 (sub_1402D83B4.c)
 *     sub_1402D8518 @ 0x1402D8518 (sub_1402D8518.c)
 *     sub_1402DB8D8 @ 0x1402DB8D8 (sub_1402DB8D8.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 */

__int64 __fastcall sub_1402D8440(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 28) && (unsigned __int64)(*(_QWORD *)a2 - qword_140C50630) < 0x8000000000LL )
    result = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
  else
    result = 0xFFFFFFFFLL;
  *(_DWORD *)(a2 + 16) = result;
  return result;
}
