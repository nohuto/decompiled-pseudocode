/*
 * XREFs of sub_140AF61F4 @ 0x140AF61F4
 * Callers:
 *     sub_140AF5F74 @ 0x140AF5F74 (sub_140AF5F74.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140235AAC @ 0x140235AAC (sub_140235AAC.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 *     sub_140AF65CC @ 0x140AF65CC (sub_140AF65CC.c)
 */

__int64 __fastcall sub_140AF61F4(__int64 a1)
{
  unsigned __int64 v2; // rcx
  BOOL v3; // r15d
  int i; // esi
  unsigned __int64 v5; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  int v13; // ebp
  unsigned __int64 v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)a1;
  memset(v14, 0, 32);
  v3 = qword_140C590D0 > 0x20000;
  sub_140352E50(v2, v14);
  for ( i = 3; ; --i )
  {
    v5 = v14[i];
    if ( (*(_QWORD *)v5 & 1) == 0 )
      break;
    if ( !i )
      return 1LL;
    if ( (*(_QWORD *)v5 & 0x80u) != 0LL )
    {
      *(_DWORD *)(a1 + 32) = i;
      return 1LL;
    }
LABEL_5:
    if ( !i )
      return 1LL;
  }
  if ( i == 1 )
  {
    if ( v3 )
    {
      v7 = sub_140AF65CC(*(unsigned int *)(a1 + 8), 1LL);
      if ( v7 != -1 )
      {
        qword_140C53558 += 512LL;
        v8 = sub_1402CBD10(v5, v7, -1275068412);
        v9 = 0;
        if ( !sub_140317A80(v5) )
        {
LABEL_13:
          *(_QWORD *)v5 = v8;
          if ( v9 )
            sub_1402294F0(v5, v8);
          if ( *(_DWORD *)(a1 + 12)
            || v5 == ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
            || v5 == ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
          {
            sub_140424F50((__m128i *)((__int64)(v5 << 25) >> 16 << 25 >> 16), 0x200000uLL);
          }
          *(_DWORD *)(a1 + 32) = 1;
          return 1LL;
        }
        if ( (unsigned int)sub_140229550() )
        {
          v9 = 1;
          if ( HIBYTE(word_140C51864) )
            goto LABEL_13;
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        {
          goto LABEL_13;
        }
        if ( (v8 & 1) != 0 )
          v8 |= 0x8000000000000000uLL;
        goto LABEL_13;
      }
    }
  }
  v11 = sub_140AF65CC(*(unsigned int *)(a1 + 8), 0LL);
  if ( v11 != -1 )
  {
    ++qword_140C53558;
    if ( i || *(_DWORD *)(a1 + 12) )
      sub_140235AAC(v11, v10, 0LL);
    v12 = sub_1402CBD10(v5, v11, i != 0 ? -1744830460 : -1342177276);
    v13 = 0;
    if ( !sub_140317A80(v5) )
      goto LABEL_24;
    if ( (unsigned int)sub_140229550() )
    {
      v13 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_33:
        if ( (v12 & 1) != 0 )
          v12 |= 0x8000000000000000uLL;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      goto LABEL_33;
    }
LABEL_24:
    *(_QWORD *)v5 = v12;
    if ( v13 )
      sub_1402294F0(v5, v12);
    goto LABEL_5;
  }
  return 0LL;
}
