/*
 * XREFs of sub_140B25B70 @ 0x140B25B70
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     <none>
 */

__int64 sub_140B25B70()
{
  char *v0; // rdx
  unsigned int v1; // r8d
  char v2; // cl
  char v3; // cl
  char v4; // cl
  __int64 result; // rax

  dword_140D06BF4 = 0x10000;
  v0 = (char *)&unk_140C1E9D9;
  v1 = 0;
  do
  {
    v2 = v1 != 0 ? 80 : 90;
    *(v0 - 4272) = v2;
    *v0 = v2;
    v3 = -(v1++ != 0);
    v4 = (v3 & 0x14) + 30;
    *(v0 - 6320) = v4;
    *(v0 - 2048) = v4;
    ++v0;
  }
  while ( v1 < 0x40 );
  result = 5LL;
  byte_140C1D127 = 3;
  dword_140C1E134 = 5;
  dword_140C1F1E4 = 5;
  dword_140C1E130 = 5;
  dword_140C1F1E0 = 5;
  byte_140C1E1D7 = 3;
  word_140C1E129 = 12850;
  word_140C1F1D9 = 12850;
  return result;
}
