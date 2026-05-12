/*
 * XREFs of sub_1C0047878 @ 0x1C0047878
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 */

__int64 __fastcall sub_1C0047878(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx

  v4 = a2;
  v5 = 0;
  v6 = sub_1C000E2EC(a1);
  v7 = v6;
  if ( !v6 )
    return 3238002694LL;
  v9 = v4;
  v10 = sub_1C0007CF4(64LL, 24 * v4, 1161912658LL, *((_QWORD *)v6 + 1));
  if ( v10 )
  {
    *((_QWORD *)v7 + 593) = v10;
    v7[1184] = v4;
    *((_QWORD *)v7 + 594) = v10 + 16 * v4;
    if ( (_DWORD)v4 )
    {
      v11 = 0LL;
      do
      {
        *(_OWORD *)(*((_QWORD *)v7 + 593) + v11) = *(_OWORD *)(v11 + a3);
        v11 += 16LL;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    return (unsigned int)-1056964605;
  }
  return v5;
}
