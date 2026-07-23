/*
 * XREFs of sub_140A5A680 @ 0x140A5A680
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403D2A38 @ 0x1403D2A38 (sub_1403D2A38.c)
 *     sub_140A5A6CC @ 0x140A5A6CC (sub_140A5A6CC.c)
 *     sub_140A5AA64 @ 0x140A5AA64 (sub_140A5AA64.c)
 *     sub_140A5AC18 @ 0x140A5AC18 (sub_140A5AC18.c)
 */

__int64 __fastcall sub_140A5A680(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d

  v2 = *(_DWORD *)(a2 + 8);
  if ( !v2 )
    return sub_140A5A6CC();
  v3 = v2 - 1;
  if ( !v3 )
    return sub_140A5AA64();
  v4 = v3 - 2;
  if ( !v4 )
    return sub_1403D2A38(a1, a2);
  v5 = v4 - 2;
  if ( !v5 || v5 == 7 )
    return sub_140A5AC18();
  else
    return 3221225659LL;
}
