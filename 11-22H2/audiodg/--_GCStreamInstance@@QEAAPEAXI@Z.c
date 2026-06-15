/*
 * XREFs of ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x1400557D4
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140055CD0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 * Callees:
 *     ??1CStreamInstance@@QEAA@XZ @ 0x1400029AC (--1CStreamInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CStreamInstance *__fastcall CStreamInstance::`scalar deleting destructor'(CStreamInstance *this)
{
  CStreamInstance::~CStreamInstance(this);
  operator delete(this);
  return this;
}
