/*
 * XREFs of sub_140339370 @ 0x140339370
 * Callers:
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 * Callees:
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 */

__int64 __fastcall sub_140339370(__int64 a1, __int64 a2, __int64 ***a3)
{
  __int64 v3; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // eax
  int v9; // edx
  unsigned __int64 v10; // rdi
  __int64 **v11; // r15
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int v17; // eax

  v3 = *(_QWORD *)(a1 + 16);
  if ( (v3 & 1) != 0
    && (v8 = *(unsigned __int8 *)(v3 & 0xFFFFFFFFFFFFFFFEuLL), (unsigned __int8)v8 <= 8u)
    && (v9 = 404, _bittest(&v9, v8)) )
  {
    v7 = *(_DWORD *)((v3 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
    if ( v7 )
      goto LABEL_20;
  }
  else
  {
    v7 = 0;
  }
  v10 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  v11 = *a3;
  if ( (*(_QWORD *)(a1 + 16) & 1LL) == 0 )
    v10 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = *((_QWORD *)CurrentThread + 23);
    v14 = *(_QWORD *)(v13 + 1680);
    if ( v11
      || ((v15 = *(_QWORD *)a1, *(_QWORD *)a1 < 0xFFFFF68000000000uLL) || v15 > 0xFFFFF6FFFFFFFFFFuLL)
      && (v10 || *(_QWORD *)(v14 + 408) || *(_QWORD *)(v14 + 416) || *(_BYTE *)(v14 + 340))
      && (sub_1402ED128(1), v11 = sub_1403126F0(*(_QWORD *)a1), sub_1402806E0(1, 0x11u), (*a3 = v11) != 0LL) )
    {
      v17 = *((_DWORD *)v11 + 12);
      v7 = (v17 >> 12) & 0x7F;
      if ( v7 )
        goto LABEL_20;
      if ( (v17 & 0x200000) == 0 )
        a2 = *v11[9];
    }
    if ( !a2 || (v7 = (*(_DWORD *)(a2 + 56) >> 20) & 0x7F) == 0 )
    {
      if ( v10 && *((_BYTE *)CurrentThread + 586) == 1 )
        v7 = *(unsigned __int16 *)(v13 + 2LL * *((unsigned __int16 *)CurrentThread + 292) + 772) + 1;
      if ( !v7 )
        return v7;
    }
LABEL_20:
    *(_DWORD *)(a1 + 80) |= 0x20000u;
  }
  return v7;
}
