/*
 * XREFs of sub_140352A00 @ 0x140352A00
 * Callers:
 *     sub_1403525F0 @ 0x1403525F0 (sub_1403525F0.c)
 * Callees:
 *     sub_1402294C4 @ 0x1402294C4 (sub_1402294C4.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140246BF0 @ 0x140246BF0 (sub_140246BF0.c)
 *     sub_14027D258 @ 0x14027D258 (sub_14027D258.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_140352EB0 @ 0x140352EB0 (sub_140352EB0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405AE8FC @ 0x1405AE8FC (sub_1405AE8FC.c)
 */

char __fastcall sub_140352A00(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r9
  ULONG_PTR v14; // r9
  _QWORD *v15; // r14
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx

  v2 = a2;
  v3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v3 > *(_QWORD *)(a1 + 56) )
    v3 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
  {
    v11 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    sub_140317A10((unsigned __int64)v11);
    v12 = sub_1402CCC50(768LL);
    if ( v13 != v12 && sub_1402294C4(v13) )
      KeBugCheckEx(0x1Au, 0x5304uLL, (__int64)(v2 << 25) >> 16, v14, 0LL);
    v15 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 24) += 512LL;
    *(_QWORD *)(a1 + 16) = *v15;
    v16 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v15 + 0x44000000000LL) >> 4);
    sub_1402C38D0((__int64)&StartContext, v16, 0x200uLL, 1, 1);
    v17 = sub_1402CBD10(0LL, v16, (*(unsigned __int16 *)(a1 + 78) >> 3) & 0x1F | 0xA4000000);
    if ( (unsigned __int64)v11 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v11 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      if ( sub_140317A80((unsigned __int64)v11) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          if ( !HIBYTE(word_140C51864) && (v17 & 1) != 0 )
            v17 |= 0x8000000000000000uLL;
          *v11 = v17;
          sub_1402294F0((__int64)v11, v17);
          goto LABEL_29;
        }
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v17 & 1) != 0 )
          v17 |= 0x8000000000000000uLL;
      }
      *v11 = v17;
    }
    else
    {
      sub_1405AE8FC(v11, v17);
    }
LABEL_29:
    v18 = sub_14033AC10((unsigned __int64)v11);
    sub_14027D258(v18);
    LOBYTE(CurrentThread) = sub_140246BF0(v2, v16);
    return (char)CurrentThread;
  }
  sub_140352EB0(a2);
  v5 = *(_QWORD *)(a1 + 32);
  for ( LOBYTE(CurrentThread) = 0; v2 <= v3; v2 += 8LL )
  {
    v7 = *(_QWORD *)v2;
    if ( v2 >= 0xFFFFF6FB7DBED000uLL
      && v2 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v7 & 1) != 0
      && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      v19 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 8 * ((v2 >> 3) & 0x1FF));
        v21 = v7 | 0x20;
        if ( (v20 & 0x20) == 0 )
          v21 = *(_QWORD *)v2;
        v7 = v21;
        if ( (v20 & 0x42) != 0 )
          v7 = v21 | 0x42;
      }
    }
    CurrentThread = (struct _KTHREAD *)(v7 & 0x3E0);
    if ( (v7 & 0xC01) != 0 || CurrentThread != 0LL )
    {
      if ( (v7 & 1) == 0 )
      {
        LOBYTE(CurrentThread) = CurrentThread == (struct _KTHREAD *)992;
        if ( (((v7 & 0xC00) == 0) & (unsigned __int8)CurrentThread) != 0 )
          KeBugCheckEx(0x1Au, 0x5308uLL, v2, v7, 0LL);
      }
      continue;
    }
    if ( v5 )
      v8 = (__int64)(v5 + 0x94000000000LL) >> 3;
    else
      v8 = 0xFFFFFFFFFLL;
    v9 = v8 << 28;
    if ( qword_140C50780 )
    {
      if ( (qword_140C50780 & v9) != 0 )
        v9 |= 0x10uLL;
      else
        v9 |= qword_140C50780;
    }
    v10 = v9 | 0x3E0;
    LODWORD(CurrentThread) = sub_140317A80(v2);
    if ( (_DWORD)CurrentThread )
    {
      if ( (unsigned int)sub_140229550() )
      {
        if ( !HIBYTE(word_140C51864) && (v10 & 1) != 0 )
          v10 |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = v10;
        LOBYTE(CurrentThread) = sub_1402294F0(v2, v10);
        goto LABEL_18;
      }
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) != 0 && (v10 & 1) != 0 )
        v10 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v2 = v10;
LABEL_18:
    v5 = v2;
  }
  *(_QWORD *)(a1 + 32) = v5;
  return (char)CurrentThread;
}
