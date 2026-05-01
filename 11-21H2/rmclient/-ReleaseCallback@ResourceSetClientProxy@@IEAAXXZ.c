/*
 * XREFs of ?ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ @ 0x180020238
 * Callers:
 *     ?ReleaseResourcesImpl@ResourceSetClientProxy@@IEAAJK@Z @ 0x180020350 (-ReleaseResourcesImpl@ResourceSetClientProxy@@IEAAJK@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001F674 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

void __fastcall ResourceSetClientProxy::ReleaseCallback(ResourceSetClientProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 440);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 11);
  if ( *((_QWORD *)this + 53) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 53, 0LL);
  LeaveCriticalSection(v1);
}
