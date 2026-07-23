/*
 * XREFs of sub_14097F95C @ 0x14097F95C
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

char __fastcall sub_14097F95C(unsigned __int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rdx
  unsigned __int64 v3; // rbx
  int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // zf

  v1 = (_QWORD *)sub_140313C70(a1);
  v3 = sub_1402CBD10((unsigned __int64)v1, v2, 536870913);
  v4 = 0;
  LODWORD(CurrentThread) = sub_140317A80((unsigned __int64)v1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = sub_140229550();
    if ( (_DWORD)CurrentThread )
    {
      v4 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_9;
      v6 = (v3 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_9;
      v6 = (v3 & 1) == 0;
    }
    if ( !v6 )
    {
      LOBYTE(CurrentThread) = 0;
      v3 |= 0x8000000000000000uLL;
    }
  }
LABEL_9:
  *v1 = v3;
  if ( v4 )
    LOBYTE(CurrentThread) = sub_1402294F0((__int64)v1, v3);
  return (char)CurrentThread;
}
