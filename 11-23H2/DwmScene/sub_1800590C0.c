/*
 * XREFs of sub_1800590C0 @ 0x1800590C0
 * Callers:
 *     sub_180058690 @ 0x180058690 (sub_180058690.c)
 * Callees:
 *     memcmp @ 0x18000CA6D (memcmp.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 */

char __fastcall sub_1800590C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  size_t v8; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  v10 = a1;
  v11 = a3;
  v5 = a1;
  while ( v5 != a2 )
  {
    if ( *(_DWORD *)(v5 + 32) != *(_DWORD *)(v3 + 32) )
      return 0;
    v6 = (_QWORD *)(v3 + 40);
    v7 = (_QWORD *)(v5 + 40);
    if ( *(_QWORD *)(v3 + 64) >= 0x10uLL )
      v6 = (_QWORD *)*v6;
    v8 = *(_QWORD *)(v5 + 56);
    if ( *(_QWORD *)(v5 + 64) >= 0x10uLL )
      v7 = (_QWORD *)*v7;
    if ( v8 != *(_QWORD *)(v3 + 56)
      || memcmp(v7, v6, v8)
      || _mm_movemask_ps(_mm_cmpeq_ps(*(__m128 *)(v3 + 72), *(__m128 *)(v5 + 72))) != 15 )
    {
      return 0;
    }
    sub_18001D3F8(&v10);
    sub_18001D3F8(&v11);
    v5 = v10;
    v3 = v11;
  }
  return 1;
}
