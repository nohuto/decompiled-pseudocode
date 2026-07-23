/*
 * XREFs of sub_140988C68 @ 0x140988C68
 * Callers:
 *     sub_1406ADB5C @ 0x1406ADB5C (sub_1406ADB5C.c)
 *     sub_140988CC0 @ 0x140988CC0 (sub_140988CC0.c)
 * Callees:
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_14098884C @ 0x14098884C (sub_14098884C.c)
 */

__int64 __fastcall sub_140988C68(__int64 a1)
{
  __int64 *i; // rcx
  __int64 *v3; // rax

  sub_14098884C(a1, a1 + 96, (volatile signed __int64 *)(a1 + 120));
  for ( i = 0LL; ; i = v3 )
  {
    v3 = sub_1407B6B90(i);
    if ( !v3 )
      break;
    _InterlockedAnd((volatile signed __int32 *)v3 + 281, 0xFFFFBFFF);
  }
  sub_14098884C(a1, a1 + 56, (volatile signed __int64 *)(a1 + 88));
  *(_QWORD *)(a1 + 80) = 0LL;
  return 0LL;
}
