/*
 * XREFs of sub_140702ABC @ 0x140702ABC
 * Callers:
 *     sub_1406BC500 @ 0x1406BC500 (sub_1406BC500.c)
 *     sub_140702420 @ 0x140702420 (sub_140702420.c)
 * Callees:
 *     <none>
 */

__int64 sub_140702ABC()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  v0 = *((_QWORD *)KeGetCurrentThread() + 23);
  v1 = *(_QWORD *)(v0 + 1368);
  if ( !v1 || (*(_DWORD *)(v0 + 2172) & 0x1000) != 0 )
    return (unsigned int)dword_140D3CBE8;
  else
    return *(unsigned int *)(v1 + 88);
}
