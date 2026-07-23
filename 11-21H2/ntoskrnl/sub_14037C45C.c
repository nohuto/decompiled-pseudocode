/*
 * XREFs of sub_14037C45C @ 0x14037C45C
 * Callers:
 *     sub_140236F54 @ 0x140236F54 (sub_140236F54.c)
 *     sub_14037A04C @ 0x14037A04C (sub_14037A04C.c)
 *     sub_14037C144 @ 0x14037C144 (sub_14037C144.c)
 *     sub_14037C880 @ 0x14037C880 (sub_14037C880.c)
 *     sub_1405FC7D8 @ 0x1405FC7D8 (sub_1405FC7D8.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_14037C45C(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  _OWORD *result; // rax

  v3 = *(_DWORD *)(a3 + 24);
  if ( v3 == -1 || !v3 )
    result = (_OWORD *)(a3 + 8);
  else
    result = (_OWORD *)(*(_QWORD *)a3 + 16LL * (unsigned int)(v3 - 1));
  *(_OWORD *)a2 = *result;
  *(_QWORD *)(a2 + 8) -= 8LL;
  return result;
}
