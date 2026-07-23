/*
 * XREFs of sub_140AF6B44 @ 0x140AF6B44
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 *     sub_140AF6A74 @ 0x140AF6A74 (sub_140AF6A74.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 */

__int64 __fastcall sub_140AF6B44(__int64 a1, __int64 *a2)
{
  int v2; // ebp
  __int64 v4; // r14
  _QWORD *v5; // r12
  unsigned int v6; // esi
  __int64 *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  BOOL v13; // eax
  __int64 v14; // r11
  bool v15; // zf
  __int64 v16; // rdi
  int v17; // r8d
  unsigned __int64 v18; // rax

  v2 = 0;
  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v4 = qword_140C53278;
  }
  else
  {
    v4 = qword_140C53290;
  }
  v5 = (_QWORD *)sub_1403095B0((__int64)&qword_140C534C0, 3u);
  if ( v5 && (int)sub_14026A784((__int64)&StartContext, 3LL, 0LL, 2u) >= 0 )
  {
    v6 = 0;
    v7 = a2;
    while ( !v6 )
    {
LABEL_26:
      *v7 = v4;
      ++v6;
      ++v7;
      if ( v6 >= 4 )
      {
        sub_1402BB6D0((__int64)&qword_140C534C0, v5, 3u);
        return 1LL;
      }
    }
    v8 = sub_1403250B0((__int64)&StartContext, v6, 0x208u);
    v4 = v8;
    if ( v8 == -1 )
      return 0LL;
    v9 = 48 * v8 - 0x220000000000LL;
    *(_QWORD *)(v9 + 40) &= ~0x8000000000000000uLL;
    v10 = *(_QWORD *)(v9 + 24) & 0xC000000000000001uLL;
    *(_WORD *)(v9 + 32) = 1;
    *(_QWORD *)(v9 + 24) = v10 | 1;
    v11 = (__int64)&v5[v6 - 1];
    v12 = sub_1402CBD10((unsigned __int64)&v5[v6], v4, -1610612732);
    v13 = sub_140317A80(v11);
    v14 = 0LL;
    if ( v13 )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v2 = v14 + 1;
        if ( HIBYTE(word_140C51864) == (_BYTE)v14 )
        {
          v15 = ((unsigned __int8)v12 & (unsigned __int8)v2) == 0;
          goto LABEL_16;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v15 = (v12 & 1) == 0;
LABEL_16:
        if ( !v15 )
          v12 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v11 = v12;
    if ( v2 )
      sub_1402294F0(v11, v12);
    v16 = v11 << 25 >> 16;
    v17 = 536870913;
    if ( v6 != 1 )
    {
      v11 = v14;
      v17 = -1476395004;
    }
    v18 = sub_1402CBD10(v11, a2[v6 - 1], v17);
    if ( (dword_140D06880 & 0x4000000) == 0 && ((unsigned __int8)(1 << (v6 - 1)) & (unsigned __int8)byte_140C506CE) != 0 )
      v18 &= ~0x20uLL;
    v2 = 0;
    memset64((void *)v16, v18, 0x200uLL);
    goto LABEL_26;
  }
  return 0LL;
}
