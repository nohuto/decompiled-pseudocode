/*
 * XREFs of sub_1406CF50C @ 0x1406CF50C
 * Callers:
 *     sub_1406F7664 @ 0x1406F7664 (sub_1406F7664.c)
 * Callees:
 *     sub_140281A3C @ 0x140281A3C (sub_140281A3C.c)
 *     sub_1402EE0C8 @ 0x1402EE0C8 (sub_1402EE0C8.c)
 *     sub_14030EC40 @ 0x14030EC40 (sub_14030EC40.c)
 *     sub_1406F5F44 @ 0x1406F5F44 (sub_1406F5F44.c)
 *     sub_1406F5F80 @ 0x1406F5F80 (sub_1406F5F80.c)
 */

__int64 __fastcall sub_1406CF50C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // r15
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // r8d
  __int64 result; // rax
  __int16 v15; // cx
  unsigned __int64 v16; // rax
  __int64 v17; // rax

  v5 = **(__int64 ***)(a3 + 72);
  v6 = *v5;
  v7 = ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) + 4096;
  v8 = (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12;
  if ( sub_14030EC40(a3) )
  {
    result = sub_1406F5F44(a1, v8, v7, 0LL);
    if ( (int)result < 0 )
      return result;
    v8 += (unsigned __int64)*(unsigned __int8 *)(sub_1402EE0C8(a3, 16LL) + 8) << 16;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), -1LL, -1LL);
    v9 = 1;
    v16 = v8
        + ((__int64)(*(_QWORD *)(v6 + 64)
                   + 8
                   * (((v15 & 0xFFF) != 0LL)
                    + ((unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), -1LL, -1LL) >> 12))
                   - *(_QWORD *)(a3 + 80)) >> 3 << 12);
    if ( v7 > v16 )
      v7 = v16;
  }
  v10 = *(_QWORD *)(a3 + 80);
  v11 = *(_QWORD *)(v6 + 64);
  if ( v10 != v11 && !v9 )
  {
    v17 = (v10 - v11) >> 3 << 12;
    v8 += v17;
    v7 += v17;
  }
  v12 = sub_140281A3C((__int64)v5);
  return sub_1406F5F80(a1, *(_QWORD *)(v12 + 8), v13, 0, v8, v7);
}
