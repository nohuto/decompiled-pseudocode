/*
 * XREFs of sub_14053BD24 @ 0x14053BD24
 * Callers:
 *     sub_140538E4C @ 0x140538E4C (sub_140538E4C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14053BD24(__int64 a1, int a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8

  v2 = 0LL;
  if ( (unsigned int)(a2 - 1) <= 1 || a2 == 16 )
  {
    v2 = *(_QWORD *)(a1 + 992);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 992);
    if ( !v4 )
      return (unsigned int)v2;
    v5 = *(_QWORD *)(a1 + 1000);
    v6 = *(unsigned int *)(a1 + 1008);
    v7 = *(unsigned int *)(a1 + 1040);
    v8 = v4 / *(unsigned int *)(a1 + 1536);
    v9 = 0LL;
    v10 = v8;
    if ( v8 <= (unsigned int)dword_140C097B0 )
      v10 = v4;
    if ( v6 + v4 > v5 )
      v9 = v4 + (unsigned int)v6 - v5;
    v11 = v9 + v4 - v10;
    if ( v11 > v7 )
    {
      v12 = v11 - v7;
      if ( v12 / *(unsigned int *)(a1 + 1540) )
        v12 /= *(unsigned int *)(a1 + 1540);
      v2 = v12;
    }
    v2 += v10;
    if ( v2 > v4 )
      v2 = v4;
  }
  if ( v2 > 0xFFFFFFFF )
    LODWORD(v2) = -1;
  return (unsigned int)v2;
}
