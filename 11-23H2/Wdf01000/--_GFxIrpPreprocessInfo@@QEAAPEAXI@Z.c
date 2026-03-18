/*
 * XREFs of ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C003BB8C
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C003BA20 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C003D530 (--1FxDevice@@UEAA@XZ.c)
 *     ??1WDFCXDEVICE_INIT@@QEAA@XZ @ 0x1C003FBFC (--1WDFCXDEVICE_INIT@@QEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0016BA8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

FxIrpPreprocessInfo *__fastcall FxIrpPreprocessInfo::`scalar deleting destructor'(FxIrpPreprocessInfo *this)
{
  `vector destructor iterator'(
    (char *)this->Dispatch,
    0x18uLL,
    0x1CuLL,
    (void (__fastcall *)(void *))FxIrpPreprocessInfo::Info::~Info);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
