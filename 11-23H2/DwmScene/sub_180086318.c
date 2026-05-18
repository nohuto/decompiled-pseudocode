/*
 * XREFs of sub_180086318 @ 0x180086318
 * Callers:
 *     sub_180086614 @ 0x180086614 (sub_180086614.c)
 *     sub_18008BAC8 @ 0x18008BAC8 (sub_18008BAC8.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18007CA00 @ 0x18007CA00 (sub_18007CA00.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180086318(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi

  if ( a1 != a2 )
  {
    v5 = a1 + 36;
    do
    {
      sub_180017648((_QWORD *)a3, v5 - 36);
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(v5 - 4);
      *(_DWORD *)(a3 + 36) = *(_DWORD *)v5;
      *(_BYTE *)(a3 + 40) = *(_BYTE *)(v5 + 4);
      *(_DWORD *)(a3 + 44) = *(_DWORD *)(v5 + 8);
      a3 += 48LL;
      v5 += 48LL;
    }
    while ( v5 - 36 != a2 );
  }
  sub_18007CA00(a3, a3);
  return a3;
}
