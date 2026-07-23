/*
 * XREFs of sub_140565974 @ 0x140565974
 * Callers:
 *     sub_1406DC120 @ 0x1406DC120 (sub_1406DC120.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140565974(unsigned int a1)
{
  unsigned int v1; // r14d
  _BYTE *Pool2; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v5; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *v7; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  size_t v11; // rdi
  PVOID v12; // r15
  size_t v13; // rbx
  size_t v14; // rax
  size_t v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v18; // r8
  int v19; // eax

  v1 = a1;
  if ( byte_140C09804 )
    return 3221226324LL;
  if ( a1 > 0x1000000 )
    return 3221225711LL;
  if ( a1 <= 0x1000 )
  {
    v1 = 4096;
    Pool2 = &unk_140C31E80;
    while ( 1 )
    {
LABEL_9:
      if ( !qword_140D01930 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        if ( !_InterlockedCompareExchange64(&qword_140D01930, 1LL, 0LL) )
        {
          v11 = 0LL;
          v12 = off_140C070A0;
          qword_140D01938 = (__int64)KeGetCurrentPrcb();
          if ( v1 > (unsigned __int64)(unsigned int)dword_140C0C6CC )
          {
            if ( off_140C070A8 - (_UNKNOWN *)off_140C070A0 >= (unsigned __int64)(unsigned int)dword_140C0C6CC )
              dword_140C32E80 = 0;
            v13 = (off_140C070A8 - (_UNKNOWN *)off_140C070A0) & -(__int64)(off_140C070A8 - (_UNKNOWN *)off_140C070A0 < (unsigned __int64)(unsigned int)dword_140C0C6CC);
            if ( dword_140C32E80 )
            {
              v11 = (unsigned int)dword_140C0C6CC - v13;
              memmove(Pool2, (char *)off_140C070A0 + v13, v11);
            }
            memmove(&Pool2[v11], v12, v13);
            v11 += v13;
            if ( dword_140C32E80 )
            {
              v14 = 0LL;
              if ( *Pool2 )
              {
                do
                {
                  if ( v14 >= v11 )
                    break;
                  ++v14;
                }
                while ( Pool2[v14] );
              }
              v15 = v14 + 1;
              if ( v15 < v11 )
              {
                v11 -= v15;
                memmove(Pool2, &Pool2[v15], v11);
              }
            }
          }
          memset(&Pool2[v11], 0, v1 - v11);
          ++dword_140C32E8C;
          qword_140D01938 = 0LL;
          off_140C070A0 = Pool2;
          dword_140C0C6CC = v1;
          off_140C070A8 = &Pool2[v11];
          dword_140C32E80 = 0;
          _InterlockedExchange((volatile __int32 *)&qword_140D01930, 0);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v16 = KeGetCurrentIrql();
              if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v18 = *((_QWORD *)CurrentPrcb + 4375);
                v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v10 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
                *(_DWORD *)(v18 + 20) &= v19;
                if ( v10 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          if ( v12 && v12 != &unk_140C31E80 )
            ExFreePoolWithTag(v12, 0);
          return 0LL;
        }
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v6 = KeGetCurrentIrql();
            if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
            {
              v7 = KeGetCurrentPrcb();
              v8 = *((_QWORD *)v7 + 4375);
              v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
              *(_DWORD *)(v8 + 20) &= v9;
              if ( v10 )
                sub_140418E4C((__int64)v7);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      _mm_pause();
    }
  }
  Pool2 = (_BYTE *)ExAllocatePool2(66LL, a1, 1649435723LL);
  if ( Pool2 )
    goto LABEL_9;
  return 3221225495LL;
}
