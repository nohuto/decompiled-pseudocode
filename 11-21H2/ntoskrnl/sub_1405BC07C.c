/*
 * XREFs of sub_1405BC07C @ 0x1405BC07C
 * Callers:
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

char __fastcall sub_1405BC07C(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v9; // rdi
  int v10; // ebp
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // edi
  struct _KTHREAD *CurrentThread; // rax

  v5 = *(_QWORD *)(a3 + 24);
  if ( v5 )
  {
    ++*(_QWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 24) = v5 + 1;
    ++*a5;
    goto LABEL_13;
  }
  v9 = sub_1402CCC50((*(_QWORD *)(a3 + 16) >> 54) & 0x3E0LL);
  v10 = 0;
  if ( sub_140317A80(a3) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v10 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_7:
        if ( (v9 & 1) != 0 )
          v9 |= 0x8000000000000000uLL;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      goto LABEL_7;
    }
  }
  *(_QWORD *)a3 = v9;
  if ( v10 )
    sub_1402294F0(a3, v9);
  v11 = *(_QWORD *)(a3 + 16) & 0xF800000000000001uLL;
  *(_QWORD *)(a3 + 24) = 1LL;
  *(_QWORD *)(a3 + 16) = v11 | 1;
  v12 = *(unsigned __int16 *)(a1 + 1838);
  ++a5[1];
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_140C51F48 + 8 * v12) + 17528LL), 1uLL);
LABEL_13:
  v13 = sub_1402CCC50((a3 << 16) | 0x400) | 8;
  v14 = 0;
  LODWORD(CurrentThread) = sub_140317A80((unsigned __int64)a4);
  if ( !(_DWORD)CurrentThread )
    goto LABEL_20;
  LODWORD(CurrentThread) = sub_140229550();
  if ( (_DWORD)CurrentThread )
  {
    v14 = 1;
    if ( HIBYTE(word_140C51864) )
      goto LABEL_20;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) == 0 )
      goto LABEL_20;
  }
  if ( (v13 & 1) != 0 )
    v13 |= 0x8000000000000000uLL;
LABEL_20:
  *a4 = v13;
  if ( v14 )
    LOBYTE(CurrentThread) = sub_1402294F0((__int64)a4, v13);
  return (char)CurrentThread;
}
