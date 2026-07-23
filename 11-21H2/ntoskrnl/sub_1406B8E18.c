/*
 * XREFs of sub_1406B8E18 @ 0x1406B8E18
 * Callers:
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 * Callees:
 *     KeInitializeQueue @ 0x14023E540 (KeInitializeQueue.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_140796BF4 @ 0x140796BF4 (sub_140796BF4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406B8E18(ULONG_PTR BugCheckParameter2, PHANDLE Handle, _QWORD *a3)
{
  struct _KQUEUE *Pool2; // rax
  struct _KQUEUE *v7; // rdi
  int inserted; // ebx
  PVOID NewObject; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v11[3]; // [rsp+60h] [rbp+Fh] BYREF
  int v12; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+7Ch] [rbp+2Bh]
  __int128 v14; // [rsp+80h] [rbp+2Fh]

  v13 = 0;
  NewObject = 0LL;
  v11[1] = 0LL;
  v11[2] = 0LL;
  v11[0] = 48LL;
  v12 = 64;
  v14 = 0LL;
  Pool2 = (struct _KQUEUE *)ExAllocatePool2(64LL, 72LL, 1903653957LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    KeInitializeQueue(Pool2, 0);
    inserted = sub_14072B3B0(0, (_DWORD)qword_140D06AE8, (unsigned int)v11, 1);
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      memset(0LL, 0, 0x70uLL);
      MEMORY[0x62] = 4;
      MEMORY[0x30] = v7;
      sub_140796BF4(BugCheckParameter2);
      MEMORY[0x20] = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15DB0, 0LL);
      if ( *(__int64 **)(qword_140C15DA0 + 8) != &qword_140C15DA0 )
        __fastfail(3u);
      MEMORY[0] = qword_140C15DA0;
      MEMORY[8] = &qword_140C15DA0;
      *(_QWORD *)(qword_140C15DA0 + 8) = 0LL;
      qword_140C15DA0 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15DB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C15DB0);
      sub_1402AFC00((ULONG_PTR)&qword_140C15DB0);
      MEMORY[0x18] = 16LL;
      MEMORY[0x10] = 16LL;
      _InterlockedOr16((volatile signed __int16 *)0x62, 0x80u);
      inserted = ObInsertObject(0LL, 0LL, 0x804u, 1u, &NewObject, Handle);
      if ( inserted >= 0 )
        *a3 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
