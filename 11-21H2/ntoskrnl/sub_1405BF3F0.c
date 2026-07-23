/*
 * XREFs of sub_1405BF3F0 @ 0x1405BF3F0
 * Callers:
 *     sub_1405BE6F4 @ 0x1405BE6F4 (sub_1405BE6F4.c)
 *     sub_1405BF3F0 @ 0x1405BF3F0 (sub_1405BF3F0.c)
 *     sub_1405BF468 @ 0x1405BF468 (sub_1405BF468.c)
 * Callees:
 *     sub_1405BF3F0 @ 0x1405BF3F0 (sub_1405BF3F0.c)
 */

__int64 __fastcall sub_1405BF3F0(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r10
  _QWORD *i; // rcx

  v3 = 7LL;
  v4 = 32LL * a2;
  v5 = *(_QWORD *)(v4 + a1 + 2056) - a3;
  *(_QWORD *)(v4 + a1 + 2056) = v5;
  if ( a2 < 7 )
    return sub_1405BF3F0(a1, (unsigned int)((a2 & 0xFFFFFFF9) != 0) + 7);
  if ( !v5 && (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    for ( i = (_QWORD *)(a1 + 2280); !*i; i += 4 )
    {
      if ( ++v3 >= 9 )
        return 1LL;
    }
  }
  return 0LL;
}
