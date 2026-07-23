/*
 * XREFs of sub_140529428 @ 0x140529428
 * Callers:
 *     sub_14052995C @ 0x14052995C (sub_14052995C.c)
 *     sub_140529AF8 @ 0x140529AF8 (sub_140529AF8.c)
 *     sub_140529F08 @ 0x140529F08 (sub_140529F08.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140268B50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AF9E94 @ 0x140AF9E94 (sub_140AF9E94.c)
 */

void *__fastcall sub_140529428(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax
  size_t v7; // rsi
  void *v8; // rbx

  v3 = 1LL << *(_DWORD *)(a1 + 4LL * a2 + 36);
  v4 = *(unsigned int *)(a1 + 28);
  v5 = ((1 << v4) + 8) * v3;
  if ( !a3 )
  {
    v7 = v5;
    v8 = (void *)sub_1403B1F04(v4, v5);
    if ( v8 )
      goto LABEL_4;
    return 0LL;
  }
  v6 = sub_140AF9E94(a3, 0LL, (v5 + 4095) >> 12, 0LL);
  if ( !v6 )
    return 0LL;
  v7 = v5;
  v8 = (void *)sub_1403BE7F0(v6, v5, 1u);
LABEL_4:
  memset(v8, 0, v7);
  if ( !byte_140C4BE80 )
    KeInvalidateRangeAllCachesNoIpi((__int64)v8, v5);
  return v8;
}
