/*
 * XREFs of sub_14025AEEC @ 0x14025AEEC
 * Callers:
 *     sub_1402652C4 @ 0x1402652C4 (sub_1402652C4.c)
 * Callees:
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 */

unsigned __int64 __fastcall sub_14025AEEC(__int64 a1, int a2, int a3)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rbp
  int v6; // r12d
  ULONG_PTR v7; // rdi
  ULONG_PTR v9; // r14
  unsigned __int64 result; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  ULONG_PTR v14; // rax
  __int64 v15; // [rsp+A0h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v15 = -1LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = a3 | 0x60002000;
  v7 = *(_QWORD *)(a1 + 24);
  v9 = qword_140C590C8;
  for ( result = sub_140277D10(
                   *(_QWORD *)a1,
                   v5,
                   v7,
                   0,
                   0,
                   *(_QWORD *)(a1 + 40) - ((unsigned __int64)*(unsigned int *)(v3 + 40) >> 12),
                   *(_DWORD *)(a1 + 60),
                   a2,
                   0x80000000,
                   a3 | 0x60002000u,
                   0,
                   v3,
                   (__int64)&v15);
        ;
        result = sub_140277D10(
                   *(_QWORD *)a1,
                   v5,
                   v7,
                   0,
                   0,
                   v11 - v12,
                   *(_DWORD *)(a1 + 60),
                   a2,
                   0x80000000,
                   v6,
                   0,
                   v3,
                   (__int64)&v15) )
  {
    v11 = *(_QWORD *)(a1 + 40);
    v12 = (unsigned __int64)*(unsigned int *)(v3 + 40) >> 12;
    if ( v12 == v11 )
      break;
    v13 = *(_QWORD *)(a1 + 32);
    if ( !v13 )
      break;
    result = v13 + v5;
    if ( v13 + v5 <= v5 || result > v9 )
      break;
    v5 += v13;
    v14 = v13 + v7;
    if ( v13 + v7 > v7 )
    {
      v7 += v13;
      if ( v14 <= v9 )
        continue;
    }
    v7 = v9;
  }
  return result;
}
