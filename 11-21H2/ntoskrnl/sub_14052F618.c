/*
 * XREFs of sub_14052F618 @ 0x14052F618
 * Callers:
 *     sub_1404598B2 @ 0x1404598B2 (sub_1404598B2.c)
 *     sub_14052E568 @ 0x14052E568 (sub_14052E568.c)
 *     sub_14052F1C8 @ 0x14052F1C8 (sub_14052F1C8.c)
 *     sub_14052F224 @ 0x14052F224 (sub_14052F224.c)
 *     sub_14052F29C @ 0x14052F29C (sub_14052F29C.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14052F378 @ 0x14052F378 (sub_14052F378.c)
 */

__int64 __fastcall sub_14052F618(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // esi
  __int64 result; // rax
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-30h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 208);
    sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(a1 + 208));
  }
  v16[0] = *(_QWORD *)(a1 + 192);
  v16[1] = *(_QWORD *)(a1 + 200);
  *(_DWORD *)(a1 + 176) = 1;
  sub_14052F378(a1, (unsigned __int64)v16, 1);
  v8 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 176);
    if ( !(_DWORD)result )
      break;
    if ( (++v8 & dword_140C4C47C) != 0 || !qword_140C4C480 )
      _mm_pause();
    else
      sub_14042A5E0(v8, v7);
  }
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
