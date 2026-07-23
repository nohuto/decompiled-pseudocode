/*
 * XREFs of sub_1403C9B90 @ 0x1403C9B90
 * Callers:
 *     sub_14027CE40 @ 0x14027CE40 (sub_14027CE40.c)
 *     sub_14031B1C0 @ 0x14031B1C0 (sub_14031B1C0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

char __fastcall sub_1403C9B90(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rdi
  int i; // ebp
  unsigned __int64 v13; // rbx
  int v14; // r14d
  bool v15; // zf

  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = a2 << 25 >> 16;
  if ( a3 > 0 )
  {
    v7 = (unsigned int)a3;
    do
    {
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v7;
    }
    while ( v7 );
  }
  v8 = (_QWORD *)v6;
  v9 = v6 + 4088;
  if ( v4 >= v6 )
    v8 = (_QWORD *)v4;
  if ( v5 < v6 + 4096 )
    v9 = v5;
  CurrentThread = (struct _KTHREAD *)sub_1402CCC50(768LL);
  v11 = (unsigned __int64)CurrentThread;
  for ( i = ((__int64)(v9 - (_QWORD)v8) >> 3) + 1; i; --i )
  {
    v13 = v11;
    v14 = 0;
    LODWORD(CurrentThread) = sub_140317A80((unsigned __int64)v8);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = sub_140229550();
      if ( (_DWORD)CurrentThread )
      {
        v14 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v15 = (v11 & 1) == 0;
          goto LABEL_19;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) != 0 )
        {
          v15 = (v11 & 1) == 0;
LABEL_19:
          if ( !v15 )
            v13 = v11 | 0x8000000000000000uLL;
        }
      }
    }
    *v8 = v13;
    if ( v14 )
      LOBYTE(CurrentThread) = sub_1402294F0((__int64)v8, v13);
    ++v8;
  }
  return (char)CurrentThread;
}
