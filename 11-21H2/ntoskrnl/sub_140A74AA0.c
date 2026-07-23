/*
 * XREFs of sub_140A74AA0 @ 0x140A74AA0
 * Callers:
 *     sub_140A749D0 @ 0x140A749D0 (sub_140A749D0.c)
 *     sub_140A74B64 @ 0x140A74B64 (sub_140A74B64.c)
 * Callees:
 *     sub_140565ED4 @ 0x140565ED4 (sub_140565ED4.c)
 *     sub_140A74644 @ 0x140A74644 (sub_140A74644.c)
 */

__int64 __fastcall sub_140A74AA0(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  int v5; // r8d
  int v7; // edx

  sub_140565ED4(a2, *(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 36));
  v5 = sub_140A74644(
         (char *)(v3 & ~(unsigned __int64)*(unsigned __int8 *)(a1 + 37)),
         v4,
         *(unsigned __int8 *)(a1 + 36),
         5);
  if ( v5 < 0 )
    return 0LL;
  v7 = (*(_DWORD *)(a1 + 32) & 4) != 0 ? *(_DWORD *)(a1 + 32) | 5 : 0;
  *(_DWORD *)(a1 + 32) = v7;
  if ( v5 == 259 )
    *(_DWORD *)(a1 + 32) = v7 | 9;
  return 1LL;
}
