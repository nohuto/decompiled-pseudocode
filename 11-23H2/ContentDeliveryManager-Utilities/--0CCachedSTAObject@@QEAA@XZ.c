/*
 * XREFs of ??0CCachedSTAObject@@QEAA@XZ @ 0x18002AD70
 * Callers:
 *     ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x180042CF4 (-_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z.c)
 * Callees:
 *     <none>
 */

CCachedSTAObject *__fastcall CCachedSTAObject::CCachedSTAObject(CCachedSTAObject *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CCachedSTAObject::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
