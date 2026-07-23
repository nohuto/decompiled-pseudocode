/*
 * XREFs of sub_140573CBC @ 0x140573CBC
 * Callers:
 *     sub_1403419B0 @ 0x1403419B0 (sub_1403419B0.c)
 *     sub_140342260 @ 0x140342260 (sub_140342260.c)
 *     sub_140574678 @ 0x140574678 (sub_140574678.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140573CBC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r8
  int v4; // r10d
  unsigned __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v2 = 0LL;
  v3 = *a2 & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 40LL);
  if ( !v3 )
    return 0;
  v4 = *(unsigned __int8 *)(a1 + 208) << 6;
  do
  {
    _BitScanForward64(&v5, v3);
    v6 = 1LL << v5;
    v3 ^= 1LL << v5;
    v7 = qword_140D088C0[dword_140D105E0[(unsigned int)(v4 + v5)]];
    v8 = *(_QWORD *)(v7 + 34912) & ~*(_QWORD *)(v7 + 200);
    if ( (v3 & v8) == v8 )
    {
      v3 ^= v8;
    }
    else
    {
      _BitScanForward64(&v9, v8);
      if ( (*(_DWORD *)(qword_140D088C0[dword_140D105E0[(unsigned int)(v4 + v9)]] + 236) & 0x400) != 0 )
        v2 |= v6;
    }
  }
  while ( v3 );
  if ( !v2 )
    return 0;
  *a2 = v2;
  return 1;
}
