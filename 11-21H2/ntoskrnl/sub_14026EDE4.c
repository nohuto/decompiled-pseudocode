/*
 * XREFs of sub_14026EDE4 @ 0x14026EDE4
 * Callers:
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EA95C @ 0x1402EA95C (sub_1402EA95C.c)
 *     sub_1405853E4 @ 0x1405853E4 (sub_1405853E4.c)
 *     sub_140590A18 @ 0x140590A18 (sub_140590A18.c)
 *     sub_1405ACAD0 @ 0x1405ACAD0 (sub_1405ACAD0.c)
 *     sub_140AF3FFC @ 0x140AF3FFC (sub_140AF3FFC.c)
 *     sub_140B05434 @ 0x140B05434 (sub_140B05434.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

char __fastcall sub_14026EDE4(__int64 *a1, __int64 a2, int a3)
{
  int v3; // esi
  __int64 v6; // rax
  __int64 CurrentThread; // rax
  __int64 v8; // rbx
  bool v9; // zf

  v3 = a3;
  if ( a3 )
    v6 = *a1;
  else
    v6 = sub_140317A10(a1);
  CurrentThread = (a2 ^ v6) & 0x7F00000000000000LL;
  v8 = CurrentThread ^ a2;
  if ( v3 )
  {
    *a1 = v8;
    return CurrentThread;
  }
  LODWORD(CurrentThread) = sub_140317A80(a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = sub_140229550();
    if ( (_DWORD)CurrentThread )
    {
      v3 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_5;
      v9 = (v8 & 1) == 0;
    }
    else
    {
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) == 0 )
        goto LABEL_5;
      v9 = (v8 & 1) == 0;
    }
    if ( !v9 )
    {
      LOBYTE(CurrentThread) = 0;
      v8 |= 0x8000000000000000uLL;
    }
  }
LABEL_5:
  *a1 = v8;
  if ( v3 )
    LOBYTE(CurrentThread) = sub_1402294F0((__int64)a1, v8);
  return CurrentThread;
}
