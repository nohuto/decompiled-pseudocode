/*
 * XREFs of sub_140595FBC @ 0x140595FBC
 * Callers:
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_140339240 @ 0x140339240 (sub_140339240.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

char __fastcall sub_140595FBC(unsigned __int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  char v5; // dl
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax

  v4 = sub_140317A10((unsigned __int64)a1);
  v5 = *(_BYTE *)(a2 + 34) >> 6;
  v6 = 1LL;
  if ( v5 != 1 )
  {
    if ( v5 )
    {
      if ( v5 == 2 )
        v6 = 25LL;
    }
    else
    {
      v6 = 9LL;
    }
  }
  v7 = v4 & 0xFFFFFFFFFFFFFC1FuLL | (32 * v6);
  v8 = 0;
  LODWORD(CurrentThread) = sub_140317A80((unsigned __int64)a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = sub_140229550();
    if ( (_DWORD)CurrentThread )
    {
      v8 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_13;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_13;
    }
    if ( (v7 & 1) != 0 )
    {
      LOBYTE(CurrentThread) = 0;
      v7 |= 0x8000000000000000uLL;
    }
  }
LABEL_13:
  *a1 = v7;
  if ( v8 )
    LOBYTE(CurrentThread) = sub_1402294F0((__int64)a1, v7);
  return (char)CurrentThread;
}
