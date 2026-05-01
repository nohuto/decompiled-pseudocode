/*
 * XREFs of ?Release@?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@UEAAKXZ @ 0x180044420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1PendingActivationData@WindowEventDispatcher@@QEAA@XZ @ 0x1803DF274 (--1PendingActivationData@WindowEventDispatcher@@QEAA@XZ.c)
 */

__int64 __fastcall CRefCountedObject<WindowEventDispatcher::PendingActivationData>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 10);
  if ( !v2 && a1 )
  {
    WindowEventDispatcher::PendingActivationData::~PendingActivationData((WindowEventDispatcher::PendingActivationData *)(a1 + 2));
    operator delete((void *)a1, 0x30uLL);
  }
  return v2;
}
