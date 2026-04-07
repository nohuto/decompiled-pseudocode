/*
 * XREFs of ??0IMILResourceCache@@QEAA@XZ @ 0x18004F360
 * Callers:
 *     ??0CMILResourceCache@@IEAA@XZ @ 0x18004F314 (--0CMILResourceCache@@IEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18006BA66 (--0IUnknown@@QEAA@XZ.c)
 */

IMILResourceCache *__fastcall IMILResourceCache::IMILResourceCache(IMILResourceCache *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *(_QWORD *)this = &IMILResourceCache::`vftable';
  return this;
}
