/*
 * XREFs of sub_1402464E0 @ 0x1402464E0
 * Callers:
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_140594ABC @ 0x140594ABC (sub_140594ABC.c)
 * Callees:
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_14027428C @ 0x14027428C (sub_14027428C.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

char __fastcall sub_1402464E0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v5 = *(_DWORD *)(a1 + 80) & 7;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = sub_140317A10(v6);
  v15 = v7;
  if ( (v7 & 1) != 0 )
  {
    v7 = ((unsigned __int64)sub_140317A10(&v15) >> 12) & 0xFFFFFFFFFFLL;
    if ( v7 > qword_140C50840 )
      return v7;
    v8 = 6 * v7;
    v7 = (*(_QWORD *)(48 * v7 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
    if ( !(_DWORD)v7 )
      return v7;
    v9 = 8 * v8 - 0x220000000000LL;
    LODWORD(v7) = *(_BYTE *)(v9 + 35) & 7;
    if ( (_DWORD)v7 == v5 )
      return v7;
    if ( a3 )
    {
      LOBYTE(v7) = *(_DWORD *)(a3 + 48) & 0x70;
      if ( (_BYTE)v7 == 16 )
        return v7;
    }
    else if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 296LL) )
    {
      sub_1402ED128(1LL);
      v11 = sub_1403126F0(a2);
      if ( !v11 || (*(_DWORD *)(v11 + 48) & 0x70) == 0x10 )
      {
        LOBYTE(v12) = 17;
        LOBYTE(v7) = sub_1402806E0(1LL, v12);
        return v7;
      }
      LOBYTE(v12) = 17;
      sub_1402806E0(1LL, v12);
    }
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v14);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
  }
  else
  {
    if ( !v7 )
      return v7;
    if ( (v7 & 0x400) != 0 )
      return v7;
    if ( (v7 & 0x800) == 0 )
      return v7;
    v7 = sub_140315D60(v6);
    v9 = v7;
    if ( !v7 )
      return v7;
  }
  if ( (unsigned int)sub_140273234(v9) != v5 )
    sub_14027428C(v10, v5, 0LL);
  LOBYTE(v7) = -1;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v7;
}
