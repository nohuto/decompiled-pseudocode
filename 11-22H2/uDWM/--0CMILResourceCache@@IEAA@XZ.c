/*
 * XREFs of ??0CMILResourceCache@@IEAA@XZ @ 0x18004F314
 * Callers:
 *     ??0CBitmap@@QEAA@XZ @ 0x18004F154 (--0CBitmap@@QEAA@XZ.c)
 * Callees:
 *     ??0IMILResourceCache@@QEAA@XZ @ 0x18004F360 (--0IMILResourceCache@@QEAA@XZ.c)
 */

CMILResourceCache *__fastcall CMILResourceCache::CMILResourceCache(CMILResourceCache *this)
{
  CMILResourceCache *result; // rax

  IMILResourceCache::IMILResourceCache(this);
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 1) = (char *)this + 40;
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_DWORD *)this + 6) = 2;
  *((_DWORD *)this + 7) = 2;
  *(_QWORD *)this = &CMILResourceCache::`vftable';
  result = this;
  *((_DWORD *)this + 14) = 0;
  return result;
}
