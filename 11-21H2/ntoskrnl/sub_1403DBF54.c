/*
 * XREFs of sub_1403DBF54 @ 0x1403DBF54
 * Callers:
 *     sub_140B03BA8 @ 0x140B03BA8 (sub_140B03BA8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DBF54(__int64 a1)
{
  unsigned __int64 v1; // rdi
  int v2; // esi
  __int64 v3; // r9
  char v4; // r15
  __int64 v5; // r11
  __int64 v7; // rbx
  unsigned __int64 v8; // r8
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 128);
  v2 = *(unsigned __int16 *)(a1 + 136);
  v3 = 0LL;
  v4 = byte_140C4AD98;
  v5 = 4LL * *(unsigned __int16 *)(a1 + 136);
  v7 = 0LL;
  v8 = v1;
  if ( v1 )
  {
    do
    {
      _BitScanForward64((unsigned __int64 *)&v9, v8);
      v10 = qword_140D088C0[dword_140D105E0[(unsigned int)((v2 << 6) + v9)]];
      if ( v4 )
      {
        v11 = *(_QWORD *)(v10 + 34912);
        if ( v11 != *(_QWORD *)(v10 + 200) )
          *(_BYTE *)(a1 + 184) |= 1u;
      }
      else
      {
        v11 = v1 & *(_QWORD *)(v10 + 8LL * *(unsigned __int8 *)(v10 + 208) + 34584);
      }
      v7 |= 1LL << v9;
      v8 &= ~v11;
    }
    while ( v8 );
    v12 = 0LL;
    v13 = v1;
    do
    {
      _BitScanForward64(&v14, v13);
      v12 |= 1LL << v14;
      v13 &= ~*(_QWORD *)(qword_140D088C0[dword_140D105E0[(unsigned int)((v2 << 6) + v14)]] + 34928);
    }
    while ( v13 );
    do
    {
      _BitScanForward64(&v15, v1);
      v16 = *(_QWORD *)(qword_140D088C0[dword_140D105E0[(unsigned int)((v2 << 6) + v15)]] + 34880);
      v3 |= v16;
      v1 &= ~v16 & ~(1LL << v15);
    }
    while ( v1 );
  }
  else
  {
    v12 = 0LL;
  }
  *(_QWORD *)(a1 + 160) = v7;
  *(_QWORD *)(a1 + 168) = v12;
  *(_QWORD *)(a1 + 152) = v3;
  qword_140D083A0[v5] |= v7;
  result = qword_140D31700[*(unsigned __int16 *)(a1 + 138)];
  if ( (*(_BYTE *)(result + 10) & 1) != 0 )
  {
    result = *(_QWORD *)(a1 + 128);
    *(_QWORD *)((char *)&unk_140D083A8 + v5 * 8) |= result;
  }
  return result;
}
