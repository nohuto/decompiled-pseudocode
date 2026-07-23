/*
 * XREFs of sub_14052DC38 @ 0x14052DC38
 * Callers:
 *     sub_14052DEFC @ 0x14052DEFC (sub_14052DEFC.c)
 *     sub_140A64748 @ 0x140A64748 (sub_140A64748.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_1403CE24C @ 0x1403CE24C (sub_1403CE24C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140522410 @ 0x140522410 (sub_140522410.c)
 *     sub_14052E468 @ 0x14052E468 (sub_14052E468.c)
 *     sub_14052E768 @ 0x14052E768 (sub_14052E768.c)
 *     sub_14052EA60 @ 0x14052EA60 (sub_14052EA60.c)
 */

__int64 __fastcall sub_14052DC38(__int64 a1, unsigned int a2, __int64 a3, int a4, _QWORD *a5)
{
  unsigned int v5; // r9d
  unsigned int v8; // r13d
  int v9; // esi
  __int64 v10; // rcx
  int v11; // edi
  _QWORD *v12; // rbx
  unsigned int v13; // esi
  _QWORD *v14; // r15
  _QWORD *v15; // r12
  unsigned __int8 CurrentIrql; // si
  __int64 v17; // r9
  bool v18; // al
  __int64 v19; // rax
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v22; // r8
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v31; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-28h]
  PHYSICAL_ADDRESS v33; // [rsp+40h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v5 = a4 & 0xFFFFFFC0;
  v33.QuadPart = 0LL;
  v31 = 0LL;
  v8 = v5 + 64;
  if ( v5 > 0xFFFC0 )
  {
    v11 = -1073741823;
    goto LABEL_36;
  }
  v9 = (v8 >> 6) & 0x3FFF;
  v11 = sub_1403CE24C(a1, 8 * v9 + 56, &v31);
  if ( v11 < 0 )
  {
LABEL_36:
    *a5 = 0LL;
    return (unsigned int)v11;
  }
  v12 = v31;
  v13 = (8 * v9 + 4095) & 0xFFFFF000;
  *v31 = v31;
  v12[1] = v12;
  v14 = v12 + 2;
  v12[3] = v12 + 2;
  v12[2] = v12 + 2;
  *((_DWORD *)v12 + 10) = a2;
  v15 = v12;
  *((_DWORD *)v12 + 8) = 0;
  v32 = v12 + 1;
  *((_DWORD *)v12 + 9) = v8;
  v11 = sub_140522410(v10, v13, 0x1000u, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272), &v33, (__int64)(v12 + 6));
  if ( v11 >= 0 )
  {
    memset((void *)v12[6], 0, v13);
    v11 = sub_14052E468(a1, v12);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v17 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v12 = v31;
    *(_DWORD *)(v17 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 208);
  sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(a1 + 208));
  v18 = a2 > 0xFFFFFFFD;
  if ( a2 <= 0xFFFFFFFD )
  {
    v19 = sub_14052EA60(a1, a2);
    if ( v19 )
    {
      v15 = v12;
      if ( v8 <= *(_DWORD *)(v19 + 36) && *(_DWORD *)(v19 + 32) )
      {
        v12 = (_QWORD *)v19;
        v31 = (_QWORD *)v19;
        v11 = 0;
      }
      else
      {
        v12 = 0LL;
        v11 = -1073741823;
        v31 = 0LL;
      }
      goto LABEL_14;
    }
    v18 = 0;
  }
  if ( v11 >= 0 )
  {
    v24 = !v18;
    v25 = a1 + 56;
    if ( !v24 )
      v25 = a1 + 72;
    v26 = *(_QWORD *)v25;
    if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25
      || (v27 = v32,
          *v12 = v26,
          *v27 = v25,
          *(_QWORD *)(v26 + 8) = v12,
          *(_QWORD *)v25 = v12,
          v28 = (_QWORD *)(a1 + 88),
          v29 = *(_QWORD *)(a1 + 88),
          *(_QWORD *)(v29 + 8) != a1 + 88) )
    {
      __fastfail(3u);
    }
    *v14 = v29;
    v15 = 0LL;
    v14[1] = v28;
    *(_QWORD *)(v29 + 8) = v14;
    *v28 = v14;
  }
LABEL_14:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = *((_QWORD *)CurrentPrcb + 4375);
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= v23;
        if ( v24 )
          sub_140418E4C((__int64)CurrentPrcb);
        v12 = v31;
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v15 )
    sub_14052E768(a1, v15);
  if ( v11 < 0 )
    goto LABEL_36;
  *a5 = v12;
  return (unsigned int)v11;
}
