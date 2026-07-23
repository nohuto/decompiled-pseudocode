/*
 * XREFs of sub_1405BC224 @ 0x1405BC224
 * Callers:
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

char __fastcall sub_1405BC224(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // zf

  v2 = sub_1402CCC50(128LL);
  v3 = 0;
  LODWORD(CurrentThread) = sub_140317A80((unsigned __int64)a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = sub_140229550();
    if ( (_DWORD)CurrentThread )
    {
      v3 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_9;
      v5 = (v2 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_9;
      v5 = (v2 & 1) == 0;
    }
    if ( !v5 )
    {
      LOBYTE(CurrentThread) = 0;
      v2 |= 0x8000000000000000uLL;
    }
  }
LABEL_9:
  *a1 = v2;
  if ( v3 )
    LOBYTE(CurrentThread) = sub_1402294F0((__int64)a1, v2);
  return (char)CurrentThread;
}
