/*
 * XREFs of sub_140721BF0 @ 0x140721BF0
 * Callers:
 *     sub_140657654 @ 0x140657654 (sub_140657654.c)
 *     sub_14065B560 @ 0x14065B560 (sub_14065B560.c)
 *     sub_1406689D4 @ 0x1406689D4 (sub_1406689D4.c)
 *     sub_1406793E4 @ 0x1406793E4 (sub_1406793E4.c)
 *     sub_1406BC164 @ 0x1406BC164 (sub_1406BC164.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_140721254 @ 0x140721254 (sub_140721254.c)
 *     sub_1407F7AD0 @ 0x1407F7AD0 (sub_1407F7AD0.c)
 *     sub_140918134 @ 0x140918134 (sub_140918134.c)
 *     sub_1409188CC @ 0x1409188CC (sub_1409188CC.c)
 *     sub_140918BC4 @ 0x140918BC4 (sub_140918BC4.c)
 * Callees:
 *     sub_1406A7690 @ 0x1406A7690 (sub_1406A7690.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_140721D00 @ 0x140721D00 (sub_140721D00.c)
 */

__int64 __fastcall sub_140721BF0(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rsi
  __int16 i; // di
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rbx

  v3 = 0LL;
  for ( i = *(_WORD *)(a1 + 2); i >= 0; --i )
  {
    v8 = sub_140721CE0(a1, (unsigned __int16)i);
    v10 = v8;
    if ( *(_WORD *)(v8 + 66) && *(_BYTE *)(v8 + 65) == 1 )
      break;
    if ( *(_DWORD *)(v8 + 40) != -1 )
    {
      if ( sub_1406A7690(v8, a2, v9) )
      {
        v3 = v10;
        if ( *(_WORD *)(v10 + 66) )
        {
          if ( *(_BYTE *)(v10 + 65) )
            break;
        }
      }
    }
  }
  if ( a3 )
    *a3 = *(_WORD *)(v3 + 66);
  return sub_140721D00(v3, a2);
}
