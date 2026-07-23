/*
 * XREFs of sub_1405A42BC @ 0x1405A42BC
 * Callers:
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14028F080 @ 0x14028F080 (sub_14028F080.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140977E30 @ 0x140977E30 (sub_140977E30.c)
 */

__int64 __fastcall sub_1405A42BC(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  __int64 *v5; // r15
  int v6; // ebp
  __int64 v7; // r12
  unsigned __int64 v8; // rsi
  volatile LONG *v9; // rbx
  KIRQL v10; // al
  KIRQL v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rax
  volatile LONG *v20; // rbx
  unsigned __int8 v21; // [rsp+78h] [rbp+10h]
  int v22; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp+20h]

  v22 = 0;
  v2 = sub_1402828F0(64, 0x90uLL, 0x6356694Du);
  v3 = v2;
  if ( !v2 )
    return 3221225626LL;
  *v2 = 0LL;
  v5 = v2 + 1;
  v2[1] = 0LL;
  v6 = 0;
  v7 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v8 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v23 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v9 = (volatile LONG *)sub_140282AD0(v7);
  v10 = ExAcquireSpinLockExclusive(v9);
  *((_DWORD *)v9 + 1) = 0;
  v11 = v10;
  v12 = v23;
  v21 = v10;
  while ( v8 <= v12 )
  {
    v13 = sub_14028F080(v8, v12, 0LL, v11, 4, &v22);
    if ( !v13 )
      break;
    v14 = v13 & 0xFFFFFFFFFFFFF000uLL;
    v15 = *v5;
    v16 = (__int64)((v13 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16;
    if ( *v5
      && (v17 = v3[v15 + 1], v18 = v17 & 0x1FFFFF, v18 + 1 >= v18)
      && v18 != 0x1FFFFF
      && (v17 & 0xFFFFFFFFFFE00000uLL) + ((v18 + 1) << 21) == v16 )
    {
      v3[v15 + 1] = v17 & 0xFFFFFFFFFFE00000uLL | (v17 + 1) & 0x1FFFFF;
    }
    else
    {
      if ( v15 == 16 )
      {
        sub_14030FA80(v7, v21);
        v19 = sub_1402828F0(64, 0x90uLL, 0x6356694Du);
        if ( !v19 )
        {
          v6 = -1073741670;
          goto LABEL_18;
        }
        v5 = v19 + 1;
        *v19 = v3;
        v19[1] = 0LL;
        v3 = v19;
        v20 = (volatile LONG *)sub_140282AD0(v7);
        ExAcquireSpinLockExclusive(v20);
        *((_DWORD *)v20 + 1) = 0;
        v15 = *v5;
        v12 = v23;
      }
      v3[v15 + 2] = v16;
      ++*v5;
    }
    v11 = v21;
    v8 = v14 + 4096;
  }
  sub_14030FA80(v7, v11);
LABEL_18:
  *(_QWORD *)(a1 + 8) = v3;
  if ( v6 < 0 )
    sub_140977E30(a1);
  return (unsigned int)v6;
}
