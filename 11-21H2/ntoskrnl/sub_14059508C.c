/*
 * XREFs of sub_14059508C @ 0x14059508C
 * Callers:
 *     sub_1405952D8 @ 0x1405952D8 (sub_1405952D8.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

char __fastcall sub_14059508C(unsigned __int64 *a1, unsigned __int64 a2, int a3)
{
  int v4; // r8d
  __int64 v5; // r10
  unsigned __int64 v7; // rbx
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v10; // zf

  v4 = 4;
  v5 = a2;
  if ( a2 <= qword_140C50840 && ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v4 = sub_14026C61C(4, 48 * a2 - 0x220000000000LL);
  }
  else if ( a3 )
  {
    if ( a3 == 2 )
      v4 = 28;
  }
  else
  {
    v4 = 12;
  }
  v7 = sub_1402CBD10((unsigned __int64)a1, v5, v4 | 0xA0000000);
  v8 = 0;
  LODWORD(CurrentThread) = sub_140317A80((unsigned __int64)a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = sub_140229550();
    if ( (_DWORD)CurrentThread )
    {
      v8 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_16;
      v10 = (v7 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_16;
      v10 = (v7 & 1) == 0;
    }
    if ( !v10 )
    {
      LOBYTE(CurrentThread) = 0;
      v7 |= 0x8000000000000000uLL;
    }
  }
LABEL_16:
  *a1 = v7;
  if ( v8 )
    LOBYTE(CurrentThread) = sub_1402294F0((__int64)a1, v7);
  return (char)CurrentThread;
}
