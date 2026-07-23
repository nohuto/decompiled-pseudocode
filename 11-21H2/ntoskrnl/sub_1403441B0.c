/*
 * XREFs of sub_1403441B0 @ 0x1403441B0
 * Callers:
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_140343DC0 @ 0x140343DC0 (sub_140343DC0.c)
 * Callees:
 *     sub_1402B4130 @ 0x1402B4130 (sub_1402B4130.c)
 */

__int64 __fastcall sub_1403441B0(unsigned __int64 a1, __int64 a2)
{
  char v2; // r13
  int v5; // edx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned __int64 v11; // rbx
  int v12; // r12d
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  int v17; // r12d
  unsigned __int64 v18; // rcx
  int v19; // [rsp+68h] [rbp+10h]

  v2 = *(_BYTE *)(a1 + 209);
  v5 = *(unsigned __int16 *)(a2 + 136);
  v19 = v5;
  v6 = *(_QWORD *)(a2 + 128);
  v7 = v6;
  v8 = *(_QWORD *)(a2 + 152);
  if ( a2 == *(_QWORD *)(a1 + 192) )
  {
    v6 ^= *(_QWORD *)(a1 + 200);
    v8 ^= *(_QWORD *)(a1 + 34880);
    if ( (dword_140D0507C & 2) != 0 )
      v7 &= *(_QWORD *)(a1 + 34928);
  }
  v9 = ~*(_QWORD *)(a2 + 40) & v6;
  while ( 1 )
  {
    if ( !v9 && !v8 )
      return 0LL;
    if ( (v8 & v7) != 0 )
      break;
LABEL_14:
    if ( (v9 & v7) != 0 )
    {
      v16 = __ROR8__(v9 & v7, v2);
      v17 = v5 << 6;
      do
      {
        _BitScanForward64(&v18, v16);
        v16 ^= 1LL << v18;
        result = sub_1402B4130(a1, qword_140D088C0[dword_140D105E0[v17 + (((_BYTE)v18 + v2) & 0x3F)]], 0LL);
        if ( result )
          return result;
      }
      while ( v16 );
    }
    v5 = v19;
    v9 &= ~v7;
    v7 = *(_QWORD *)(a2 + 128);
  }
  v11 = __ROR8__(v8 & v7, v2);
  v12 = v5 << 6;
  while ( 1 )
  {
    _BitScanForward64(&v13, v11);
    v14 = qword_140D088C0[dword_140D105E0[v12 + ((v2 + (_BYTE)v13) & 0x3F)]];
    v15 = *(_QWORD *)(v14 + 34880);
    v8 &= ~v15;
    v11 &= __ROR8__(~v15, v2);
    result = sub_1402B4130(a1, 0LL, *(_QWORD *)(v14 + 34888));
    if ( result )
      return result;
    if ( !v11 )
    {
      v5 = v19;
      goto LABEL_14;
    }
  }
}
