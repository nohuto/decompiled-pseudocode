/*
 * XREFs of sub_1405C2898 @ 0x1405C2898
 * Callers:
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

char __fastcall sub_1405C2898(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  unsigned int v9; // r8d
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  unsigned int v12; // esi
  unsigned __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v15; // ebp

  v7 = a2;
  if ( a4 != 2 )
  {
    v8 = (unsigned int)(2 - a4);
    do
    {
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v8;
    }
    while ( v8 );
  }
  v9 = a5 | 0x80000000;
  if ( (*(_DWORD *)(a1 + 48) & 0x600000) == 0x600000 )
    v9 = a5;
  if ( a4 != 2 )
    v9 |= 0x4000000u;
  v10 = 16LL;
  if ( a4 != 2 )
    v10 = 1LL;
  v11 = sub_1402CBD10(a2, a3, v9);
  v12 = 0;
  if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && !sub_140317A10(v7) )
  {
    v13 = sub_1402D03D0((__int64)(v7 << 25) >> 16);
    sub_14028FB74(v13, v10);
  }
  if ( a4 == 2 )
  {
    do
    {
      *(_QWORD *)v7 = v11;
      v7 += 8LL;
      ++v12;
      v11 ^= (v11 ^ (v11 + 4096)) & 0xFFFFFFFFFF000LL;
      LOBYTE(CurrentThread) = v12;
    }
    while ( v12 < v10 );
    return (char)CurrentThread;
  }
  v15 = 0;
  LODWORD(CurrentThread) = sub_140317A80(v7);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = sub_140229550();
    if ( (_DWORD)CurrentThread )
    {
      v15 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_22:
        if ( (v11 & 1) != 0 )
        {
          LOBYTE(CurrentThread) = 0;
          v11 |= 0x8000000000000000uLL;
        }
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) != 0 )
        goto LABEL_22;
    }
  }
  *(_QWORD *)v7 = v11;
  if ( v15 )
    LOBYTE(CurrentThread) = sub_1402294F0(v7, v11);
  return (char)CurrentThread;
}
