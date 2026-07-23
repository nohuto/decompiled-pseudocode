/*
 * XREFs of sub_140A748B4 @ 0x140A748B4
 * Callers:
 *     sub_140A7471C @ 0x140A7471C (sub_140A7471C.c)
 *     sub_140A74918 @ 0x140A74918 (sub_140A74918.c)
 *     sub_140A74B64 @ 0x140A74B64 (sub_140A74B64.c)
 * Callees:
 *     sub_140565ED4 @ 0x140565ED4 (sub_140565ED4.c)
 *     sub_140A74644 @ 0x140A74644 (sub_140A74644.c)
 */

__int64 __fastcall sub_140A748B4(__int64 a1, _BYTE *a2)
{
  int v2; // ebx
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // r11
  int v6; // eax

  v2 = 0;
  sub_140565ED4(a2, *(_QWORD *)(a1 + 16), *(_BYTE *)(a1 + 36));
  v6 = sub_140A74644(
         (char *)(v4 & ~(unsigned __int64)*(unsigned __int8 *)(v3 + 37)),
         v5,
         *(unsigned __int8 *)(v3 + 36),
         5);
  if ( v6 < 0 )
    return 0LL;
  if ( v6 == 259 )
    v2 = 2;
  return v2 | 1u;
}
