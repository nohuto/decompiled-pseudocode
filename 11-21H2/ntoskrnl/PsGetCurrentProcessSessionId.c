/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x140287F00
 * Callers:
 *     sub_1406B9250 @ 0x1406B9250 (sub_1406B9250.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14078D3DC @ 0x14078D3DC (sub_14078D3DC.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_14081BB14 @ 0x14081BB14 (sub_14081BB14.c)
 *     IoGetContainerInformation @ 0x1409371A0 (IoGetContainerInformation.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 */

__int64 PsGetCurrentProcessSessionId()
{
  unsigned int v0; // ecx
  __int64 result; // rax

  v0 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
  result = 0LL;
  if ( v0 != -1 )
    return v0;
  return result;
}
