/*
 * XREFs of sub_140534EA0 @ 0x140534EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140534EA0(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  _DWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // eax

  v2 = 0;
  v3 = (_DWORD *)(a2 + 64);
  do
  {
    *(v3 - 16) = sub_14042A5E0(16 * v2 + 512, a2);
    *(v3 - 8) = sub_14042A5E0(16 * v2 + 256, v4);
    v6 = sub_14042A5E0(16 * v2++ + 384, v5);
    *v3++ = v6;
  }
  while ( v2 < 8 );
  return 0LL;
}
