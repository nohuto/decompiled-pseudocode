/*
 * XREFs of sub_1402450AC @ 0x1402450AC
 * Callers:
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 */

void __fastcall sub_1402450AC(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  ULONG_PTR v4; // rdi
  __int64 v5; // rax
  ULONG_PTR v6; // r12
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  int v11; // r15d
  bool v12; // zf
  bool v13; // zf

  v2 = 0LL;
  v3 = a1 + 128;
  if ( a1 == -128 )
    return;
  do
  {
    if ( (*(_WORD *)(v3 + 32) & 0x3E) == 2 )
      goto LABEL_3;
    v4 = *(_QWORD *)(v3 + 8);
    v5 = *(unsigned int *)(v3 + 44);
    *(_WORD *)(v3 + 32) = *(_WORD *)(v3 + 32) & 0xFFC1 | 2;
    v6 = v4 + 8 * v5;
    while ( v4 < v6 )
    {
      if ( (v4 & 0xFFF) == 0 || !v2 )
      {
        if ( v2 )
        {
          LOBYTE(a2) = 17;
          sub_140334790(v2, a2);
        }
        v2 = sub_140273AAC(v4);
      }
      v7 = sub_1402738F0(v4, 0LL);
      v8 = sub_140317A10(v4);
      if ( v7 )
      {
        if ( (v8 & 1) == 0 )
        {
          v10 = v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
          v11 = 0;
          if ( !(unsigned int)sub_140317A80(v4) )
            goto LABEL_17;
          if ( (unsigned int)sub_140229550() )
          {
            v11 = 1;
            if ( !HIBYTE(word_140C51864) )
            {
              v13 = (v10 & 1) == 0;
LABEL_40:
              if ( !v13 )
                v10 |= 0x8000000000000000uLL;
            }
          }
          else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
          {
            v13 = (v10 & 1) == 0;
            goto LABEL_40;
          }
LABEL_17:
          *(_QWORD *)v4 = v10;
          if ( v11 )
            sub_1402294F0(v4, v10);
          *(_QWORD *)(v7 + 16) = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_14;
      }
      if ( (v8 & 0x400) != 0 )
      {
        v9 = v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
        if ( !(unsigned int)sub_140317A80(v4) )
          goto LABEL_12;
        if ( (unsigned int)sub_140229550() )
        {
          LODWORD(v7) = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v12 = (v9 & 1) == 0;
            goto LABEL_33;
          }
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
          v12 = (v9 & 1) == 0;
LABEL_33:
          if ( !v12 )
            v9 |= 0x8000000000000000uLL;
        }
LABEL_12:
        *(_QWORD *)v4 = v9;
        if ( (_DWORD)v7 )
          sub_1402294F0(v4, v9);
        goto LABEL_14;
      }
      if ( v8 )
        *(_QWORD *)v4 = v8 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
LABEL_14:
      v4 += 8LL;
    }
    if ( v2 )
    {
      LOBYTE(a2) = 17;
      sub_140334790(v2, a2);
      v2 = 0LL;
    }
LABEL_3:
    v3 = *(_QWORD *)(v3 + 16);
  }
  while ( v3 );
}
