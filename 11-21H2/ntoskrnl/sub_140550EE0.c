/*
 * XREFs of sub_140550EE0 @ 0x140550EE0
 * Callers:
 *     sub_1403D8274 @ 0x1403D8274 (sub_1403D8274.c)
 * Callees:
 *     <none>
 */

__int64 sub_140550EE0()
{
  _DWORD *v0; // rax

  v0 = off_140C08E80;
  dword_140C48740 = 0;
  dword_140D01870 = 0;
  dword_140D0186C = 1;
  *((_DWORD *)off_140C08E80 + 4) = 0;
  v0[8] = 0;
  v0[9] = 0;
  v0[1] = 1;
  v0[2] = 1;
  v0[6] = 2834;
  v0[7] = 2834;
  *v0 = 40;
  v0[3] = 262145;
  v0[5] = 4;
  VidScreenToBufferBlt(&unk_140C48640, 0LL, 0LL, 6LL, 9, 4);
  VidScreenToBufferBlt(&unk_140C48760, 8LL, 0LL, 6LL, 9, 4);
  VidScreenToBufferBlt(&unk_140C48680, 16LL, 0LL, 6LL, 9, 4);
  return VidSolidColorFill(0LL, 0LL, 22LL, 9LL, 0);
}
