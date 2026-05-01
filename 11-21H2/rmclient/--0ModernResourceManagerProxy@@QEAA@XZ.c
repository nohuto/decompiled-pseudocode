/*
 * XREFs of ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x18000652C
 * Callers:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180004620 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180005EF0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 * Callees:
 *     <none>
 */

ModernResourceManagerProxy *__fastcall ModernResourceManagerProxy::ModernResourceManagerProxy(
        ModernResourceManagerProxy *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &ModernResourceManagerProxy::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_OWORD *)this + 6) = 0LL;
  RtlInitializeSRWLock((char *)this + 96);
  *((_DWORD *)this + 26) = 0;
  return this;
}
