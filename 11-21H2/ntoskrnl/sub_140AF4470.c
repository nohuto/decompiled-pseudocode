/*
 * XREFs of sub_140AF4470 @ 0x140AF4470
 * Callers:
 *     sub_140AF43D4 @ 0x140AF43D4 (sub_140AF43D4.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

_BOOL8 __fastcall sub_140AF4470(__int64 a1, unsigned __int64 a2, int a3)
{
  char v5; // bl
  _OWORD *v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = sub_140317A10(a2);
  v5 = v9;
  if ( (v9 & 1) == 0 )
    return 0LL;
  v7 = (_OWORD *)(48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFFLL)
                - 0x220000000000LL);
  v9 = sub_140317A10(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = 6 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFFLL);
  *(_OWORD *)(8 * v8 - 0x220000000000LL) = 0LL;
  *(_OWORD *)(8 * v8 - 0x220000000000LL + 16) = 0LL;
  *(_OWORD *)(8 * v8 - 0x220000000000LL + 32) = 0LL;
  if ( a3 )
  {
    if ( v5 < 0 )
      return 1LL;
  }
  *v7 = 0LL;
  v7[1] = 0LL;
  v7[2] = 0LL;
  return a3 <= 1 || a2 == 0xFFFFF6FB7DBEDF68uLL;
}
