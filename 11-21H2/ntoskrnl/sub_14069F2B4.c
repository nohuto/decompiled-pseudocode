/*
 * XREFs of sub_14069F2B4 @ 0x14069F2B4
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_14065B560 @ 0x14065B560 (sub_14065B560.c)
 *     sub_14065B6A0 @ 0x14065B6A0 (sub_14065B6A0.c)
 *     sub_14069F1F4 @ 0x14069F1F4 (sub_14069F1F4.c)
 *     sub_14091D24C @ 0x14091D24C (sub_14091D24C.c)
 *     sub_140920CA0 @ 0x140920CA0 (sub_140920CA0.c)
 *     sub_140920F1C @ 0x140920F1C (sub_140920F1C.c)
 *     sub_140921F64 @ 0x140921F64 (sub_140921F64.c)
 *     sub_140922400 @ 0x140922400 (sub_140922400.c)
 *     sub_140922984 @ 0x140922984 (sub_140922984.c)
 *     sub_140922B20 @ 0x140922B20 (sub_140922B20.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 */

__int64 __fastcall sub_14069F2B4(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x50uLL);
  v2 = a1 + 32;
  v3 = 2LL;
  do
  {
    *(_OWORD *)(v2 - 24) = 0LL;
    *(_OWORD *)(v2 - 8) = 0LL;
    *((_DWORD *)v2 - 4) = -1;
    result = sub_1407C97FC(v2);
    v2 += 32;
    --v3;
  }
  while ( v3 );
  return result;
}
