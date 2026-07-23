/*
 * XREFs of sub_14026ED6C @ 0x14026ED6C
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

char __fastcall sub_14026ED6C(__int64 *a1)
{
  __int64 CurrentThread; // rax
  __int64 v3; // rbx
  int v4; // esi
  bool v5; // zf

  CurrentThread = sub_140317A10(a1);
  if ( (CurrentThread & 0x80u) == 0LL )
    return CurrentThread;
  v3 = CurrentThread | 0x20;
  v4 = 0;
  LODWORD(CurrentThread) = sub_140317A80(a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = sub_140229550();
    if ( (_DWORD)CurrentThread )
    {
      v4 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_4;
      v5 = (v3 & 1) == 0;
    }
    else
    {
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) == 0 )
        goto LABEL_4;
      v5 = (v3 & 1) == 0;
    }
    if ( !v5 )
    {
      LOBYTE(CurrentThread) = 0;
      v3 |= 0x8000000000000000uLL;
    }
  }
LABEL_4:
  *a1 = v3;
  if ( v4 )
    LOBYTE(CurrentThread) = sub_1402294F0((__int64)a1, v3);
  return CurrentThread;
}
