/*
 * XREFs of sub_14052F378 @ 0x14052F378
 * Callers:
 *     sub_1404598B2 @ 0x1404598B2 (sub_1404598B2.c)
 *     sub_14052E568 @ 0x14052E568 (sub_14052E568.c)
 *     sub_14052F1C8 @ 0x14052F1C8 (sub_14052F1C8.c)
 *     sub_14052F224 @ 0x14052F224 (sub_14052F224.c)
 *     sub_14052F29C @ 0x14052F29C (sub_14052F29C.c)
 *     sub_14052F618 @ 0x14052F618 (sub_14052F618.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14052F378(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned int v10; // ebp
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  unsigned __int64 v13; // rax
  char v14; // r8
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 result; // rax
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v26; // r8
  int v27; // eax
  bool v28; // zf
  signed __int32 v29[8]; // [rsp+0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v31; // [rsp+70h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 8);
  v31 = v3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD *)(a1 + 128) >> ((*(_BYTE *)(a1 + 320) != 0) + 4);
  if ( a3 == 1 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 208);
    sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(a1 + 208));
    v3 = v31;
  }
  v9 = *(_QWORD *)(v3 + 136);
  if ( *(_BYTE *)(a1 + 320) )
    v10 = (v9 >> 5) & 0x3FFF;
  else
    v10 = (v9 >> 4) & 0x7FFF;
  v11 = 0;
  if ( v10 + 1 != (_DWORD)v6 )
    v11 = v10 + 1;
  v12 = 0;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v3 + 128);
    v14 = *(_BYTE *)(a1 + 320);
    v15 = v14 ? (v13 >> 5) & 0x3FFF : (v13 >> 4) & 0x7FFF;
    if ( v11 != v15 )
      break;
    if ( (++v12 & dword_140C4C47C) != 0 || !qword_140C4C480 )
    {
      _mm_pause();
    }
    else
    {
      sub_14042A5E0(v12, a2);
      v3 = v31;
    }
  }
  v16 = *(_QWORD *)(a1 + 112);
  if ( v14 )
  {
    v17 = (_QWORD *)(v16 + 32LL * v10);
    v18 = v17;
  }
  else
  {
    v18 = (_QWORD *)(v16 + 16LL * v10);
    v17 = 0LL;
  }
  *v18 = *(_QWORD *)a2;
  v19 = a2 & -(__int64)(v14 != 0);
  v18[1] = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( (*(_BYTE *)a2 & 0xF) == 9 )
    {
      v20 = v17 + 2;
      v21 = v19 - (_QWORD)v17;
      v22 = 2LL;
      do
      {
        *v20 = *(_QWORD *)((char *)v20 + v21);
        ++v20;
        --v22;
      }
      while ( v22 );
    }
    else
    {
      *((_OWORD *)v17 + 1) = 0LL;
    }
  }
  if ( *(_BYTE *)(a1 + 320) )
    result = ((unsigned int)v9 ^ (32 * v11)) & 0x7FFE0;
  else
    result = ((unsigned int)v9 ^ (16 * v11)) & 0x7FFF0;
  *(_QWORD *)(v3 + 136) = result ^ v9;
  _InterlockedOr(v29, 0);
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = *((_QWORD *)CurrentPrcb + 4375);
          v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v28 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
          *(_DWORD *)(v26 + 20) &= v27;
          if ( v28 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
