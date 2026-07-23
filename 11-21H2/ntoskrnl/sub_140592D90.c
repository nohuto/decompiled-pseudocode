/*
 * XREFs of sub_140592D90 @ 0x140592D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026C720 @ 0x14026C720 (sub_14026C720.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140592D90(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 *v3; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  int v9; // eax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r9
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(__int64 **)(a1 + 168);
  v7 = *v3;
  if ( a3 == 3 )
  {
    v8 = sub_1402CFEB0(a2);
    v9 = sub_14027B080(v8);
    if ( *((_DWORD *)v3 + 3) )
    {
      if ( v9 == 1 )
        return 1LL;
    }
    if ( v9 == 8 || (*(_DWORD *)(v7 + 40) & 4) != 0 && v9 == 4 )
      return 1LL;
  }
  v10 = sub_140317A10(a2);
  v19 = v10;
  if ( a3 )
  {
    if ( (v10 & 1) != 0 )
    {
      v11 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFFLL;
      if ( v11 <= qword_140C50840 && ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        if ( (v10 & 0x80u) != 0LL )
        {
          sub_1402CFEB0(a2);
          sub_1402CFEB0(a2 + 8);
          v11 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
          if ( v12 >= v11 )
            v11 = v12;
        }
        goto LABEL_34;
      }
      return 1LL;
    }
  }
  else
  {
    if ( (v10 & 1) != 0 )
    {
      v10 = sub_140317A10((unsigned __int64)&v19);
    }
    else
    {
      if ( (v10 & 0x400) != 0 || (v10 & 0x800) == 0 )
        return 0LL;
      if ( qword_140C50780 )
      {
        if ( (v10 & 0x10) != 0 )
          v10 &= ~0x10uLL;
        else
          v10 &= ~qword_140C50780;
      }
    }
    v14 = (v10 >> 12) & 0xFFFFFFFFFFLL;
    v15 = (__int64)(a2 << 25) >> 16;
    if ( v14 <= qword_140C50840 && ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v16 = 48 * v14 - 0x220000000000LL;
      if ( !sub_14026C720(v16) )
      {
        if ( (unsigned int)sub_14027B080(v15) != 9
          || (v17 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL, v17 > 0xFFFFF6BFFFFFFF78uLL)
          || v17 < 0xFFFFF68000000000uLL
          || (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
          && (*(_BYTE *)(v16 + 34) & 7) == 6
          && (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
        {
          v11 = v14;
LABEL_34:
          v18 = sub_14042A5E0(v7, v11);
          if ( v18 < 0 && *((int *)v3 + 2) >= 0 )
            *((_DWORD *)v3 + 2) = v18;
        }
      }
    }
  }
  return 0LL;
}
