/*
 * XREFs of sub_14069F244 @ 0x14069F244
 * Callers:
 *     sub_14065BC50 @ 0x14065BC50 (sub_14065BC50.c)
 *     sub_14065C8A4 @ 0x14065C8A4 (sub_14065C8A4.c)
 *     sub_14069F1F4 @ 0x14069F1F4 (sub_14069F1F4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 */

__int64 __fastcall sub_14069F244(_DWORD *a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  char *v4; // rbx
  __int64 result; // rax

  memset(a1, 0, 0x80uLL);
  sub_1407C97FC(a1 + 4);
  v2 = a1 + 18;
  v3 = 2LL;
  v4 = (char *)(a1 + 24);
  do
  {
    sub_1407C97FC(v4 - 40);
    result = sub_1407C97FC(v4);
    *v2 = -1;
    v4 += 8;
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
