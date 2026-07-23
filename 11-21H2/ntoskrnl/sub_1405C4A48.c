/*
 * XREFs of sub_1405C4A48 @ 0x1405C4A48
 * Callers:
 *     sub_140983680 @ 0x140983680 (sub_140983680.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_14033C880 @ 0x14033C880 (sub_14033C880.c)
 */

__int64 __fastcall sub_1405C4A48(__int64 a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  int v14; // ebp
  BOOL v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r11d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // [rsp+50h] [rbp+18h] BYREF
  int v25; // [rsp+58h] [rbp+20h] BYREF

  v25 = a4;
  LOBYTE(v25) = 0;
  v7 = 48 * a1 - 0x220000000000LL;
  v8 = sub_140273AAC((ULONG_PTR)a2, (__int64)&v25);
  v24 = 0;
  v12 = v8;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v24, v9, v10, v11);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  sub_14033C880(v7, (unsigned __int64)a2, a3, 23);
  v13 = sub_1402CBD10(0LL, a1, a3 | 0x80000000) & 0xFFFFFFFFFFFFFEFFuLL;
  v14 = 0;
  v15 = sub_140317A80((unsigned __int64)a2);
  LOWORD(v19) = 1;
  if ( v15 )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v14 = v19;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_11;
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
    {
      goto LABEL_11;
    }
    if ( ((unsigned __int8)v13 & (unsigned __int8)v19) != 0 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_11:
  *a2 = v13;
  if ( v14 )
    sub_1402294F0((__int64)a2, v13);
  *(_WORD *)(v7 + 32) += v19;
  sub_140273FD0(v7, v16, v17, v18);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v20) = v25;
  return sub_140334790(v12, v20, v21, v22);
}
