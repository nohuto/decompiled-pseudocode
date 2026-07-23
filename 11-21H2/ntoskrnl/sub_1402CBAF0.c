/*
 * XREFs of sub_1402CBAF0 @ 0x1402CBAF0
 * Callers:
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 * Callees:
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402CBAF0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // rdi
  __int64 v4; // r12
  unsigned __int64 v5; // r11
  _QWORD *v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rax
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 *v18; // rcx

  v2 = 0LL;
  v3 = a1[2] >> 5;
  v4 = a1[5] & 0xFFFFFFFFFFLL;
  v5 = a2;
  v6 = a1;
  v7 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      v8 = ((unsigned int)v6[1] >> 3) & 0x1FF;
      if ( v7 )
      {
        if ( (v6[5] & 0xFFFFFFFFFFLL) != v4 )
          break;
      }
      if ( !v2 )
        goto LABEL_13;
LABEL_5:
      v9 = (*(_QWORD *)(v2 + 8 * v8) >> 12) & 0xFFFFFFFFFFLL;
      if ( (_QWORD *)(48 * v9 - 0x220000000000LL) != v6 )
        KeBugCheckEx(
          0x4Eu,
          6uLL,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x44000000000LL) >> 4),
          v2 + (unsigned int)v8,
          *(_QWORD *)(v2 + 8 * v8));
      v10 = 32 * ((v9 << 7) | v3 & 0x1F | 0x40);
      if ( qword_140C50780 )
      {
        if ( (qword_140C50780 & v10) != 0 )
          v10 |= 0x10uLL;
        else
          v10 |= qword_140C50780;
      }
      ++v7;
      *(_QWORD *)(v2 + 8 * v8) = v10;
      if ( v7 != v5 )
      {
        v6 = (_QWORD *)(48 * (*v6 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        if ( v7 < v5 )
          continue;
      }
      return sub_1402BEDD0(v2, 0x11u);
    }
    sub_1402BEDD0(v2, 0x11u);
LABEL_13:
    v12 = 4;
    v4 = v6[5] & 0xFFFFFFFFFFLL;
    v13 = *(unsigned __int8 *)(48 * v4 - 0x220000000000LL + 34) >> 6;
    if ( !v13 || v13 == 3 )
    {
      v12 = 12;
    }
    else if ( v13 == 2 )
    {
      v12 = 28;
    }
    v14 = sub_1402CBD10(0LL, v6[5] & 0xFFFFFFFFFFLL, v12 | 0xA0000000);
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = v14;
    v17 = *((_QWORD *)CurrentPrcb + 4199);
    if ( !v17
      || (v2 = sub_1402C6260((unsigned __int64 *)(v17 + 12448), 3u, 1LL, 0),
          v18 = (__int64 *)(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          *(_QWORD *)(v17 + 12344) = v18,
          !v2) )
    {
      v2 = (*((_QWORD *)CurrentPrcb + 4272) & 0xFFFFFFFFFFFFF000uLL)
         + ((*((_QWORD *)CurrentPrcb + 4272) & 0xFFFLL) << 12);
      v18 = (__int64 *)(((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    }
    v5 = a2;
    *v18 = v16;
    goto LABEL_5;
  }
  return sub_1402BEDD0(v2, 0x11u);
}
