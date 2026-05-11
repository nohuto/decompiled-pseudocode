/*
 * XREFs of ??0CSidebandDevice@@QEAA@PEAU_KSDEVICE@@PEAUIUnknown@@@Z @ 0x1C0008F14
 * Callers:
 *     InitializeSideband @ 0x1C0008244 (InitializeSideband.c)
 * Callees:
 *     <none>
 */

CSidebandDevice *__fastcall CSidebandDevice::CSidebandDevice(
        CSidebandDevice *this,
        struct _KSDEVICE *a2,
        struct IUnknown *a3)
{
  char *v4; // rax

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = (char *)this + 8;
  *(_QWORD *)this = &CSidebandDevice::`vftable'{for `ISidebandDevice'};
  *((_QWORD *)this + 1) = &CSidebandDevice::`vftable'{for `CUnknown'};
  *((_DWORD *)this + 8) = 1000;
  v4 = (char *)a2->Context + 712;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = v4;
  *((_QWORD *)v4 + 19) = this;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  *((_QWORD *)this + 16) = (char *)this + 120;
  *((_QWORD *)this + 15) = (char *)this + 120;
  *((_QWORD *)this + 18) = (char *)this + 136;
  *((_QWORD *)this + 17) = (char *)this + 136;
  *((_QWORD *)this + 20) = (char *)this + 152;
  *((_QWORD *)this + 19) = (char *)this + 152;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 21);
  KeInitializeSpinLock((PKSPIN_LOCK)this + 30);
  KeInitializeEvent((PRKEVENT)((char *)this + 184), SynchronizationEvent, 0);
  KeInitializeSemaphore((PRKSEMAPHORE)((char *)this + 208), 0, 0x7FFFFFFF);
  *((_QWORD *)this + 22) = 0LL;
  return this;
}
