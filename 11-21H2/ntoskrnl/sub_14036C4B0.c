/*
 * XREFs of sub_14036C4B0 @ 0x14036C4B0
 * Callers:
 *     sub_14036C440 @ 0x14036C440 (sub_14036C440.c)
 *     sub_140581434 @ 0x140581434 (sub_140581434.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14036C624 @ 0x14036C624 (sub_14036C624.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

char __fastcall sub_14036C4B0(__int64 a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  BOOL v7; // ebp
  BOOL v8; // edi
  struct _KTHREAD *CurrentThread; // rax

  memmove(
    (void *)(a2 + 2048),
    (const void *)0xFFFFF6FB7DBED800LL,
    8 * ((((unsigned __int64)qword_140C540C0 >> 39) & 0x1FF) - 256));
  sub_14036C624(a1, 0xFFFFF6FB7DBED800uLL, 256LL);
  memmove(
    (void *)(a2 + 8 * ((((unsigned __int64)qword_140C51BF0 >> 39) & 0x1FF) + 1)),
    (const void *)(8 * ((((unsigned __int64)qword_140C51BF0 >> 39) & 0x1FF) + 1) - 0x90482413000LL),
    8 * (511 - (((unsigned __int64)qword_140C51BF0 >> 39) & 0x1FF)));
  v4 = (__int64 *)(a2 + 8 * (((unsigned __int64)qword_140C50630 >> 39) & 0x1FF));
  v5 = 0LL;
  if ( (*(_DWORD *)(a1 + 2172) & 0x1000) == 0
    && (v6 = *(_QWORD *)(a1 + 1368)) != 0
    && (v5 = sub_140317A10(v6 + 784), (v5 & 1) != 0) )
  {
    if ( (sub_140317A10((unsigned __int64)v4) & 1) != 0 )
    {
      v7 = 0;
      if ( sub_140317A80((unsigned __int64)v4) )
        v7 = sub_140229550() != 0;
      *v4 = 0LL;
      if ( v7 )
        sub_1402294F0((__int64)v4, 0LL);
    }
    v8 = 0;
    LODWORD(CurrentThread) = sub_140317A80((unsigned __int64)v4);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = sub_140229550();
      if ( (_DWORD)CurrentThread )
      {
        v8 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_10;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) == 0 )
          goto LABEL_10;
      }
      v5 |= 0x8000000000000000uLL;
    }
  }
  else
  {
    v8 = 0;
    LODWORD(CurrentThread) = sub_140317A80((unsigned __int64)v4);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = sub_140229550();
      v8 = (_DWORD)CurrentThread != 0;
    }
  }
LABEL_10:
  *v4 = v5;
  if ( v8 )
    LOBYTE(CurrentThread) = sub_1402294F0((__int64)v4, v5);
  return (char)CurrentThread;
}
