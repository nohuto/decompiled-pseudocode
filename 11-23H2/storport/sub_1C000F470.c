/*
 * XREFs of sub_1C000F470 @ 0x1C000F470
 * Callers:
 *     sub_1C000F3C0 @ 0x1C000F3C0 (sub_1C000F3C0.c)
 * Callees:
 *     sub_1C000EF50 @ 0x1C000EF50 (sub_1C000EF50.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     sub_1C0061378 @ 0x1C0061378 (sub_1C0061378.c)
 *     sub_1C0068004 @ 0x1C0068004 (sub_1C0068004.c)
 *     sub_1C0068E04 @ 0x1C0068E04 (sub_1C0068E04.c)
 *     sub_1C006905C @ 0x1C006905C (sub_1C006905C.c)
 */

__int64 __fastcall sub_1C000F470(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r12d
  __int64 v4; // r14
  unsigned int v5; // ebp
  int v6; // edi
  KSPIN_LOCK *v7; // rbx
  KSPIN_LOCK v8; // rcx
  unsigned int v9; // eax
  char v11; // r14
  unsigned int v12; // r13d
  int v13; // edi
  __int64 v14; // r15
  KSPIN_LOCK *v15; // rbx
  KSPIN_LOCK *v16; // rax
  KSPIN_LOCK v17; // r11
  _DWORD *v18; // r14
  __int64 v19; // r8
  unsigned int v20; // eax
  ULONGLONG v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r11
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  KSPIN_LOCK v29; // rcx
  __int64 v30; // rdx
  char v31; // [rsp+30h] [rbp-98h]
  int v32; // [rsp+34h] [rbp-94h]
  __int64 v33; // [rsp+38h] [rbp-90h]
  __int64 v34; // [rsp+40h] [rbp-88h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+48h] [rbp-80h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-68h] BYREF
  char v39; // [rsp+D8h] [rbp+10h]
  char v40; // [rsp+E0h] [rbp+18h]
  char v41; // [rsp+E8h] [rbp+20h]

  v2 = a2[1];
  v40 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 456), 2u);
  v4 = a1;
  v5 = 0;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v11 = 1;
    v41 = 0;
    v31 = 1;
    v12 = 0;
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    while ( 1 )
    {
      v13 = 0;
      v39 = 0;
      if ( a2[2] )
        break;
LABEL_29:
      v11 = 0;
      v31 = 0;
      if ( !v39 || v12 >= 0x64 )
        goto LABEL_30;
    }
    while ( 1 )
    {
      v14 = 0LL;
      v34 = 0LL;
      v33 = 0LL;
      v32 = 0;
      ++v12;
      v15 = (KSPIN_LOCK *)&a2[16 * v13 + 16];
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v15 + 5, &LockHandle);
      if ( v11 )
      {
        v16 = (KSPIN_LOCK *)v15[2];
        v15[4] = (KSPIN_LOCK)v16;
        if ( v16 != v15 + 2 )
          v40 = 1;
      }
      v17 = v15[4];
      v18 = v15 + 2;
      if ( (KSPIN_LOCK *)v17 == v15 + 2 )
      {
        v19 = 0LL;
      }
      else
      {
        v19 = v17 - 64;
        v33 = v17 - 64;
        v21 = *(_QWORD *)(v17 + 24) + (unsigned int)(5000000 * *(_DWORD *)(v17 + 16));
        if ( v21 > UnbiasedInterruptTime || (*(_BYTE *)(v19 + 16) & 0x1C) == 0x10 )
        {
          v15[4] = (KSPIN_LOCK)v18;
          v33 = v17 - 64;
        }
        else
        {
          v22 = *(_QWORD *)(v19 + 224);
          if ( v21 < *(_QWORD *)(v22 + 1336) )
          {
            v23 = *(_QWORD *)(v22 + 24);
            *(_OWORD *)BugCheckParameter2 = 0LL;
            sub_1C0010EE0(*(_QWORD *)(v23 + 16), BugCheckParameter2);
            if ( dword_1C00933E0 == 1 )
            {
              sub_1C006905C(
                v33,
                *(_QWORD *)(*(_QWORD *)(v33 + 224) + 1336LL) - *(_QWORD *)(v24 + 24),
                BugCheckParameter2);
            }
            else if ( dword_1C00933E0 == 2 )
            {
              KeBugCheckEx(
                0xF0u,
                1uLL,
                BugCheckParameter2[1],
                *(_QWORD *)(v33 + 168),
                *(_QWORD *)(*(_QWORD *)(v33 + 224) + 8LL));
            }
            v19 = v33;
          }
          if ( (*a2 & 4) != 0 )
          {
            v25 = *(_DWORD *)(v19 + 776);
            if ( v25 == 3 )
            {
              v5 = -1073741643;
              v39 = 0;
            }
            else if ( v25 )
            {
              if ( (*(_BYTE *)(v19 + 17) & 4) != 0 )
              {
                v39 = 1;
                v15[4] = *(_QWORD *)v15[4];
              }
            }
            else
            {
              v39 = 1;
              v15[4] = *(_QWORD *)v15[4];
              v26 = *(_QWORD *)(v19 + 168);
              v14 = *(_QWORD *)(v19 + 224);
              v34 = v26;
              v27 = *(unsigned __int8 *)(v26 + 2);
              if ( (_BYTE)v27 == 40 )
                v27 = *(unsigned int *)(v26 + 20);
              v32 = v27;
              if ( (unsigned int)v27 > 0x20 || (v28 = 0x1000D0000LL, !_bittest64(&v28, v27)) )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 776), 1, 0) )
                {
                  v14 = 0LL;
                  v34 = 0LL;
                  if ( (*(_BYTE *)(v19 + 17) & 4) == 0 )
                    v15[4] = (KSPIN_LOCK)v18;
                }
              }
            }
          }
          else
          {
            v5 = -1073741643;
          }
        }
      }
      if ( (*a2 & 4) != 0 )
      {
        if ( v5 != -1073741643 )
          goto LABEL_23;
        goto LABEL_68;
      }
      if ( v5 == -1073741643 )
      {
        *((_DWORD *)v15 + 12) = -2;
        goto LABEL_68;
      }
      v20 = *((_DWORD *)v15 + 12);
      if ( !v20 )
        goto LABEL_22;
      if ( v20 > v2 )
        break;
      *((_DWORD *)v15 + 12) = 0;
LABEL_64:
      v29 = *v15;
      if ( (*(_DWORD *)(*v15 + 48) & 1) != 0 )
      {
        *((_DWORD *)v15 + 12) = v2;
LABEL_23:
        if ( v41 || !v14 )
          goto LABEL_25;
        goto LABEL_68;
      }
      v19 = v29 - 48;
      *((_DWORD *)v15 + 12) = -2;
      v33 = v29 - 48;
      v5 = -1073741643;
LABEL_68:
      if ( v19 && *(_DWORD *)(v19 + 776) != 3 )
      {
        v30 = *a2 >> 2;
        LOBYTE(v30) = (*a2 & 4) != 0;
        sub_1C0068004(v19, v30);
        v41 = 1;
      }
LABEL_25:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v5 == -1073741643 )
        goto LABEL_29;
      if ( v14 )
      {
        if ( v32 == 16 )
        {
          v5 = -1073741643;
          sub_1C0068E04(v33);
          goto LABEL_30;
        }
        if ( (unsigned int)(v32 - 18) > 1 && v32 != 32 )
        {
          *(_BYTE *)(v33 + 17) |= 4u;
          if ( (int)sub_1C0061378(v14, v34) < 0 )
          {
            *(_BYTE *)(v33 + 17) &= ~4u;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v33 + 776), 0, 1) == 4 )
            {
              sub_1C000EF50(*(_QWORD *)(v14 + 24), v33, 1);
              v5 = 0;
              goto LABEL_29;
            }
            v5 = -1073741643;
LABEL_30:
            v4 = a1;
            goto LABEL_7;
          }
        }
      }
      if ( (unsigned int)++v13 >= a2[2] )
        goto LABEL_29;
      v11 = v31;
    }
    v20 -= v2;
    *((_DWORD *)v15 + 12) = v20;
LABEL_22:
    if ( v20 )
      goto LABEL_23;
    goto LABEL_64;
  }
  v6 = 0;
  if ( !a2[2] )
    return v5;
  while ( 1 )
  {
    v7 = (KSPIN_LOCK *)&a2[16 * v6 + 16];
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v7 + 5, &LockHandle);
    v8 = *v7;
    if ( (KSPIN_LOCK *)*v7 != v7 )
      v40 = 1;
    v9 = *((_DWORD *)v7 + 12);
    if ( v9 > 0xFFFFFFFD )
      goto LABEL_6;
    if ( v9 && v9 <= v2 )
      break;
    if ( v9 > v2 )
    {
      v9 -= v2;
      *((_DWORD *)v7 + 12) = v9;
    }
    if ( !v9 )
      goto LABEL_83;
LABEL_6:
    v5 = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( (unsigned int)++v6 >= a2[2] )
      goto LABEL_7;
  }
  *((_DWORD *)v7 + 12) = 0;
LABEL_83:
  sub_1C0068004(v8 - 48, 0LL);
  *((_DWORD *)v7 + 12) = -2;
  v5 = -1073741643;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_7:
  if ( v40 )
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 456), 2u);
  return v5;
}
