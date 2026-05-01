/*
 * XREFs of ??_G_COUNTER_BUFFER@@QEAAPEAXI@Z @ 0x180345400
 * Callers:
 *     ??1Cpu@@UEAA@XZ @ 0x1803453B4 (--1Cpu@@UEAA@XZ.c)
 *     ?InitializeCpuQuery@Cpu@@QEAAJXZ @ 0x1803455A0 (-InitializeCpuQuery@Cpu@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801896CC (--_V@YAXPEAX@Z.c)
 */

void **__fastcall _COUNTER_BUFFER::`scalar deleting destructor'(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
    operator delete[](v2);
  operator delete(this);
  return this;
}
