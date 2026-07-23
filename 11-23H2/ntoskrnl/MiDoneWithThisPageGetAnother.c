/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x1406644D4
 * Callers:
 *     MiUpdateForkMaps @ 0x140665980 (MiUpdateForkMaps.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiInitializePageColorBase @ 0x1402E1920 (MiInitializePageColorBase.c)
 *     MiWaitForFreePage @ 0x140653F98 (MiWaitForFreePage.c)
 *     MiFinishLastForkPageTable @ 0x140664A4C (MiFinishLastForkPageTable.c)
 */

_QWORD *__fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  signed __int32 v9; // eax
  unsigned int v10; // ebp
  _QWORD *v11; // r15
  volatile LONG *SharedVm; // rbx
  KIRQL v13; // al
  __int64 Page; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *result; // rax
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2 + 1664;
  v5 = *a1;
  v18 = 0LL;
  if ( v5 != -1 )
    MiFinishLastForkPageTable(a1, v5);
  MiInitializePageColorBase(v4, 0, (__int64)&v18);
  v9 = _InterlockedExchangeAdd((volatile signed __int32 *)v18, 1u);
  v10 = HIDWORD(v18) | v9 & DWORD2(v18);
  v11 = *(_QWORD **)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  while ( 1 )
  {
    Page = MiGetPage((__int64)v11, v10, 0x302u);
    *a1 = Page;
    if ( Page != -1 )
      break;
    MiUnlockWorkingSetExclusive(v4, a4, v15, v16);
    MiWaitForFreePage(v11);
    SharedVm = (volatile LONG *)MiGetSharedVm(v4);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
    a4 = v13;
  }
  result = (_QWORD *)(48 * Page - 0x220000000000LL);
  result[2] &= 0xFFFFFFFFFC00FFFFuLL;
  *result &= 0xFFFFFFFFFFFFC00FuLL;
  return result;
}
