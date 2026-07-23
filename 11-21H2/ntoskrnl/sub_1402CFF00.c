/*
 * XREFs of sub_1402CFF00 @ 0x1402CFF00
 * Callers:
 *     sub_1403525F0 @ 0x1403525F0 (sub_1403525F0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033A6B0 @ 0x14033A6B0 (sub_14033A6B0.c)
 *     sub_1403528A4 @ 0x1403528A4 (sub_1403528A4.c)
 *     sub_140352CB4 @ 0x140352CB4 (sub_140352CB4.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_1402CFF00(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bp
  ULONG_PTR v4; // rsi
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int16 v10; // ax
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // r10
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  CurrentThread = (struct _KTHREAD *)&retaddr;
  if ( (*(_BYTE *)(a1 + 78) & 4) == 0 )
  {
    v3 = 0;
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 )
    {
      v5 = 0x4000000000LL;
      v6 = 0xFFFFF6FB7DBED7F8uLL;
      do
      {
        v7 = *(_QWORD *)(a1 + 64);
        if ( v7 )
        {
          if ( ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL == v7 )
            goto LABEL_6;
          sub_14020D8D0(*(_QWORD *)(a1 + 48), v7);
          *(_QWORD *)(a1 + 64) = 0LL;
        }
        if ( !(unsigned int)sub_1403528A4(a1, v4, v6, v5) )
          KeBugCheckEx(0x1Au, 0x5310uLL, v4, 0LL, 0LL);
        v6 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_6:
        v8 = *(_QWORD *)v4;
        if ( v4 >= 0xFFFFF6FB7DBED000uLL
          && v4 <= 0xFFFFF6FB7DBED7F8uLL
          && (dword_140D06880 & 0xC00000) != 0
          && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
          && (v8 & 1) != 0
          && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
        {
          v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v6 )
          {
            v15 = *(_QWORD *)(v6 + 8 * ((v4 >> 3) & 0x1FF));
            v6 = v8 | 0x20;
            if ( (v15 & 0x20) == 0 )
              v6 = *(_QWORD *)v4;
            v8 = v6;
            if ( (v15 & 0x42) != 0 )
              v8 = v6 | 0x42;
          }
        }
        if ( !v8 )
          goto LABEL_13;
        if ( qword_140C50780 && (v8 & 0x10) == 0 )
          v8 &= ~qword_140C50780;
        v8 >>= 28;
        if ( v8 == 0xFFFFFFFFFLL )
          v9 = 0LL;
        else
LABEL_13:
          v9 = 8 * v8 - 0x94000000000LL;
        *(_QWORD *)(a1 + 32) = v9;
        v10 = *(_WORD *)(a1 + 78);
        if ( (v10 & 1) != 0 )
        {
          LODWORD(CurrentThread) = sub_140317A80(v4);
          if ( (_DWORD)CurrentThread )
          {
            if ( (unsigned int)sub_140229550() )
            {
              *(_QWORD *)v4 = 0LL;
              LOBYTE(CurrentThread) = sub_1402294F0(v4, 0LL);
              goto LABEL_19;
            }
            LOBYTE(CurrentThread) = (unsigned __int8)KeGetCurrentThread();
          }
          *(_QWORD *)v4 = 0LL;
        }
        else
        {
          if ( (v10 & 2) != 0 )
          {
            v11 = sub_1402CCC50(32LL * ((unsigned __int8)v10 >> 3));
            LODWORD(CurrentThread) = sub_140317A80(v4);
            if ( !(_DWORD)CurrentThread )
              goto LABEL_17;
            if ( (unsigned int)sub_140229550() )
            {
              if ( !HIBYTE(word_140C51864) && (v11 & 1) != 0 )
                v11 |= 0x8000000000000000uLL;
              *(_QWORD *)v4 = v11;
              LOBYTE(CurrentThread) = sub_1402294F0(v4, v11);
            }
            else
            {
              CurrentThread = KeGetCurrentThread();
              if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2172LL) & 0x1000) != 0 && (v11 & 1) != 0 )
              {
                LOBYTE(CurrentThread) = 0;
                v11 |= 0x8000000000000000uLL;
              }
LABEL_17:
              *(_QWORD *)v4 = v11;
            }
LABEL_18:
            ++*(_QWORD *)(a1 + 24);
            goto LABEL_19;
          }
          LODWORD(CurrentThread) = sub_14033A6B0(a1, (__int64)(v4 << 25) >> 16, v6, 0x4000000000LL);
          if ( (_DWORD)CurrentThread )
            goto LABEL_18;
        }
LABEL_19:
        ++v3;
        if ( *(_QWORD *)(a1 + 32) )
        {
          if ( (v3 & 0xF) == 0 && *(_BYTE *)(a1 + 76) < 2u )
          {
            if ( (unsigned int)sub_1403531F0(*(_QWORD *)(a1 + 48))
              || (LODWORD(CurrentThread) = KeShouldYieldProcessor(), (_DWORD)CurrentThread) )
            {
              sub_140352CB4(a1);
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
              {
                v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
                *(_DWORD *)(v14 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
              }
              v13 = *(_QWORD *)(a1 + 48);
              *(_BYTE *)(a1 + 76) = CurrentIrql;
              LOBYTE(CurrentThread) = sub_1402CF4F0(v13);
            }
          }
        }
        v4 = *(_QWORD *)(a1 + 32);
        v5 = 0x4000000000LL;
        v6 = 0xFFFFF6FB7DBED7F8uLL;
      }
      while ( v4 );
    }
  }
  return (char)CurrentThread;
}
