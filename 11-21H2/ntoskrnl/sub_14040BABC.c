/*
 * XREFs of sub_14040BABC @ 0x14040BABC
 * Callers:
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14040BABC(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdx

  v3 = (_QWORD *)(a1 + (unsigned int)((*(_DWORD *)(a3 + 4) << 6) - 64));
  *v3 = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  v3[3] = 0LL;
  v3[4] = 0LL;
  v3[5] = 0LL;
  v3[6] = 0LL;
  v3[7] = 0LL;
  return a1;
}
