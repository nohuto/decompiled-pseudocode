/*
 * XREFs of sub_14033FAA4 @ 0x14033FAA4
 * Callers:
 *     sub_140231B9C @ 0x140231B9C (sub_140231B9C.c)
 *     sub_1402323E8 @ 0x1402323E8 (sub_1402323E8.c)
 *     sub_14028C82C @ 0x14028C82C (sub_14028C82C.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_14038EB20 @ 0x14038EB20 (sub_14038EB20.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 *     sub_1405B3EB4 @ 0x1405B3EB4 (sub_1405B3EB4.c)
 *     sub_1405B3FA4 @ 0x1405B3FA4 (sub_1405B3FA4.c)
 * Callees:
 *     sub_1402206C0 @ 0x1402206C0 (sub_1402206C0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_14026B1C0 @ 0x14026B1C0 (sub_14026B1C0.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033B640 @ 0x14033B640 (sub_14033B640.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14033C3A0 @ 0x14033C3A0 (sub_14033C3A0.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

void __fastcall sub_14033FAA4(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // r12
  _QWORD *v5; // r14
  int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 *v9; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  unsigned __int8 *v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rsi
  __int64 v15; // rbx
  int v16; // ebp
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  unsigned __int64 *v23; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  bool v29; // zf
  unsigned __int64 v30; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 40) >> 53;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  v6 = v2 & 1;
  sub_14023CC50(BugCheckParameter2, 12);
  v7 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( v7 >= 0 )
  {
    v23 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( sub_14033B640(*v23) )
      {
        v26 = sub_140317A10(BugCheckParameter2 + 16);
        *v23 = sub_14033B6A0(v26, 0LL);
      }
      v27 = sub_14026B1C0(BugCheckParameter2);
      v28 = (*(_QWORD *)v27 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      if ( v27 != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v28 + 1851) & 0x60) == 0x40 )
        _InterlockedIncrement64((volatile signed __int64 *)(v28 + 1872));
    }
    v10 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v10 & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) )
      v5 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  else if ( (v7 & 0x10000000000LL) != 0 || (v8 = *(_QWORD *)(BugCheckParameter2 + 8), v8 <= 0) )
  {
    v9 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    v10 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && !(unsigned int)sub_1402E76C0(BugCheckParameter2 + 16)
      && sub_14033B640(*v9) )
    {
      v25 = sub_140317A10(BugCheckParameter2 + 16);
      *v9 = sub_14033B6A0(v25, 0LL);
      v10 = *(_QWORD *)(BugCheckParameter2 + 40);
    }
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 40);
    *(_QWORD *)(BugCheckParameter2 + 8) = v8 | 0x8000000000000000uLL;
  }
  v11 = *(_QWORD *)(qword_140C51F48 + 8 * ((v10 >> 43) & 0x3FF));
  v32 = *(_QWORD *)(BugCheckParameter2 + 16);
  sub_14033C3A0((unsigned __int64 *)&v32, 0);
  if ( v5 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = v13 + 48 * (v10 & 0xFFFFFFFFFFLL);
    v5 = (_QWORD *)(sub_1402CC7C0(v10 & 0xFFFFFFFFFFLL, v12, 0x80000000)
                  + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v15 = v32;
  v16 = 0;
  if ( sub_140317A80((unsigned __int64)v5) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_8;
      v29 = (v15 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_8;
      v29 = (v15 & 1) == 0;
    }
    if ( !v29 )
      v15 |= 0x8000000000000000uLL;
  }
LABEL_8:
  *v5 = v15;
  if ( v16 )
    sub_1402294F0((__int64)v5, v15);
  if ( v14 )
    sub_1402BEDD0((unsigned __int64)v5, 0x11u);
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    v18 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v18 & 0x400) != 0 )
    {
      if ( qword_140C50780 && (v18 & 0x10) == 0 )
        v18 &= ~qword_140C50780;
      sub_1402206C0(*(_QWORD *)(v18 >> 16), v18 >> 16, v17, 3);
    }
  }
  if ( v14 )
  {
    sub_140239060(v14);
    sub_140273FD0(v14, v19, v20, v21);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( !v6 )
  {
    sub_14033C300(BugCheckParameter2, 0);
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11
                                                      + 4LL * (unsigned int)sub_140273234(BugCheckParameter2)
                                                      + 6696));
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
      if ( ListEntry )
      {
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = &qword_140C52B80;
        sub_1403119F0((__int64)&LockHandle, (volatile __int64 *)&qword_140C52B80);
        v22 = (unsigned __int64)ListEntry;
        if ( !ListEntry )
          goto LABEL_57;
        v30 = (__int64)ListEntry[2].Next & 0xFFF;
        if ( v30 )
        {
          ListEntry[2].Next->Next = (_SLIST_ENTRY *)(0xAAAAAAAAAAAAAAABuLL
                                                   * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
          *(_QWORD *)(v22 + 32) += 8LL;
          v30 = *(_QWORD *)(v22 + 32) & 0xFFFLL;
        }
        if ( v30 < 0xC00 )
        {
          if ( v30 )
            v22 = 0LL;
          else
            *(_QWORD *)(v22 + 24) = MEMORY[0xFFFFF78000000320];
        }
        else
        {
LABEL_57:
          v22 = (unsigned int)dword_140C52B68;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      else
      {
        v22 = (unsigned int)dword_140C52B68;
      }
      if ( v22 )
        KeInsertQueueDpc(&stru_140C52E20, 0LL, 0LL);
    }
  }
}
