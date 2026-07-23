/*
 * XREFs of PpmInitHeteroPolicy @ 0x140B621B8
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PpmInitHeteroPolicy()
{
  char *v0; // rdx
  __int64 v1; // r9
  unsigned int v2; // r8d
  char v3; // cl
  char v4; // cl
  char v5; // cl
  __int64 result; // rax

  PpmHeteroMinRelativePerformance = 0x10000;
  v0 = (char *)&unk_140C39721;
  v1 = 2LL;
  do
  {
    v2 = 0;
    do
    {
      v3 = v2 != 0 ? 80 : 90;
      *(v0 - 440) = v3;
      *v0 = v3;
      v4 = -(v2++ != 0);
      v5 = (v4 & 0x14) + 30;
      *(v0 - 568) = v5;
      *(v0 - 128) = v5;
      ++v0;
    }
    while ( v2 < 0x40 );
    --v1;
  }
  while ( v1 );
  word_140C395FA = -1;
  result = 5LL;
  word_140C397B2 = -1;
  dword_140C395F4 = 5;
  dword_140C397AC = 5;
  dword_140C395F0 = 5;
  dword_140C397A8 = 5;
  byte_140C394E7 = 3;
  byte_140C3969F = 3;
  word_140C395E9 = 12850;
  word_140C397A1 = 12850;
  return result;
}
