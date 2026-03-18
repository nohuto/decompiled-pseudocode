/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0016BA8
 * Callers:
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C003BB8C (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C004779C (--1FxTagTracker@@QEAA@XZ.c)
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x1C0059928 (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C0061FD8 (--1FxPkgIo@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(
        char *__t,
        unsigned __int64 __s,
        unsigned __int64 __n,
        void (__fastcall *__f)(void *))
{
  unsigned __int64 v5; // rdi
  char *v7; // rbx

  v5 = __n;
  v7 = &__t[__n * __s];
  do
  {
    v7 -= __s;
    __f(v7);
    --v5;
  }
  while ( v5 );
}
