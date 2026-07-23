/*
 * XREFs of sub_1402A0244 @ 0x1402A0244
 * Callers:
 *     sub_1402A01BC @ 0x1402A01BC (sub_1402A01BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A0244(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // r8d
  unsigned __int64 v5; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // rdx
  __int64 v8; // rax

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 168);
  v4 = *((unsigned __int16 *)a2 + 4);
  v5 = *a2 & *(_QWORD *)(a1 + 128);
  if ( v3 )
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 108) & 0x3F;
    v7 = ~((1LL << v6) - 1) & v3;
    do
    {
      v8 = v7 & ~(1LL << v6);
      v7 = *(_QWORD *)(a1 + 168);
      if ( v8 )
        v7 = v8;
      _BitScanForward64((unsigned __int64 *)&v6, v7);
      v5 = qword_140D088C0[dword_140D105E0[(unsigned int)((v4 << 6) + v6)]];
    }
    while ( (v2 & *(_QWORD *)(v5 + 34928)) == 0 );
    _BitScanForward64(&v5, v2 & *(_QWORD *)(v5 + 34928));
    *(_BYTE *)(a1 + 108) = v5;
  }
  else
  {
    _BitScanForward64(&v5, v5);
  }
  return LOWORD(dword_140D105E0[(unsigned int)(v5 + (v4 << 6))]);
}
