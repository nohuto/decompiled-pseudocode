/*
 * XREFs of sub_14038C4CC @ 0x14038C4CC
 * Callers:
 *     MmMapMemoryDumpMdlEx @ 0x14038C0F0 (MmMapMemoryDumpMdlEx.c)
 *     sub_14038C498 @ 0x14038C498 (sub_14038C498.c)
 *     MmMapMemoryDumpMdl @ 0x140593650 (MmMapMemoryDumpMdl.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_14038C4CC(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r10
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  _QWORD *v9; // r15
  __int64 v10; // rdi
  BOOL v11; // edi
  unsigned __int64 *v12; // r14
  __int64 v13; // rdx
  unsigned int v14; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // r9
  int v19; // eax
  unsigned __int64 v20; // rdi
  int v21; // ebp
  bool v22; // zf
  _QWORD v26[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v26, 0, 0xB8uLL);
  v6 = *(unsigned int *)(a3 + 44);
  v7 = ((unsigned int)(v6 + *(_DWORD *)(a3 + 40)) >> 12) + ((((_DWORD)v6 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0);
  LODWORD(v26[1]) = 20;
  *(_QWORD *)(a3 + 24) = a1 + v6;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  BYTE4(v26[0]) = 3;
  v26[3] = 0LL;
  v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  do
  {
    v10 = sub_140317A10((unsigned __int64)v9);
    if ( (v10 & 1) != 0 )
      sub_1402CF280((__int64)v26, v8, 1LL, 0);
    if ( v10 )
    {
      v11 = 0;
      if ( sub_140317A80((unsigned __int64)v9) )
        v11 = sub_140229550() != 0;
      *v9 = 0LL;
      if ( v11 )
        sub_1402294F0((__int64)v9, 0LL);
    }
    ++v9;
    v8 += 4096LL;
    --v7;
  }
  while ( v7 );
  v12 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( HIDWORD(v26[1]) )
    sub_14032F1B0((__int64)v26);
  v13 = *(unsigned int *)(a3 + 44);
  v14 = v13 + *(_DWORD *)(a3 + 40);
  LODWORD(CurrentThread) = (v14 & 0xFFF) != 0;
  *(_QWORD *)(a3 + 24) = a1 + v13;
  v16 = (v14 >> 12) + (unsigned int)CurrentThread;
  if ( (a4 & 2) != 0 )
  {
    *(_WORD *)(a3 + 10) &= 0xFFDEu;
    return (char)CurrentThread;
  }
  v17 = a3 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v18 = *(unsigned __int64 *)((char *)v12 + v17 + 48);
    v19 = 4;
    if ( (a4 & 1) == 0 )
      v19 = sub_14026C61C(4, 48 * v18 - 0x220000000000LL);
    v20 = sub_1402CBD10((unsigned __int64)v12, v18, v19 | 0xA0000000);
    v21 = 0;
    LODWORD(CurrentThread) = sub_140317A80((unsigned __int64)v12);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = sub_140229550();
      if ( (_DWORD)CurrentThread )
      {
        v21 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_17;
        v22 = (v20 & 1) == 0;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) == 0 )
          goto LABEL_17;
        v22 = (v20 & 1) == 0;
      }
      if ( !v22 )
        v20 |= 0x8000000000000000uLL;
    }
LABEL_17:
    *v12 = v20;
    if ( v21 )
      LOBYTE(CurrentThread) = sub_1402294F0((__int64)v12, v20);
    ++v12;
    --v16;
  }
  while ( v16 );
  *(_WORD *)(a3 + 10) |= 0x11u;
  return (char)CurrentThread;
}
