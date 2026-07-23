/*
 * XREFs of MmMapMdl @ 0x140592400
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402155C8 @ 0x1402155C8 (sub_1402155C8.c)
 *     sub_1402157EC @ 0x1402157EC (sub_1402157EC.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_140308F00 @ 0x140308F00 (sub_140308F00.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405B7108 @ 0x1405B7108 (sub_1405B7108.c)
 *     sub_1405B719C @ 0x1405B719C (sub_1405B719C.c)
 */

__int64 __fastcall MmMapMdl(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _SLIST_ENTRY *v6; // r13
  unsigned int v7; // ebp
  __int64 v8; // r9
  unsigned __int64 v10; // r15
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rdi
  unsigned __int64 v15; // r14
  int v16; // ebp
  __int64 v17; // rsi
  BOOL v18; // ebp
  int v19; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+34h] [rbp-34h]

  v19 = 0;
  v6 = 0LL;
  v7 = sub_14032BCC0(a2);
  if ( v7 == -1 || v7 == 24 || (v7 & 7) == 5 || (v7 & 2) != 0 || (v7 & 0xFFFFFFF8) == 0x10 )
    return 3221225541LL;
  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
  {
    sub_14042A5E0(v8, *(_QWORD *)(a1 + 24));
    return 0LL;
  }
  else
  {
    v10 = (((*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
    v11 = v10;
    if ( dword_140D069EC )
      v11 = v10 + 1;
    if ( v11 <= 0x200
      && (v12 = sub_1405B719C(), (v6 = (_SLIST_ENTRY *)v12) != 0LL)
      && (v13 = sub_1402C6260((unsigned __int64 *)(v12 + 8), 3u, v11, 0),
          v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          ((v13 >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL)
      || (v14 = sub_1403095B0((__int64)&qword_140C534C0, v11)) != 0 )
    {
      v15 = *(unsigned int *)(a1 + 44) + ((__int64)(v14 << 25) >> 16);
      v20 = sub_140308F00(v14, v10, a1 + 48, v7, 0, &v19);
      if ( v20 >= 0 )
      {
        v16 = v19 & 1;
        if ( (v19 & 1) != 0 )
        {
          sub_1402155C8(v15);
          *(_WORD *)(a1 + 10) |= 0x800u;
        }
        v20 = 0;
        sub_14042A5E0(a4, v15);
        if ( v16 )
          sub_1402157EC(v15, v10, 0);
      }
      if ( v6 )
      {
        if ( v11 )
        {
          v17 = v11;
          do
          {
            v18 = 0;
            if ( sub_140317A80(v14) )
              v18 = sub_140229550() != 0;
            *(_QWORD *)v14 = 0LL;
            if ( v18 )
              sub_1402294F0(v14, 0LL);
            v14 += 8LL;
            --v17;
          }
          while ( v17 );
        }
        sub_1405B7108(v6);
      }
      else if ( v14 )
      {
        sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v14, v11);
      }
      return (unsigned int)v20;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
