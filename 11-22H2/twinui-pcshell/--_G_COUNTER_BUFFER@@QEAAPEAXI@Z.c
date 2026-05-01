/*
 * XREFs of ??_G_COUNTER_BUFFER@@QEAAPEAXI@Z @ 0x1804131EC
 * Callers:
 *     ??1Cpu@@UEAA@XZ @ 0x1804131A0 (--1Cpu@@UEAA@XZ.c)
 *     ?InitializeCpuQuery@Cpu@@QEAAJXZ @ 0x18041338C (-InitializeCpuQuery@Cpu@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
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
