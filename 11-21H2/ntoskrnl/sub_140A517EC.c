/*
 * XREFs of sub_140A517EC @ 0x140A517EC
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1403965EC @ 0x1403965EC (sub_1403965EC.c)
 *     sub_140396620 @ 0x140396620 (sub_140396620.c)
 *     sub_140397184 @ 0x140397184 (sub_140397184.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

LONG sub_140A517EC()
{
  __int64 Pool2; // rax
  __int64 v1; // rbx
  LONG result; // eax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Pool2 = ExAllocatePool2(64LL, 88LL, 544040269LL);
  v1 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 1;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
    *(_BYTE *)(Pool2 + 80) = 1;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    sub_140396620(&LockHandle);
    qword_140C23740 = v1;
    if ( dword_140C23768 == 1 )
    {
      v3 = (_QWORD *)qword_140C23758;
      v4 = *(_QWORD **)(qword_140C23758 + 8);
      if ( *(__int64 **)qword_140C23758 != &qword_140C23750 || *v4 != qword_140C23758 )
        __fastfail(3u);
      qword_140C23758 = *(_QWORD *)(qword_140C23758 + 8);
      *v4 = &qword_140C23750;
      v3[1] = v3;
      *v3 = v3;
      sub_140397184((__int64)v3);
      --dword_140C23768;
    }
    dword_140C2376C = 0;
    sub_1403965EC(&LockHandle);
  }
  result = KeResetEvent(&stru_140C23780);
  dword_140C23798 = 0;
  return result;
}
