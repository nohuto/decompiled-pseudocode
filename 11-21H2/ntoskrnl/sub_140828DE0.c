/*
 * XREFs of sub_140828DE0 @ 0x140828DE0
 * Callers:
 *     sub_1403C0B80 @ 0x1403C0B80 (sub_1403C0B80.c)
 * Callees:
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 */

__int64 __fastcall sub_140828DE0(char a1)
{
  BOOL v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 != 0;
  _InterlockedExchange(&dword_140C0B8D4, v2);
  return sub_1407525EC(&stru_140011DA0, 4u, &v2);
}
