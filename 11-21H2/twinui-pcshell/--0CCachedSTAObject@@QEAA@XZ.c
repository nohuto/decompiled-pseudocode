/*
 * XREFs of ??0CCachedSTAObject@@QEAA@XZ @ 0x1805EA3EC
 * Callers:
 *     ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x1805EF3E0 (-_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800D2E88 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

CCachedSTAObject *__fastcall CCachedSTAObject::CCachedSTAObject(CCachedSTAObject *this)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener(this);
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CCachedSTAObject::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
