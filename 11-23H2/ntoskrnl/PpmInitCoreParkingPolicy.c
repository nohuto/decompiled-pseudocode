/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140B73AC4
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140C394D4 = 100;
  byte_140C3968C = 100;
  result = &unk_140C3968E;
  do
  {
    *(result - 440) = 100;
    *result = 100;
    *(result - 461) = 0;
    *(result - 21) = 0;
    ++result;
    --v0;
  }
  while ( v0 );
  word_140C394C8 = 0;
  word_140C39680 = 0;
  dword_140C394D0 = 1;
  dword_140C39688 = 1;
  dword_140C394CC = 1;
  dword_140C39684 = 1;
  word_140C394C4 = 24902;
  word_140C3967C = 24902;
  byte_140C394C6 = 20;
  byte_140C3967E = 20;
  word_140C395FC = 0;
  word_140C397B4 = 0;
  byte_140C395FE = 0;
  byte_140C397B6 = 0;
  return result;
}
