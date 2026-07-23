/*
 * XREFs of sub_14022CF78 @ 0x14022CF78
 * Callers:
 *     sub_14022CE0C @ 0x14022CE0C (sub_14022CE0C.c)
 *     sub_14022CF58 @ 0x14022CF58 (sub_14022CF58.c)
 *     sub_14026EC38 @ 0x14026EC38 (sub_14026EC38.c)
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     sub_140286EC0 @ 0x140286EC0 (sub_140286EC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14022CF78(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
