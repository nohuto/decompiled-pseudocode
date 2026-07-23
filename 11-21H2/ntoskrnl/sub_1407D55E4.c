/*
 * XREFs of sub_1407D55E4 @ 0x1407D55E4
 * Callers:
 *     sub_1407D5884 @ 0x1407D5884 (sub_1407D5884.c)
 *     sub_1407F5914 @ 0x1407F5914 (sub_1407F5914.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074F700 @ 0x14074F700 (sub_14074F700.c)
 *     IoAllocateMiniCompletionPacket @ 0x1407D56C0 (IoAllocateMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char *__fastcall sub_1407D55E4(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  char *Pool2; // rax
  char *v7; // rbx
  __int64 v8; // rdi
  _QWORD *i; // rsi
  __int64 MiniCompletionPacket; // rax
  char *v12; // rsi
  __int64 v13; // rcx

  v3 = a1;
  Pool2 = (char *)ExAllocatePool2(64LL, 24LL * a1 + 56, 1850305601LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 24 * v3 + 56);
    *(_QWORD *)v7 = 0LL;
    v8 = 0LL;
    *((_DWORD *)v7 + 2) = v3;
    *((_QWORD *)v7 + 5) = a2;
    *((_QWORD *)v7 + 6) = a3;
    if ( !(_DWORD)v3 )
      return v7;
    for ( i = v7 + 56; ; i += 3 )
    {
      i[2] = v7;
      MiniCompletionPacket = IoAllocateMiniCompletionPacket(sub_1402234C0, i);
      i[1] = MiniCompletionPacket;
      if ( !MiniCompletionPacket )
        break;
      v8 = (unsigned int)(v8 + 1);
      *i = *((_QWORD *)v7 + 4);
      *((_QWORD *)v7 + 4) = i;
      if ( (unsigned int)v8 >= (unsigned int)v3 )
        return v7;
    }
    if ( (_DWORD)v8 )
    {
      v12 = &v7[16 * v8 + 64 + 8 * v8];
      do
      {
        v12 -= 24;
        v13 = *(_QWORD *)v12;
        *(_QWORD *)(v13 + 56) = 0LL;
        sub_14074F700((_SLIST_ENTRY *)v13);
        LODWORD(v8) = v8 - 1;
      }
      while ( (_DWORD)v8 );
    }
    ExFreePoolWithTag(v7, 0);
  }
  return 0LL;
}
