/*
 * XREFs of PfSnGetNLLogEntry @ 0x140773C6C
 * Callers:
 *     PfSnLogStreamCreate @ 0x140773B18 (PfSnLogStreamCreate.c)
 *     PfSnLogStreamDelete @ 0x1407C3554 (PfSnLogStreamDelete.c)
 *     PfSnLogVolumeCreate @ 0x1407DAD10 (PfSnLogVolumeCreate.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

_DWORD *__fastcall PfSnGetNLLogEntry(__int64 a1, char a2, unsigned int a3, int a4, int a5)
{
  _DWORD *v7; // rsi
  unsigned int v9; // edi
  _DWORD *result; // rax

  v7 = (_DWORD *)((a1 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
  memset(v7, 0, a3);
  v9 = *v7 & 0x80000000 | (8 * (a3 & 0xFFFFFFF));
  v7[1] = a4;
  result = v7;
  *v7 = a2 & 7 | v9;
  v7[2] = a5;
  return result;
}
