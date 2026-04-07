/*
 * XREFs of ??0IMILResourceCache@@QEAA@XZ @ 0x180013FAC
 * Callers:
 *     ??0CMILResourceCache@@IEAA@XZ @ 0x18005A3B8 (--0CMILResourceCache@@IEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18009C4A4 (--0IUnknown@@QEAA@XZ.c)
 */

IMILResourceCache *__fastcall IMILResourceCache::IMILResourceCache(IMILResourceCache *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *(_QWORD *)this = &IMILResourceCache::`vftable';
  return this;
}
