/*
 * XREFs of sub_14052E568 @ 0x14052E568
 * Callers:
 *     sub_14052DF88 @ 0x14052DF88 (sub_14052DF88.c)
 *     sub_14052E520 @ 0x14052E520 (sub_14052E520.c)
 *     sub_140A63CE0 @ 0x140A63CE0 (sub_140A63CE0.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14052F378 @ 0x14052F378 (sub_14052F378.c)
 *     sub_14052F618 @ 0x14052F618 (sub_14052F618.c)
 */

__int64 __fastcall sub_14052E568(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  unsigned int v9; // r12d
  unsigned __int16 v11; // bx
  _QWORD *i; // rcx
  _QWORD *v13; // rcx
  int v14; // r13d
  unsigned __int64 v15; // r14
  unsigned int v16; // edi
  char v17; // si
  unsigned __int64 v18; // rbx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  _QWORD *v22; // [rsp+20h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-18h]

  v9 = a8;
  v25 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a8 && _bittest64((const signed __int64 *)(a1 + 216), 0x27u) )
  {
    LockHandle.LockQueue.Next = 0LL;
    v11 = 0;
    LockHandle.LockQueue.Lock = (volatile PKSPIN_LOCK)(a1 + 208);
    v24 = ((unsigned __int64)(unsigned __int16)a3 << 16) | 0xF2;
    sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)(a1 + 208));
    for ( i = (_QWORD *)(a9 + 8LL * a8); ; i = v22 )
    {
      v13 = i - 1;
      --v9;
      v14 = 0;
      v22 = v13;
      if ( ((*v13 >> 10) & 3) != 0 )
        v14 = 9 * ((*v13 >> 10) & 3);
      v15 = *v13 & 0xFFFFFFFFFFFFF000uLL;
      v16 = (*(_DWORD *)v13 & 0x3FF) + 1;
      while ( 1 )
      {
        v17 = 0;
        v18 = v15 ^ ((unsigned __int16)v15 ^ v11) & 0xFFF;
        if ( v16 > 1 )
        {
          do
          {
            if ( (((1 << (v14 + 13 + v17)) - 1) & (unsigned int)v15) != 0 )
              break;
            ++v17;
          }
          while ( 1 << v17 < v16 );
        }
        v19 = v16 < 1 << v17 ? (1 << v17) - v16 : 0;
        if ( v19 >= 0x1F || v14 == 9 && v19 )
          --v17;
        v25 = ((unsigned __int8)v18 ^ (unsigned __int8)(v17 + v14)) & 0x3F ^ v18;
        sub_14052F378(a1, &v24, 1LL);
        if ( v16 <= 1 << v17 )
          break;
        v16 -= 1 << v17;
        v15 += 1LL << (v17 + (unsigned __int8)v14 + 12);
        if ( !v16 )
          break;
        v11 = v25;
      }
      if ( !v9 )
        break;
      v11 = v25;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    if ( a4 || a3 == 0x10000 )
      v24 = 18LL;
    else
      v24 = ((unsigned __int64)(unsigned __int16)a3 << 16) | 0x22;
    sub_14052F378(a1, &v24, 0LL);
  }
  return sub_14052F618(a1, v20, 0LL);
}
