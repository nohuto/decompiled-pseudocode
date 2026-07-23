/*
 * XREFs of sub_140221FD0 @ 0x140221FD0
 * Callers:
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 * Callees:
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 */

_BOOL8 __fastcall sub_140221FD0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v1 = sub_1402CC7C0(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), 0LL, 0x80000000LL);
  v3 = (_QWORD *)v1;
  v4 = (_QWORD *)(v1 + 4088);
  do
  {
    if ( *v3 | *v4 )
      break;
    ++v3;
    --v4;
  }
  while ( v3 <= v4 );
  LOBYTE(v2) = 17;
  sub_1402BEDD0(v1, v2, 0x80000000LL);
  return v3 > v4;
}
