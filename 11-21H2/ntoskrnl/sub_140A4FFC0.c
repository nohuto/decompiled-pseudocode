/*
 * XREFs of sub_140A4FFC0 @ 0x140A4FFC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14027D890 @ 0x14027D890 (sub_14027D890.c)
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

__int64 __fastcall sub_140A4FFC0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  BOOL v7; // ebp
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a2;
  v7 = sub_140317A80((unsigned __int64)a2);
  if ( v7 )
    v3 = sub_14027D890((unsigned __int64)a2, v3);
  v8 = *(_QWORD *)(a1 + 168);
  v13 = v3;
  if ( v8 )
  {
    if ( (v3 & 1) != 0 && !a3 )
    {
      v9 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFFLL;
      if ( (unsigned int)sub_1402B2E00(v9) )
      {
        if ( v9 != qword_140C53278
          && v9 != qword_140C53290
          && !_bittest64(*(const signed __int64 **)(v8 + 8), (unsigned int)v9) )
        {
          v10 = v3 & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
          v13 = v10;
          if ( v7 )
          {
            if ( (unsigned int)sub_140229550() )
            {
LABEL_19:
              *a2 = v10;
              sub_1402294F0((__int64)a2, v10);
              return 0LL;
            }
          }
LABEL_17:
          *a2 = v10;
        }
      }
    }
  }
  else if ( (v3 & 1) == 0 && (v3 & 0x400) != 0 && (v3 & 4) != 0 )
  {
    v10 = v3 & 0xFFFFFFFFFFFFFBFAuLL | 1;
    v13 = v10;
    if ( v7 )
    {
      if ( (unsigned int)sub_140229550() )
      {
        if ( !HIBYTE(word_140C51864) )
          v10 |= 0x8000000000000000uLL;
        goto LABEL_19;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        v10 |= 0x8000000000000000uLL;
    }
    goto LABEL_17;
  }
  return 0LL;
}
